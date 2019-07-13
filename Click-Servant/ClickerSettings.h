#pragma once
#include "Profile.h"
#include "Error.h"

namespace PRATHTool {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ClickerSettings
	/// </summary>
	public ref class ClickerSettings : public System::Windows::Forms::Form
	{

	private: Profile^ prof;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ mainIntervalLabel;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ subIntervalLabel;

	private:System::Drawing::Point Point;
	public:
		ClickerSettings(Profile^ f, System::Drawing::Point point)
		{
			InitializeComponent();


			prof = f;
			Point = point;
			if (!System::String::IsNullOrEmpty(prof->RANDCLICKMAX))
				RandClicksMaxTimeTextBox->Text = prof->RANDCLICKMAX->Replace("X", "");
			else
				RandClicksMaxTimeTextBox->Text = prof->RANDCLICKMAX;

			if (!System::String::IsNullOrEmpty(prof->RANDCLICKMIN))
				RandClicksMinTimeTextBox->Text = prof->RANDCLICKMIN->Replace("X", "");
			else
				RandClicksMinTimeTextBox->Text = prof->RANDCLICKMIN;


			if (!System::String::IsNullOrEmpty(prof->RANDDELAYMIN))
				RandDelayMinTextBox->Text = prof->RANDDELAYMIN->Replace("X", "");
			else
				RandDelayMinTextBox->Text = prof->RANDDELAYMIN;

			if (!System::String::IsNullOrEmpty(prof->RANDDELAYMAX))
				RandDelayMaxTextBox->Text = prof->RANDDELAYMAX->Replace("X", "");
			else
				RandDelayMinTextBox->Text = prof->RANDDELAYMIN;

			RandClicksCheckBox->Checked = prof->RANDCLICK;



			if (!System::String::IsNullOrEmpty(prof->ACMAX))
				ACMaxTimeTextBox->Text = prof->ACMAX->Replace("X", "");
			else
				ACMaxTimeTextBox->Text = prof->ACMAX;
			if (!System::String::IsNullOrEmpty(prof->ACMIN))
				ACMinTimeTextBox->Text = prof->ACMIN->Replace("X", "");
			else
				ACMinTimeTextBox->Text = prof->ACMIN;

			ACHotkeyCheckBox->Checked = prof->ACHOTKEY;




			//

		}
		ClickerSettings()
		{
			InitializeComponent();
			//
			//

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ClickerSettings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ RandClicksMaxTimeTextBox;
	protected:

	private: System::Windows::Forms::TextBox^ RandClicksMinTimeTextBox;
	private: System::Windows::Forms::CheckBox^ RandClicksCheckBox;

	private: System::Windows::Forms::Button^ RandClickSaveButton;
	private: System::Windows::Forms::Button^ RandClickCancelButton;

	private: System::Windows::Forms::TextBox^ RandDelayMaxTextBox;


	private: System::Windows::Forms::TextBox^ RandDelayMinTextBox;

	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::TextBox^ ACMaxTimeTextBox;
	private: System::Windows::Forms::TextBox^ ACMinTimeTextBox;

	private: System::Windows::Forms::CheckBox^ ACHotkeyCheckBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;







	private: System::ComponentModel::IContainer^ components;




	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ClickerSettings::typeid));
			this->RandClicksMaxTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->RandClicksMinTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->RandClicksCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->RandClickSaveButton = (gcnew System::Windows::Forms::Button());
			this->RandClickCancelButton = (gcnew System::Windows::Forms::Button());
			this->RandDelayMaxTextBox = (gcnew System::Windows::Forms::TextBox());
			this->RandDelayMinTextBox = (gcnew System::Windows::Forms::TextBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->ACMaxTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ACMinTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ACHotkeyCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->mainIntervalLabel = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->subIntervalLabel = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// RandClicksMaxTimeTextBox
			// 
			this->RandClicksMaxTimeTextBox->BackColor = System::Drawing::Color::DarkSlateGray;
			this->RandClicksMaxTimeTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->RandClicksMaxTimeTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RandClicksMaxTimeTextBox->ForeColor = System::Drawing::Color::LightBlue;
			this->RandClicksMaxTimeTextBox->Location = System::Drawing::Point(131, 3);
			this->RandClicksMaxTimeTextBox->Name = L"RandClicksMaxTimeTextBox";
			this->RandClicksMaxTimeTextBox->Size = System::Drawing::Size(39, 20);
			this->RandClicksMaxTimeTextBox->TabIndex = 4;
			this->RandClicksMaxTimeTextBox->TabStop = false;
			this->RandClicksMaxTimeTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RandClicksMinTimeTextBox
			// 
			this->RandClicksMinTimeTextBox->BackColor = System::Drawing::Color::DarkSlateGray;
			this->RandClicksMinTimeTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->RandClicksMinTimeTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RandClicksMinTimeTextBox->ForeColor = System::Drawing::Color::LightBlue;
			this->RandClicksMinTimeTextBox->Location = System::Drawing::Point(31, 3);
			this->RandClicksMinTimeTextBox->Name = L"RandClicksMinTimeTextBox";
			this->RandClicksMinTimeTextBox->Size = System::Drawing::Size(39, 20);
			this->RandClicksMinTimeTextBox->TabIndex = 3;
			this->RandClicksMinTimeTextBox->TabStop = false;
			this->RandClicksMinTimeTextBox->Text = L"1";
			this->RandClicksMinTimeTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RandClicksCheckBox
			// 
			this->RandClicksCheckBox->AutoSize = true;
			this->RandClicksCheckBox->BackColor = System::Drawing::Color::Transparent;
			this->RandClicksCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RandClicksCheckBox->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->RandClicksCheckBox->Location = System::Drawing::Point(356, 135);
			this->RandClicksCheckBox->Name = L"RandClicksCheckBox";
			this->RandClicksCheckBox->Size = System::Drawing::Size(151, 17);
			this->RandClicksCheckBox->TabIndex = 13;
			this->RandClicksCheckBox->Text = L"Enable Multiple Clicks";
			this->RandClicksCheckBox->UseVisualStyleBackColor = false;
			this->RandClicksCheckBox->CheckedChanged += gcnew System::EventHandler(this, &ClickerSettings::RandClicksCheckBox_CheckedChanged);
			// 
			// RandClickSaveButton
			// 
			this->RandClickSaveButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RandClickSaveButton.BackgroundImage")));
			this->RandClickSaveButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->RandClickSaveButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RandClickSaveButton->Location = System::Drawing::Point(78, 119);
			this->RandClickSaveButton->Name = L"RandClickSaveButton";
			this->RandClickSaveButton->Size = System::Drawing::Size(60, 23);
			this->RandClickSaveButton->TabIndex = 15;
			this->RandClickSaveButton->Text = L"Save";
			this->RandClickSaveButton->UseVisualStyleBackColor = true;
			this->RandClickSaveButton->Click += gcnew System::EventHandler(this, &ClickerSettings::RandClickSaveButton_Click);
			// 
			// RandClickCancelButton
			// 
			this->RandClickCancelButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RandClickCancelButton.BackgroundImage")));
			this->RandClickCancelButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->RandClickCancelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RandClickCancelButton->Location = System::Drawing::Point(144, 119);
			this->RandClickCancelButton->Name = L"RandClickCancelButton";
			this->RandClickCancelButton->Size = System::Drawing::Size(60, 23);
			this->RandClickCancelButton->TabIndex = 16;
			this->RandClickCancelButton->Text = L"Cancel";
			this->RandClickCancelButton->UseVisualStyleBackColor = true;
			this->RandClickCancelButton->Click += gcnew System::EventHandler(this, &ClickerSettings::RandClickCancelButton_Click);
			// 
			// RandDelayMaxTextBox
			// 
			this->RandDelayMaxTextBox->BackColor = System::Drawing::Color::DarkSlateGray;
			this->RandDelayMaxTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->RandDelayMaxTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RandDelayMaxTextBox->ForeColor = System::Drawing::Color::LightBlue;
			this->RandDelayMaxTextBox->Location = System::Drawing::Point(128, 55);
			this->RandDelayMaxTextBox->Name = L"RandDelayMaxTextBox";
			this->RandDelayMaxTextBox->Size = System::Drawing::Size(39, 20);
			this->RandDelayMaxTextBox->TabIndex = 18;
			this->RandDelayMaxTextBox->TabStop = false;
			this->RandDelayMaxTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RandDelayMinTextBox
			// 
			this->RandDelayMinTextBox->BackColor = System::Drawing::Color::DarkSlateGray;
			this->RandDelayMinTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->RandDelayMinTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RandDelayMinTextBox->ForeColor = System::Drawing::Color::LightBlue;
			this->RandDelayMinTextBox->Location = System::Drawing::Point(31, 55);
			this->RandDelayMinTextBox->Name = L"RandDelayMinTextBox";
			this->RandDelayMinTextBox->Size = System::Drawing::Size(39, 20);
			this->RandDelayMinTextBox->TabIndex = 17;
			this->RandDelayMinTextBox->TabStop = false;
			this->RandDelayMinTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// toolTip1
			// 
			this->toolTip1->Tag = L"";
			this->toolTip1->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->toolTip1->ToolTipTitle = L"General Interval Clicker Information";
			// 
			// ACMaxTimeTextBox
			// 
			this->ACMaxTimeTextBox->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ACMaxTimeTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ACMaxTimeTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ACMaxTimeTextBox->ForeColor = System::Drawing::Color::LightBlue;
			this->ACMaxTimeTextBox->Location = System::Drawing::Point(142, 4);
			this->ACMaxTimeTextBox->Name = L"ACMaxTimeTextBox";
			this->ACMaxTimeTextBox->Size = System::Drawing::Size(59, 20);
			this->ACMaxTimeTextBox->TabIndex = 21;
			this->ACMaxTimeTextBox->TabStop = false;
			this->ACMaxTimeTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ACMinTimeTextBox
			// 
			this->ACMinTimeTextBox->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ACMinTimeTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ACMinTimeTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ACMinTimeTextBox->ForeColor = System::Drawing::Color::LightBlue;
			this->ACMinTimeTextBox->Location = System::Drawing::Point(31, 4);
			this->ACMinTimeTextBox->Name = L"ACMinTimeTextBox";
			this->ACMinTimeTextBox->Size = System::Drawing::Size(59, 20);
			this->ACMinTimeTextBox->TabIndex = 20;
			this->ACMinTimeTextBox->TabStop = false;
			this->ACMinTimeTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ACHotkeyCheckBox
			// 
			this->ACHotkeyCheckBox->AutoSize = true;
			this->ACHotkeyCheckBox->BackColor = System::Drawing::Color::Transparent;
			this->ACHotkeyCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ACHotkeyCheckBox->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->ACHotkeyCheckBox->Location = System::Drawing::Point(79, 96);
			this->ACHotkeyCheckBox->Name = L"ACHotkeyCheckBox";
			this->ACHotkeyCheckBox->Size = System::Drawing::Size(120, 17);
			this->ACHotkeyCheckBox->TabIndex = 23;
			this->ACHotkeyCheckBox->Text = L"R-CTRL Hot-Key\r\n";
			this->ACHotkeyCheckBox->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label1->Location = System::Drawing::Point(93, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(11, 13);
			this->label1->TabIndex = 24;
			this->label1->Text = L"-";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label2->Location = System::Drawing::Point(125, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(11, 13);
			this->label2->TabIndex = 25;
			this->label2->Text = L"-";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label5->Location = System::Drawing::Point(110, 58);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(11, 13);
			this->label5->TabIndex = 27;
			this->label5->Text = L"-";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->RandClicksMinTimeTextBox);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->RandClicksMaxTimeTextBox);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->RandDelayMaxTextBox);
			this->panel1->Controls->Add(this->RandDelayMinTextBox);
			this->panel1->Location = System::Drawing::Point(318, 30);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(222, 99);
			this->panel1->TabIndex = 28;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label10->Location = System::Drawing::Point(110, 27);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(104, 13);
			this->label10->TabIndex = 32;
			this->label10->Text = L"[Maximum Clicks]";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label11->Location = System::Drawing::Point(3, 27);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(101, 13);
			this->label11->TabIndex = 31;
			this->label11->Text = L"[Minimum Clicks]";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label8->Location = System::Drawing::Point(110, 78);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(107, 13);
			this->label8->TabIndex = 30;
			this->label8->Text = L"[Maximum Range]";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label9->Location = System::Drawing::Point(3, 78);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(104, 13);
			this->label9->TabIndex = 29;
			this->label9->Text = L"[Minimum Range]";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::LightBlue;
			this->label7->Location = System::Drawing::Point(168, 60);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 13);
			this->label7->TabIndex = 30;
			this->label7->Text = L"ms";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::LightBlue;
			this->label6->Location = System::Drawing::Point(70, 60);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 13);
			this->label6->TabIndex = 29;
			this->label6->Text = L"ms";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::LightBlue;
			this->label3->Location = System::Drawing::Point(92, 8);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 13);
			this->label3->TabIndex = 30;
			this->label3->Text = L"ms";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::LightBlue;
			this->label4->Location = System::Drawing::Point(202, 10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 13);
			this->label4->TabIndex = 31;
			this->label4->Text = L"ms";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label12->Location = System::Drawing::Point(126, 30);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(107, 13);
			this->label12->TabIndex = 33;
			this->label12->Text = L"[Maximum Range]";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label13->Location = System::Drawing::Point(13, 30);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(104, 13);
			this->label13->TabIndex = 32;
			this->label13->Text = L"[Minimum Range]";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::LightBlue;
			this->label14->Location = System::Drawing::Point(128, 155);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(295, 13);
			this->label14->TabIndex = 34;
			this->label14->Text = L"Confused\? Hover over a component to see a relevant tooltip.\r\n";
			// 
			// mainIntervalLabel
			// 
			this->mainIntervalLabel->AutoSize = true;
			this->mainIntervalLabel->BackColor = System::Drawing::Color::Transparent;
			this->mainIntervalLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainIntervalLabel->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->mainIntervalLabel->Location = System::Drawing::Point(74, 5);
			this->mainIntervalLabel->Name = L"mainIntervalLabel";
			this->mainIntervalLabel->Size = System::Drawing::Size(136, 25);
			this->mainIntervalLabel->TabIndex = 35;
			this->mainIntervalLabel->Text = L"Main Interval";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->ACMaxTimeTextBox);
			this->panel2->Controls->Add(this->ACMinTimeTextBox);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(20, 33);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(243, 57);
			this->panel2->TabIndex = 36;
			// 
			// subIntervalLabel
			// 
			this->subIntervalLabel->AutoSize = true;
			this->subIntervalLabel->BackColor = System::Drawing::Color::Transparent;
			this->subIntervalLabel->Enabled = false;
			this->subIntervalLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subIntervalLabel->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->subIntervalLabel->Location = System::Drawing::Point(323, 5);
			this->subIntervalLabel->Name = L"subIntervalLabel";
			this->subIntervalLabel->Size = System::Drawing::Size(231, 25);
			this->subIntervalLabel->TabIndex = 37;
			this->subIntervalLabel->Text = L"Sub Interval (Optional)";
			// 
			// ClickerSettings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(562, 179);
			this->Controls->Add(this->subIntervalLabel);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->mainIntervalLabel);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->ACHotkeyCheckBox);
			this->Controls->Add(this->RandClickCancelButton);
			this->Controls->Add(this->RandClickSaveButton);
			this->Controls->Add(this->RandClicksCheckBox);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ClickerSettings";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Interval Clicker Settings";
			this->Load += gcnew System::EventHandler(this, &ClickerSettings::ClickerSettings_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
	private: void throwErrorMessage(System::String^ message) {
		Error e(System::Drawing::Point(this->Location.X+145, this->Location.Y), message);
		e.ShowDialog();
	}

	private: System::Void RandClickSaveButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int countError = 0;
			if (RandClicksCheckBox->Checked == 1)
			{
				//Check Random Upper is greater than 1
				if (Convert::ToInt32(RandClicksMaxTimeTextBox->Text) < 1)
				{
					countError++;
					throwErrorMessage("Upper range integer for the number of clicks must be a non-negative number!");
				}
				//Check Random Upper is greater than Random Lower
				else if (Convert::ToInt32(RandClicksMaxTimeTextBox->Text) < Convert::ToInt32(RandClicksMinTimeTextBox->Text))
				{
					countError++;
					throwErrorMessage("Upper range integer for the number of clicks must be greater than the lower range!");
				}
				//Check Random Lower is greater than 1
				else if (Convert::ToInt32(RandClicksMinTimeTextBox->Text) < 1)
				{
					countError++;
					throwErrorMessage("Lower range number of clicks must be greater or equal to 1!");
				}
				//Assign Random Upper --Random Lower MUST be 1 so no assignment for Lower
				else
				{
					prof->RANDCLICKMAX = RandClicksMaxTimeTextBox->Text;
				}
				//Check Random Lower Delay is not greater than or equal to Random Upper Delay
				if (Convert::ToInt32(RandDelayMinTextBox->Text) >= Convert::ToInt32(RandDelayMaxTextBox->Text))
				{
					countError++;
					throwErrorMessage("Invalid click interval time range! Verify that the time is in milliseconds and the lower range is smaller than the upper range.");

				}
				//Assign Random Delay Lower & Upper
				else
				{
					prof->RANDDELAYMIN = RandDelayMinTextBox->Text;
					prof->RANDDELAYMAX = RandDelayMaxTextBox->Text;
				}
				//Check time interval
				if (checkACValues(ACMinTimeTextBox->Text, ACMaxTimeTextBox->Text) != true)
				{
					countError++;
					throwErrorMessage("Invalid interval time range! Verify that the time is in milliseconds and the lower range is smaller than the upper range.");

				}
				//Assign interval
				else
				{
					prof->ACMIN = ACMinTimeTextBox->Text;
					prof->ACMAX = ACMaxTimeTextBox->Text;
				}
				//Check Error Count, if 0 then enable Random Clicks feature. && assign Hotkey
				if (countError == 0)
				{
					prof->ACHOTKEY = ACHotkeyCheckBox->Checked;
					prof->RANDCLICK = RandClicksCheckBox->Checked;
					prof->RANDCLICKMIN = RandClicksMinTimeTextBox->Text;
					this->Close();
				}
			}
			else if (checkACValues(ACMinTimeTextBox->Text, ACMaxTimeTextBox->Text) != true)
			{
				countError++;
				throwErrorMessage("Invalid interval time range! Verify that the time is in milliseconds and the lower range is smaller than the upper range.");

			}
			else //Allow user to save settings even if invalid, they will not be usable until fixed.
			{
				prof->RANDCLICKMAX = RandClicksMaxTimeTextBox->Text;
				prof->RANDDELAYMIN = RandDelayMinTextBox->Text;
				prof->RANDDELAYMAX = RandDelayMaxTextBox->Text;
				prof->RANDCLICK = RandClicksCheckBox->Checked;
				prof->RANDCLICKMIN = RandClicksMinTimeTextBox->Text;
				prof->ACMIN = ACMinTimeTextBox->Text;
				prof->ACMAX = ACMaxTimeTextBox->Text;
				prof->ACHOTKEY = ACHotkeyCheckBox->Checked;
				this->Close();
			}
		}
		catch (...)
		{
			if (RandClicksCheckBox->Checked == true) {
				throwErrorMessage("Multiple Clicks setting is enabled but the provided variable settings are invalid! Either disable the Multiple Clicks setting or fix incorrect variable settings.");
			}
			//this->Close();
		}

	}
	private: System::Void RandClickCancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void RandClicksCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		CheckRandomClicksSetting();

	}
	private: void CheckRandomClicksSetting() {
		if (RandClicksCheckBox->Checked == 1)
		{
			subIntervalLabel->Enabled = true;
			panel1->Enabled = true;
		}
		else
		{
			subIntervalLabel->Enabled = false;
			panel1->Enabled = false;
		}
	}

	private: System::Void ClickerSettings_Load(System::Object^ sender, System::EventArgs^ e) {
		CheckRandomClicksSetting();
		toolTip1->SetToolTip(ACMinTimeTextBox, "Enter the lower range value of the desired click interval in milliseconds. For Example: 1000");
		toolTip1->SetToolTip(ACMaxTimeTextBox, "Enter the upper range value of the desired click interval in milliseconds. For Example: 5000");
		toolTip1->SetToolTip(ACHotkeyCheckBox, "Activate the Interval Clicker by pressing the Right-Ctrl button.");

		toolTip1->SetToolTip(RandClicksMinTimeTextBox, "Enter the lower range value of the desired number of clicks per interval. For Example: 1");
		toolTip1->SetToolTip(RandClicksMaxTimeTextBox, "Enter the upper range value of the desired number of clicks per interval. For Example: 15");

		toolTip1->SetToolTip(RandDelayMinTextBox, "The interval for each click will be random. Enter the lower range value of the desired click interval in milliseconds. For Example: 1000");
		toolTip1->SetToolTip(RandDelayMaxTextBox, "The interval for each click will be random. Enter the upper range value of the desired click interval in milliseconds. For Example: 5000");

		toolTip1->SetToolTip(RandClicksCheckBox, "Click multiple times per interval. Each of the multiple clicks will have a random range of clicks, and a random interval for each click.");
		this->SetDesktopLocation(Point.X, Point.Y);
	}
	};
}
