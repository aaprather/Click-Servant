#pragma once
#include "InputTime.h"

namespace PRATHTool {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::DateTime timeOriginal;
	private: System::DateTime time;

	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Timer^  shutDownTimer;
	private: System::Windows::Forms::Label^  TimeLabel;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->shutDownTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->TimeLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(42, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(60, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(42, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(108, 12);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(42, 20);
			this->textBox3->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(51, 38);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(51, 67);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Stop";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// shutDownTimer
			// 
			this->shutDownTimer->Tick += gcnew System::EventHandler(this, &MyForm::shutDownTimer_Tick);
			// 
			// TimeLabel
			// 
			this->TimeLabel->AutoSize = true;
			this->TimeLabel->Location = System::Drawing::Point(57, 93);
			this->TimeLabel->Name = L"TimeLabel";
			this->TimeLabel->Size = System::Drawing::Size(10, 13);
			this->TimeLabel->TabIndex = 5;
			this->TimeLabel->Text = L"-";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->TimeLabel);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "" && textBox2->Text == "" && textBox3->Text == "")
		{

		}
		else
		{
			button1->Enabled = false;
			button2->Enabled = true;
			InputTime IT(textBox1->Text, textBox2->Text, textBox3->Text);
			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";

			timeOriginal = System::DateTime::Now;
			time = timeOriginal.AddHours(IT.Hours).AddMinutes(IT.Minutes).AddSeconds(IT.Seconds);

			shutDownTimer->Interval = 1000;
			shutDownTimer->Start();
		}

	}
	private: System::Void shutDownTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
		time = time.AddSeconds(-1);
		TimeSpan t = time - timeOriginal;
		if (t.Hours == 0 && t.Minutes == 0 && t.Seconds == 0)
		{
			TimeLabel->Text = "Shutting Down!";
			shutDownTimer->Stop();
			Diagnostics::ProcessStartInfo^ p = gcnew Diagnostics::ProcessStartInfo("cmd", "/c" + "ipconfig");
			p->CreateNoWindow = false;
			p->RedirectStandardOutput = true;
			p->UseShellExecute = false;
			Diagnostics::Process^ pc = gcnew Diagnostics::Process();
			pc->StartInfo = p;
			pc->Start();
			MessageBox::Show(pc->StandardOutput->ReadToEnd());
		}
		else
		{
			TimeLabel->Text = "Shutdown in\n" + t.Hours + " : " + t.Minutes + " : " + t.Seconds;
		}



	}

	};
}
