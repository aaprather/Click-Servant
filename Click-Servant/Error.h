#pragma once

namespace PRATHTool {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Error
	/// </summary>
	public ref class Error : public System::Windows::Forms::Form
	{
	private: System::Drawing::Point Point;
	private: System::Windows::Forms::TextBox^ errorTextBox;
	private: System::Windows::Forms::Button^ okButton;

	private:System::String^ ErrorMessage;
	public:
		Error(System::Drawing::Point point, System::String^ errorMessage)
		{
			InitializeComponent();
			Point = point;
			ErrorMessage = errorMessage;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Error()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Error::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->errorTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->okButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(58, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(72, 65);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel1->Controls->Add(this->errorTextBox);
			this->panel1->Location = System::Drawing::Point(8, 82);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(184, 66);
			this->panel1->TabIndex = 1;
			// 
			// errorTextBox
			// 
			this->errorTextBox->BackColor = System::Drawing::Color::DarkSlateGray;
			this->errorTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->errorTextBox->ForeColor = System::Drawing::Color::LightBlue;
			this->errorTextBox->Location = System::Drawing::Point(4, 3);
			this->errorTextBox->Multiline = true;
			this->errorTextBox->Name = L"errorTextBox";
			this->errorTextBox->ReadOnly = true;
			this->errorTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->errorTextBox->Size = System::Drawing::Size(174, 61);
			this->errorTextBox->TabIndex = 2;
			this->errorTextBox->TabStop = false;
			this->errorTextBox->Text = L"Error";
			this->errorTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label1->Location = System::Drawing::Point(32, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"An error has occurred!";
			// 
			// okButton
			// 
			this->okButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"okButton.BackgroundImage")));
			this->okButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->okButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->okButton->Location = System::Drawing::Point(58, 152);
			this->okButton->Name = L"okButton";
			this->okButton->Size = System::Drawing::Size(60, 23);
			this->okButton->TabIndex = 16;
			this->okButton->Text = L"Ok";
			this->okButton->UseVisualStyleBackColor = true;
			this->okButton->Click += gcnew System::EventHandler(this, &Error::OkButton_Click);
			// 
			// Error
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(196, 183);
			this->Controls->Add(this->okButton);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(212, 222);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(212, 222);
			this->Name = L"Error";
			this->Text = L"Error!";
			this->Load += gcnew System::EventHandler(this, &Error::Error_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Error_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SetDesktopLocation(Point.X+35, Point.Y+35);
		errorTextBox->Text = ErrorMessage;
		Console::Beep();
	}
	private: System::Void OkButton_Click(System::Object^ sender, System::EventArgs^ e) {
		
		this->Close();
	}
};
}
