#pragma once
#include "InputTime.h"
#include <windows.h>
#include "Key.h"
#include "Profile.h"
#include "ClickerSettings.h"
#include "KeyerSettings.h"

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
	private: Profile _PROFILE;
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





	protected:








	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ ACLabel;
	private: System::Windows::Forms::Button^ ACStopButton;
	private: System::Windows::Forms::Button^ ACStartButton;

	private: System::Windows::Forms::Label^ label3;




	private: System::Windows::Forms::Timer^ ACTimer;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::Timer^ ACKeyPressCheckTimer;

	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Label^ AKLabel;
	private: System::Windows::Forms::Button^ AKStopButton;
	private: System::Windows::Forms::Button^ AKStartButton;

	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Timer^ AKTimer;



	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripDropDownButton^ toolStripDropDownButton1;
	private: System::Windows::Forms::ToolStripMenuItem^ saveProfileAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ loadProfileToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ SaveProfileDialog;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::OpenFileDialog^ OpenProfileDialog;
	private: System::Windows::Forms::Timer^ AKKeyPressCheckTimer;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Timer^ RandomClicksTimer;
	private: System::Windows::Forms::Label^ SubClickLabel;



	private: System::Windows::Forms::Timer^ mouseUpdateTimer;
	private: System::Windows::Forms::Label^ mousePOSLabel;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ToolStripDropDownButton^ toolStripDropDownButton2;
	private: System::Windows::Forms::ToolStripLabel^ toolStripProfileLabel;
	private: System::Windows::Forms::ToolStripMenuItem^ checkForUpdatesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;




	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->mousePOSLabel = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->SubClickLabel = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->ACLabel = (gcnew System::Windows::Forms::Label());
			this->ACStopButton = (gcnew System::Windows::Forms::Button());
			this->ACStartButton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ACTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->ACKeyPressCheckTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->AKLabel = (gcnew System::Windows::Forms::Label());
			this->AKStopButton = (gcnew System::Windows::Forms::Button());
			this->AKStartButton = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->AKTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->saveProfileAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loadProfileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripDropDownButton2 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->checkForUpdatesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripProfileLabel = (gcnew System::Windows::Forms::ToolStripLabel());
			this->SaveProfileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->OpenProfileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->AKKeyPressCheckTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->RandomClicksTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->mouseUpdateTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// mousePOSLabel
			// 
			this->mousePOSLabel->AutoSize = true;
			this->mousePOSLabel->BackColor = System::Drawing::SystemColors::Control;
			this->mousePOSLabel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->mousePOSLabel->Location = System::Drawing::Point(102, 69);
			this->mousePOSLabel->Name = L"mousePOSLabel";
			this->mousePOSLabel->Size = System::Drawing::Size(10, 13);
			this->mousePOSLabel->TabIndex = 20;
			this->mousePOSLabel->Text = L"-";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->Controls->Add(this->mousePOSLabel);
			this->panel2->Controls->Add(this->SubClickLabel);
			this->panel2->Controls->Add(this->linkLabel1);
			this->panel2->Controls->Add(this->ACLabel);
			this->panel2->Controls->Add(this->ACStopButton);
			this->panel2->Controls->Add(this->ACStartButton);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(0, 44);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(289, 90);
			this->panel2->TabIndex = 7;
			// 
			// SubClickLabel
			// 
			this->SubClickLabel->AutoSize = true;
			this->SubClickLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SubClickLabel->Location = System::Drawing::Point(220, 28);
			this->SubClickLabel->Name = L"SubClickLabel";
			this->SubClickLabel->Size = System::Drawing::Size(8, 12);
			this->SubClickLabel->TabIndex = 14;
			this->SubClickLabel->Text = L"-";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(117, 24);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(45, 13);
			this->linkLabel1->TabIndex = 13;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Settings";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel1_LinkClicked);
			// 
			// ACLabel
			// 
			this->ACLabel->AutoSize = true;
			this->ACLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ACLabel->Location = System::Drawing::Point(5, 29);
			this->ACLabel->Name = L"ACLabel";
			this->ACLabel->Size = System::Drawing::Size(8, 12);
			this->ACLabel->TabIndex = 11;
			this->ACLabel->Text = L"-";
			// 
			// ACStopButton
			// 
			this->ACStopButton->Enabled = false;
			this->ACStopButton->Location = System::Drawing::Point(144, 43);
			this->ACStopButton->Name = L"ACStopButton";
			this->ACStopButton->Size = System::Drawing::Size(60, 23);
			this->ACStopButton->TabIndex = 10;
			this->ACStopButton->Text = L"Stop";
			this->ACStopButton->UseVisualStyleBackColor = true;
			this->ACStopButton->Click += gcnew System::EventHandler(this, &MyForm::ACStopButton_Click);
			// 
			// ACStartButton
			// 
			this->ACStartButton->Location = System::Drawing::Point(78, 43);
			this->ACStartButton->Name = L"ACStartButton";
			this->ACStartButton->Size = System::Drawing::Size(60, 23);
			this->ACStartButton->TabIndex = 9;
			this->ACStartButton->Text = L"Start";
			this->ACStartButton->UseVisualStyleBackColor = true;
			this->ACStartButton->Click += gcnew System::EventHandler(this, &MyForm::ACStartButton_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(34, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(231, 24);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Random Interval Clicker";
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
			this->label5->Location = System::Drawing::Point(152, 150);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"BTC Address -  ";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Control;
			this->textBox4->Location = System::Drawing::Point(232, 147);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(241, 20);
			this->textBox4->TabIndex = 10;
			this->textBox4->Text = L"3KwkiTj1QhmmUgHkwfWscTHUDbNd9e4QQH";
			// 
			// ACKeyPressCheckTimer
			// 
			this->ACKeyPressCheckTimer->Interval = 1;
			this->ACKeyPressCheckTimer->Tick += gcnew System::EventHandler(this, &MyForm::ACKeyPressCheckTimer_Tick);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->linkLabel2);
			this->panel3->Controls->Add(this->AKLabel);
			this->panel3->Controls->Add(this->AKStopButton);
			this->panel3->Controls->Add(this->AKStartButton);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Location = System::Drawing::Point(305, 44);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(296, 90);
			this->panel3->TabIndex = 11;
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(123, 31);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(45, 13);
			this->linkLabel2->TabIndex = 14;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Settings";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel2_LinkClicked);
			// 
			// AKLabel
			// 
			this->AKLabel->AutoSize = true;
			this->AKLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AKLabel->Location = System::Drawing::Point(3, 45);
			this->AKLabel->Name = L"AKLabel";
			this->AKLabel->Size = System::Drawing::Size(8, 12);
			this->AKLabel->TabIndex = 11;
			this->AKLabel->Text = L"-";
			// 
			// AKStopButton
			// 
			this->AKStopButton->Enabled = false;
			this->AKStopButton->Location = System::Drawing::Point(149, 48);
			this->AKStopButton->Name = L"AKStopButton";
			this->AKStopButton->Size = System::Drawing::Size(60, 23);
			this->AKStopButton->TabIndex = 10;
			this->AKStopButton->Text = L"Stop";
			this->AKStopButton->UseVisualStyleBackColor = true;
			this->AKStopButton->Click += gcnew System::EventHandler(this, &MyForm::AKStopButton_Click);
			// 
			// AKStartButton
			// 
			this->AKStartButton->Location = System::Drawing::Point(83, 47);
			this->AKStartButton->Name = L"AKStartButton";
			this->AKStartButton->Size = System::Drawing::Size(60, 23);
			this->AKStartButton->TabIndex = 9;
			this->AKStartButton->Text = L"Start";
			this->AKStartButton->UseVisualStyleBackColor = true;
			this->AKStartButton->Click += gcnew System::EventHandler(this, &MyForm::AKStartButton_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label8->Location = System::Drawing::Point(10, 7);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(279, 24);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Random Interval Key Presser";
			// 
			// AKTimer
			// 
			this->AKTimer->Tick += gcnew System::EventHandler(this, &MyForm::AKTimer_Tick);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(0, 136);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(601, 10);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 14;
			this->pictureBox3->TabStop = false;
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::SystemColors::Control;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripDropDownButton1,
					this->toolStripDropDownButton2, this->toolStripProfileLabel
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(601, 25);
			this->toolStrip1->TabIndex = 15;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripDropDownButton1
			// 
			this->toolStripDropDownButton1->BackColor = System::Drawing::SystemColors::Control;
			this->toolStripDropDownButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->saveProfileAsToolStripMenuItem,
					this->loadProfileToolStripMenuItem
			});
			this->toolStripDropDownButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton1.Image")));
			this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
			this->toolStripDropDownButton1->Size = System::Drawing::Size(70, 22);
			this->toolStripDropDownButton1->Text = L"Profile";
			// 
			// saveProfileAsToolStripMenuItem
			// 
			this->saveProfileAsToolStripMenuItem->BackColor = System::Drawing::SystemColors::Control;
			this->saveProfileAsToolStripMenuItem->Name = L"saveProfileAsToolStripMenuItem";
			this->saveProfileAsToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->saveProfileAsToolStripMenuItem->Text = L"Save Profile As...";
			this->saveProfileAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveProfileAsToolStripMenuItem_Click);
			// 
			// loadProfileToolStripMenuItem
			// 
			this->loadProfileToolStripMenuItem->BackColor = System::Drawing::SystemColors::Control;
			this->loadProfileToolStripMenuItem->Name = L"loadProfileToolStripMenuItem";
			this->loadProfileToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->loadProfileToolStripMenuItem->Text = L"Load Profile";
			this->loadProfileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::loadProfileToolStripMenuItem_Click);
			// 
			// toolStripDropDownButton2
			// 
			this->toolStripDropDownButton2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aboutToolStripMenuItem,
					this->checkForUpdatesToolStripMenuItem
			});
			this->toolStripDropDownButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton2.Image")));
			this->toolStripDropDownButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton2->Name = L"toolStripDropDownButton2";
			this->toolStripDropDownButton2->Size = System::Drawing::Size(61, 22);
			this->toolStripDropDownButton2->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// checkForUpdatesToolStripMenuItem
			// 
			this->checkForUpdatesToolStripMenuItem->Name = L"checkForUpdatesToolStripMenuItem";
			this->checkForUpdatesToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->checkForUpdatesToolStripMenuItem->Text = L"Check For Updates";
			this->checkForUpdatesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::CheckForUpdatesToolStripMenuItem_Click);
			// 
			// toolStripProfileLabel
			// 
			this->toolStripProfileLabel->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripProfileLabel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripProfileLabel.Image")));
			this->toolStripProfileLabel->Name = L"toolStripProfileLabel";
			this->toolStripProfileLabel->Size = System::Drawing::Size(170, 22);
			this->toolStripProfileLabel->Text = L"No Profile Currently Loaded";
			// 
			// SaveProfileDialog
			// 
			this->SaveProfileDialog->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::SaveProfileDialog_FileOk);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(-5, 28);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(606, 13);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 16;
			this->pictureBox4->TabStop = false;
			// 
			// OpenProfileDialog
			// 
			this->OpenProfileDialog->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::OpenProfileDialog_FileOk);
			// 
			// AKKeyPressCheckTimer
			// 
			this->AKKeyPressCheckTimer->Interval = 1;
			this->AKKeyPressCheckTimer->Tick += gcnew System::EventHandler(this, &MyForm::AKKeyPressCheckTimer_Tick);
			// 
			// RandomClicksTimer
			// 
			this->RandomClicksTimer->Tick += gcnew System::EventHandler(this, &MyForm::RandomClicksTimer_Tick);
			// 
			// mouseUpdateTimer
			// 
			this->mouseUpdateTimer->Interval = 20;
			this->mouseUpdateTimer->Tick += gcnew System::EventHandler(this, &MyForm::MouseUpdateTimer_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(292, 41);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(10, 105);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(601, 171);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(617, 210);
			this->MinimumSize = System::Drawing::Size(617, 210);
			this->Name = L"MyForm";
			this->Opacity = 0.99;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PRATHTool - Version 2.1";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: Random r;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ACKeyPressCheckTimer->Start();
		AKKeyPressCheckTimer->Start();
		mouseUpdateTimer->Start();

	}

			/*::.........................::BEGIN CLICKER SECTION::.........................::*/
	   /*
		*	-This section of the code contains all the variables and methods used for the
		*	 clicker function.
		*
		*	 -Any modifications to the clicker function need to be within this code block
		*	  this includes any new methods or variables.
		*
		::.........................::::.........................::::.........................::*/

	private: System::DateTime ACTime;
	private: int RandomClickCounter;
	private: int INCCOUNTER = 0;
	private: int val;
	private: System::Void ACStartButton_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (checkACValues(_PROFILE.ACMIN, _PROFILE.ACMAX) == true)
		{
			try
			{
				linkLabel1->Enabled = false;
				label3->BackColor = Color::Chartreuse;
				updateNextMainClick();
				ACTimer->Start();
				ACStartButton->Enabled = false;
				ACStopButton->Enabled = true;
			}
			catch (...)
			{
				ACStopButton->Enabled = true;
				ACStopButton->PerformClick();
			}
		}
	}
	private: System::Void ACTimer_Tick(System::Object ^ sender, System::EventArgs ^ e) {
		if (_PROFILE.RANDCLICK == 1) //User wants multiple clicks per tick
		{
			RandomClickCounter = r.Next(Convert::ToInt32(_PROFILE.RANDCLICKMIN), Convert::ToInt32(_PROFILE.RANDCLICKMAX));
			ACTimer->Stop();
			RandomClicksTimer->Start();
		}
		else //User only wants 1 click
		{
			sendMouseClick();
			updateNextMainClick();
		}
	}

	private: System::Void RandomClicksTimer_Tick(System::Object ^ sender, System::EventArgs ^ e) {

		if (INCCOUNTER < RandomClickCounter) //Loop until we click X times
		{
			sendMouseClick();
			RandomClicksTimer->Interval = r.Next(Convert::ToInt32(_PROFILE.RANDDELAYMIN), Convert::ToInt32(_PROFILE.RANDDELAYMAX));
			SubClickLabel->Text = "Sub click in - \n"+RandomClicksTimer->Interval + "ms";
			INCCOUNTER++;
		}
		else //We finished sub-click looping, lets reset everything and start the next main click loop.
		{
			INCCOUNTER = 0; //MAKE SURE TO RESET THIS OR ELSE IT WONT LOOP AGAIN!
			SubClickLabel->Text = "-";
			updateNextMainClick();
			RandomClicksTimer->Stop();
			ACTimer->Start();
		}
	}

	private: System::Void ACStopButton_Click(System::Object ^ sender, System::EventArgs ^ e) {
		linkLabel1->Enabled = true;
		label3->BackColor = SystemColors::Control;
		RandomClicksTimer->Stop();
		ACTimer->Stop();
		ACLabel->Text = "-";
		ACStartButton->Enabled = true;
		ACStopButton->Enabled = false;
		SubClickLabel->Text = "-";
	}

	private: bool checkACValues(System::String ^ min, System::String ^ max)
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
	private: System::Void LinkLabel1_LinkClicked(System::Object ^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs ^ e) {
		ClickerSettings CS(% _PROFILE); //Additional Settings link button pop-up
		CS.ShowDialog();

	}
	private: void sendMouseClick()
	{
		mouse_event(MOUSEEVENTF_LEFTDOWN, System::Windows::Forms::Cursor::Position.X, System::Windows::Forms::Cursor::Position.Y, 0, 0);
		mouse_event(MOUSEEVENTF_LEFTUP, System::Windows::Forms::Cursor::Position.X, System::Windows::Forms::Cursor::Position.Y, 0, 0);
	}
	private:void updateNextMainClick()
	{
		val = r.Next(Convert::ToInt32(_PROFILE.ACMIN), Convert::ToInt32(_PROFILE.ACMAX));
		ACTimer->Interval = val;
		ACTime = DateTime::Now.AddMilliseconds(val);
		ACLabel->Text = "\nNext click at\n" + ACTime.ToLongTimeString() + "\nInterval: " + val.ToString() + "ms";
	}
			/*--------------------------------------------------------------------------------------
			::.........................::::.........................::::.........................::*/
			/*::.........................::END CLICKER SECTION::.........................::*/
			/*--------------------------------------------------------------------------------------
			 ::.........................::::.........................::::.........................::*/


			 /*::.........................::BEGIN HOTKEY DETECTION SECTION::.........................::*/
		 /*
		  *	-This section of the code contains all the variables and methods used for the
		  *	 hotkey detection feature.
		  *
		  *	 -Any modifications to the this feature need to be within this code block
		  *	  this includes any new methods or variables.
		  *
		  ::.........................::::.........................::::.........................::*/
	private: System::Void ACKeyPressCheckTimer_Tick(System::Object ^ sender, System::EventArgs ^ e) {
		ACKeyPressCheckTimer->Interval = 1;
		if (_PROFILE.ACHOTKEY == true)
		{
			if (GetKeyState(VK_RCONTROL) & 0x8000)
			{
				ACKeyPressCheckTimer->Stop();

				if (ACStartButton->Enabled == false) //Clicker is running
				{
					ACStopButton->PerformClick();
				}
				else if (ACStopButton->Enabled == false) //Clicker is stopped
				{
					ACStartButton->PerformClick();
				}

				ACKeyPressCheckTimer->Interval = 300;
				ACKeyPressCheckTimer->Start();

			}
		}
	}
	private: System::Void AKKeyPressCheckTimer_Tick(System::Object ^ sender, System::EventArgs ^ e) {
		AKKeyPressCheckTimer->Interval = 1;
		if (_PROFILE.AKHOTKEY == true)
		{
			if (GetKeyState(VK_RSHIFT) & 0x8000)
			{
				AKKeyPressCheckTimer->Stop();

				if (AKStartButton->Enabled == false) //Key presser is running
				{
					AKStopButton->PerformClick();
				}
				else if (AKStopButton->Enabled == false) //key presser is stopped
				{
					AKStartButton->PerformClick();
				}

				AKKeyPressCheckTimer->Interval = 300;
				AKKeyPressCheckTimer->Start();

			}
		}
	}
			 /*--------------------------------------------------------------------------------------
			 ::.........................::::.........................::::.........................::*/
			 /*::.........................::END HOTKEY DETECTION SECTION::.........................::*/
			/*--------------------------------------------------------------------------------------
			 ::.........................::::.........................::::.........................::*/


			 /*::.........................::BEGIN KEYER SECTION::.........................::*/
		/*
		 *	-This section of the code contains all the variables and methods used for the
		 *	 key press function.
		 *
		 *	 -Any modifications to the key press function need to be within this code block
		 *	  this includes any new methods or variables.
		 *
		 ::.........................::::.........................::::.........................::*/
	private: DateTime AKTime;
	private: System::String^ KeyToPress;
	private: System::Void AKStartButton_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (checkACValues(_PROFILE.AKMIN, _PROFILE.AKMAX) == true && _PROFILE.AKDROPDOWN > -1)
		{
			try
			{
				label8->BackColor = Color::Chartreuse;
				//AKMinTextBox->Enabled = false;
				//AKMaxTextBox->Enabled = false;
				//AKDropDown->Enabled = false;
				linkLabel2->Enabled = false;

				Key tk(_PROFILE.AKDROPDOWN);
				KeyToPress = tk.KeyToString;

				int val = r.Next(Convert::ToInt32(_PROFILE.AKMIN), Convert::ToInt32(_PROFILE.AKMAX));
				AKTimer->Interval = val;
				AKTime = DateTime::Now.AddMilliseconds(val);

				AKLabel->Text = "Next key at\n" + AKTime.ToLongTimeString() + "\nInterval: " + val.ToString() + "ms";

				AKTimer->Start();

				AKStartButton->Enabled = false;
				AKStopButton->Enabled = true;
			}
			catch (...)
			{
				AKStopButton->Enabled = true;
				AKStopButton->PerformClick();
			}

		}
	}
	private: System::Void AKStopButton_Click(System::Object ^ sender, System::EventArgs ^ e) {
		linkLabel2->Enabled = true;
		label8->BackColor = SystemColors::Control;
		AKTimer->Stop();
		AKLabel->Text = "";
		AKStartButton->Enabled = true;
		AKStopButton->Enabled = false;
	}
	private: System::Void AKTimer_Tick(System::Object ^ sender, System::EventArgs ^ e) {
		//Keypress
		SendKeys::Send(KeyToPress);
		//

		int val = r.Next(Convert::ToInt32(_PROFILE.AKMIN), Convert::ToInt32(_PROFILE.AKMAX));
		AKTimer->Interval = val;
		AKTime = DateTime::Now.AddMilliseconds(val);
		AKLabel->Text = "Next click at\n" + AKTime.ToLongTimeString() + "\nInterval: " + val.ToString() + "ms";
	}
			 /*--------------------------------------------------------------------------------------
			::.........................::::.........................::::.........................::*/
			/*::.........................::END KEYER SECTION::.........................::*/
		   /*--------------------------------------------------------------------------------------
			::.........................::::.........................::::.........................::*/




			/*::.........................::START SAVE PROFILE SECTION::.........................::*/
		/*
		 *	-This section of the code contains all the variables and methods used for the
		 *	 profile saving feature.
		 *
		 *	 -Any modifications to the this feature need to be within this code block
		 *	  this includes any new methods or variables.
		 *
		 ::.........................::::.........................::::.........................::*/
	private: System::Void saveProfileAsToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
		SaveProfileDialog->AddExtension = true;
		SaveProfileDialog->OverwritePrompt = true;
		SaveProfileDialog->Filter = "PRATHTool Profile (*.PTP)|*.PTP";
		SaveProfileDialog->ShowDialog();

	}
	private: System::Void SaveProfileDialog_FileOk(System::Object ^ sender, System::ComponentModel::CancelEventArgs ^ e) {

		SaveSettingsToPROFILE();
		_PROFILE.SaveProfileAs(SaveProfileDialog->FileName);

		toolStripProfileLabel->Text = "Profile Name: " + (System::IO::Path::GetFileNameWithoutExtension(SaveProfileDialog->FileName));
	}

	private: void SaveSettingsToPROFILE()
	{
		/*Clicker | -The _PROFILE settings for additional clicks will either be set or NULL, so we have a default value in place just in case its NULL*/

		if (System::String::IsNullOrEmpty(_PROFILE.ACMAX))
			_PROFILE.ACMAX = "";
		if (System::String::IsNullOrEmpty(_PROFILE.ACMIN))
			_PROFILE.ACMIN= "";
		if (System::String::IsNullOrEmpty(Convert::ToString(_PROFILE.ACHOTKEY)))
			_PROFILE.ACHOTKEY = 0;
		if (System::String::IsNullOrEmpty(_PROFILE.RANDCLICKMAX))
			_PROFILE.RANDCLICKMAX = "";
		if (System::String::IsNullOrEmpty(_PROFILE.RANDCLICKMIN))
			_PROFILE.RANDCLICKMIN = "";
		if (System::String::IsNullOrEmpty(_PROFILE.RANDDELAYMIN))
			_PROFILE.RANDDELAYMIN = "";
		if (System::String::IsNullOrEmpty(_PROFILE.RANDDELAYMAX))
			_PROFILE.RANDDELAYMAX = "";
		/**/

		/*Keyer*/
		if (System::String::IsNullOrEmpty(_PROFILE.AKMAX))
			_PROFILE.AKMAX = "";
		if (System::String::IsNullOrEmpty(_PROFILE.AKMIN))
			_PROFILE.AKMIN = "";
		if (System::String::IsNullOrEmpty(Convert::ToString(_PROFILE.AKHOTKEY)))
			_PROFILE.AKHOTKEY = 0;
		if (System::String::IsNullOrEmpty(Convert::ToString(_PROFILE.AKDROPDOWN)))
			_PROFILE.AKDROPDOWN = -1;



	}
			 /*--------------------------------------------------------------------------------------
			::.........................::::.........................::::.........................::*/
			/*::.........................::END SAVE PROFILE SECTION::.........................::*/
		   /*--------------------------------------------------------------------------------------
			::.........................::::.........................::::.........................::*/



			/*::.........................::START LOAD PROFILE SECTION::.........................::*/
		/*
		 *	-This section of the code contains all the variables and methods used for the
		 *	 profile loading feature.
		 *
		 *	 -Any modifications to this feature need to be within this code block
		 *	  this includes any new methods or variables.
		 *
		 ::.........................::::.........................::::.........................::*/
	private: System::Void loadProfileToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
		OpenProfileDialog->AddExtension = true;
		OpenProfileDialog->Filter = "PRATHTool Profile (*.PTP)|*.PTP";
		OpenProfileDialog->ShowDialog();
	}
	private: System::Void OpenProfileDialog_FileOk(System::Object ^ sender, System::ComponentModel::CancelEventArgs ^ e) {
		Profile loadedProfile;
		loadedProfile.LoadProfile(OpenProfileDialog->FileName);

		/*Clicker | - because some of these settings exist in a separate form, we just set the _PROFILE values.*/
		_PROFILE.ACMIN = loadedProfile.ACMIN;
		_PROFILE.ACMAX = loadedProfile.ACMAX;
		_PROFILE.ACHOTKEY = loadedProfile.ACHOTKEY;
		_PROFILE.RANDCLICKMAX = loadedProfile.RANDCLICKMAX;
		_PROFILE.RANDCLICKMIN = loadedProfile.RANDCLICKMIN;
		_PROFILE.RANDCLICK = loadedProfile.RANDCLICK;
		_PROFILE.RANDDELAYMIN = loadedProfile.RANDDELAYMIN;
		_PROFILE.RANDDELAYMAX = loadedProfile.RANDDELAYMAX;
		/**/

		/*Keyer*/
		_PROFILE.AKMIN = loadedProfile.AKMIN;
		_PROFILE.AKMAX = loadedProfile.AKMAX;
		_PROFILE.AKHOTKEY = loadedProfile.AKHOTKEY;
		_PROFILE.AKDROPDOWN = loadedProfile.AKDROPDOWN;
		/**/
		toolStripProfileLabel->Text = "Profile Name: "+OpenProfileDialog->SafeFileName->Replace(".PTP","");
	}

			 /*--------------------------------------------------------------------------------------
			::.........................::::.........................::::.........................::*/
			/*::.........................::END LOAD PROFILE SECTION::.........................::*/
		   /*--------------------------------------------------------------------------------------
			::.........................::::.........................::::.........................::*/




	private: System::Void MoveMouseLocButton_Click(System::Object ^ sender, System::EventArgs ^ e) {

		SetCursorPos(2, 2);

	}
	private: System::Void MouseUpdateTimer_Tick(System::Object ^ sender, System::EventArgs ^ e) {
		mousePOSLabel->Text = "X: " + System::Windows::Forms::Cursor::Position.X + " | Y: " + System::Windows::Forms::Cursor::Position.Y;
	}


	private: System::Void LinkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		KeyerSettings KS(% _PROFILE); //Additional Settings link button pop-up
		KS.ShowDialog();
	}
private: System::Void CheckForUpdatesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("No updates found", "Checking for updates...");
}
};
}
