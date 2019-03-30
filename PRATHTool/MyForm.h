#pragma once
#include "InputTime.h"
#include <windows.h>

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
	private: System::DateTime ACTime;
	private: System::TimeSpan t;

	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Timer^  shutDownTimer;
	private: System::Windows::Forms::Label^  TimeLabel;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  ACLabel;
	private: System::Windows::Forms::Button^  ACStopButton;
	private: System::Windows::Forms::Button^  ACStartButton;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  ACMaxTimeTextBox;

	private: System::Windows::Forms::TextBox^  ACMinTimeTextBox;

	private: System::Windows::Forms::Timer^  ACTimer;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::CheckBox^  ACHotkeyCheckBox;
	private: System::Windows::Forms::Timer^  keyPressCheckTimer;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->shutDownTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->TimeLabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->ACHotkeyCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->ACLabel = (gcnew System::Windows::Forms::Label());
			this->ACStopButton = (gcnew System::Windows::Forms::Button());
			this->ACStartButton = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ACMaxTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ACMinTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ACTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->keyPressCheckTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 60);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(42, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(63, 60);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(42, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(111, 60);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(42, 20);
			this->textBox3->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(54, 86);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(54, 115);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Stop";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// shutDownTimer
			// 
			this->shutDownTimer->Tick += gcnew System::EventHandler(this, &MyForm::shutDownTimer_Tick);
			// 
			// TimeLabel
			// 
			this->TimeLabel->AutoSize = true;
			this->TimeLabel->Location = System::Drawing::Point(60, 141);
			this->TimeLabel->Name = L"TimeLabel";
			this->TimeLabel->Size = System::Drawing::Size(10, 13);
			this->TimeLabel->TabIndex = 5;
			this->TimeLabel->Text = L"-";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->TimeLabel);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(1, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 200);
			this->panel1->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(12, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 26);
			this->label2->TabIndex = 7;
			this->label2->Text = L"- Enter hours/minutes/seconds in \r\n   which computer will turn off.";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(11, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 24);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Shutdown Timer";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->ACHotkeyCheckBox);
			this->panel2->Controls->Add(this->ACLabel);
			this->panel2->Controls->Add(this->ACStopButton);
			this->panel2->Controls->Add(this->ACStartButton);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->ACMaxTimeTextBox);
			this->panel2->Controls->Add(this->ACMinTimeTextBox);
			this->panel2->Location = System::Drawing::Point(216, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(296, 215);
			this->panel2->TabIndex = 7;
			// 
			// ACHotkeyCheckBox
			// 
			this->ACHotkeyCheckBox->AutoSize = true;
			this->ACHotkeyCheckBox->Location = System::Drawing::Point(174, 115);
			this->ACHotkeyCheckBox->Name = L"ACHotkeyCheckBox";
			this->ACHotkeyCheckBox->Size = System::Drawing::Size(102, 17);
			this->ACHotkeyCheckBox->TabIndex = 12;
			this->ACHotkeyCheckBox->Text = L"R-CTRL Hotkey";
			this->ACHotkeyCheckBox->UseVisualStyleBackColor = true;
			// 
			// ACLabel
			// 
			this->ACLabel->AutoSize = true;
			this->ACLabel->Location = System::Drawing::Point(114, 157);
			this->ACLabel->Name = L"ACLabel";
			this->ACLabel->Size = System::Drawing::Size(10, 13);
			this->ACLabel->TabIndex = 11;
			this->ACLabel->Text = L"-";
			// 
			// ACStopButton
			// 
			this->ACStopButton->Enabled = false;
			this->ACStopButton->Location = System::Drawing::Point(108, 131);
			this->ACStopButton->Name = L"ACStopButton";
			this->ACStopButton->Size = System::Drawing::Size(60, 23);
			this->ACStopButton->TabIndex = 10;
			this->ACStopButton->Text = L"Stop";
			this->ACStopButton->UseVisualStyleBackColor = true;
			this->ACStopButton->Click += gcnew System::EventHandler(this, &MyForm::ACStopButton_Click);
			// 
			// ACStartButton
			// 
			this->ACStartButton->Location = System::Drawing::Point(108, 102);
			this->ACStartButton->Name = L"ACStartButton";
			this->ACStartButton->Size = System::Drawing::Size(60, 23);
			this->ACStartButton->TabIndex = 9;
			this->ACStartButton->Text = L"Start";
			this->ACStartButton->UseVisualStyleBackColor = true;
			this->ACStartButton->Click += gcnew System::EventHandler(this, &MyForm::ACStartButton_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Location = System::Drawing::Point(32, 31);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(227, 39);
			this->label4->TabIndex = 8;
			this->label4->Text = L"- Enter time range below in milliseconds\r\n- Every click is done at a random time "
				L"between\r\n   the given range.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(31, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(231, 24);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Random Interval Clicker";
			// 
			// ACMaxTimeTextBox
			// 
			this->ACMaxTimeTextBox->Location = System::Drawing::Point(142, 73);
			this->ACMaxTimeTextBox->Name = L"ACMaxTimeTextBox";
			this->ACMaxTimeTextBox->Size = System::Drawing::Size(59, 20);
			this->ACMaxTimeTextBox->TabIndex = 2;
			// 
			// ACMinTimeTextBox
			// 
			this->ACMinTimeTextBox->Location = System::Drawing::Point(77, 73);
			this->ACMinTimeTextBox->Name = L"ACMinTimeTextBox";
			this->ACMinTimeTextBox->Size = System::Drawing::Size(59, 20);
			this->ACMinTimeTextBox->TabIndex = 1;
			// 
			// ACTimer
			// 
			this->ACTimer->Tick += gcnew System::EventHandler(this, &MyForm::ACTimer_Tick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Control;
			this->label5->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label5->Location = System::Drawing::Point(61, 226);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"BTC Address -  ";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Control;
			this->textBox4->Location = System::Drawing::Point(148, 223);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(241, 20);
			this->textBox4->TabIndex = 10;
			this->textBox4->Text = L"3KwkiTj1QhmmUgHkwfWscTHUDbNd9e4QQH";
			// 
			// keyPressCheckTimer
			// 
			this->keyPressCheckTimer->Interval = 1;
			this->keyPressCheckTimer->Tick += gcnew System::EventHandler(this, &MyForm::keyPressCheckTimer_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(517, 258);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(506, 297);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PRATHTool";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		keyPressCheckTimer->Start();

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { //Shutdown timer start button
		if (textBox1->Text == "" && textBox2->Text == "" && textBox3->Text == "")
		{

		}
		else
		{
			InputTime IT(textBox1->Text, textBox2->Text, textBox3->Text); //Create our InputTime object

			if (IT.Hours == 0 && IT.Minutes == 0 && IT.Seconds == 0)
			{

			}
			else
			{
				button1->Enabled = false;
				button2->Enabled = true;
				textBox1->Text = "";
				textBox2->Text = "";
				textBox3->Text = "";

				timeOriginal = System::DateTime::Now;
				time = timeOriginal.AddHours(IT.Hours).AddMinutes(IT.Minutes).AddSeconds(IT.Seconds);
				t = time - timeOriginal;
				if (t.TotalSeconds > 86400) //86400 == total seconds in a day
				{
					time = timeOriginal.AddHours(24); //If more than 24 hours are entered, set timer to 24 hours
				}
				shutDownTimer->Interval = 1000;
				shutDownTimer->Start();
			}

		}

	}
	private: System::Void shutDownTimer_Tick(System::Object^  sender, System::EventArgs^  e) {

		time = time.AddSeconds(-1);
		t = time - timeOriginal;

		if (t.Hours <= 0 && t.Minutes <= 0 && t.Seconds <= 0)
		{
			TimeLabel->Text = "Shutting Down!";
			shutDownTimer->Stop();
			Diagnostics::ProcessStartInfo^ p = gcnew Diagnostics::ProcessStartInfo("cmd", "/c" + "shutdown -s -t 1");
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

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { //Shutdown Timer stop button
		shutDownTimer->Stop();
		TimeLabel->Text = "";
		button1->Enabled = true;
		button2->Enabled = false;
	}

	private: System::Void ACStartButton_Click(System::Object^  sender, System::EventArgs^  e) {

		if (checkACValues(ACMinTimeTextBox->Text, ACMaxTimeTextBox->Text) == true)
		{
			Random r;
			int val = r.Next(Convert::ToInt32(ACMinTimeTextBox->Text), Convert::ToInt32(ACMaxTimeTextBox->Text));
			ACTimer->Interval = val;
			ACTime = DateTime::Now.AddMilliseconds(val);

			ACLabel->Text = "Next click at\n" + ACTime.ToLongDateString() + "\n" + ACTime.ToLongTimeString() + "\nNext click interval: " + val.ToString() + "ms";

			ACTimer->Start();

			ACStartButton->Enabled = false;
			ACStopButton->Enabled = true;
		}


	}
	private: System::Void ACTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
		//MouseClick
		mouse_event(MOUSEEVENTF_LEFTDOWN, System::Windows::Forms::Cursor::Position.X, System::Windows::Forms::Cursor::Position.Y, 0, 0);
		mouse_event(MOUSEEVENTF_LEFTUP, System::Windows::Forms::Cursor::Position.X, System::Windows::Forms::Cursor::Position.Y, 0, 0);
		//


		Random r;
		int val = r.Next(Convert::ToInt32(ACMinTimeTextBox->Text), Convert::ToInt32(ACMaxTimeTextBox->Text));
		ACTimer->Interval = val;
		ACTime = DateTime::Now.AddMilliseconds(val);
		ACLabel->Text = "Next click at\n" + ACTime.ToLongDateString() + "\n" + ACTime.ToLongTimeString() + "\nNext click interval: " + val.ToString() + "ms";
	}
	private: System::Void ACStopButton_Click(System::Object^  sender, System::EventArgs^  e) {
		ACTimer->Stop();
		ACLabel->Text = "";
		ACStartButton->Enabled = true;
		ACStopButton->Enabled = false;;
	}

	private: bool checkACValues(System::String^ min, System::String^ max)
	{
		bool valuesAreGood;
		int i, j;
		try
		{
			i = Convert::ToInt32(min);
			j = Convert::ToInt32(max);
			if (i >= j)
				valuesAreGood = false;
			else
				valuesAreGood = true;
		}
		catch (...)
		{
			valuesAreGood = false;
		}
		return valuesAreGood;
	}
	private: System::Void keyPressCheckTimer_Tick(System::Object^  sender, System::EventArgs^  e) {

		if (ACHotkeyCheckBox->Checked == true)
		{
			if (GetKeyState(VK_RCONTROL) & 0x8000)
			{
				keyPressCheckTimer->Stop();

				if (ACStartButton->Enabled == false) //Clicker is running
				{
					ACStopButton->PerformClick();
				}
				else if (ACStopButton->Enabled == false) //Clicker is stopped
				{
					ACStartButton->PerformClick();
				}

				System::Threading::Thread::Sleep(500);
				keyPressCheckTimer->Start();

			}
		}
	}
	};
}
