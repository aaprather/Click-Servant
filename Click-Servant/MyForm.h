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

	private: System::Windows::Forms::Button^ ACStopButton;
	private: System::Windows::Forms::Button^ ACStartButton;

	private: System::Windows::Forms::Timer^ ACTimer;

	private: System::Windows::Forms::Timer^ ACKeyPressCheckTimer;

	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Button^ AKStopButton;
	private: System::Windows::Forms::Button^ AKStartButton;

	private: System::Windows::Forms::Timer^ AKTimer;

	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripDropDownButton^ toolStripDropDownButton1;
	private: System::Windows::Forms::ToolStripMenuItem^ saveProfileAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ loadProfileToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ SaveProfileDialog;

	private: System::Windows::Forms::OpenFileDialog^ OpenProfileDialog;
	private: System::Windows::Forms::Timer^ AKKeyPressCheckTimer;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Timer^ RandomClicksTimer;

	private: System::Windows::Forms::Timer^ mouseUpdateTimer;

	private: System::Windows::Forms::LinkLabel^ linkLabel2;

	private: System::Windows::Forms::ToolStripDropDownButton^ toolStripDropDownButton2;
	private: System::Windows::Forms::ToolStripLabel^ toolStripProfileLabel;

	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ checkForUpdatesToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;



	private: System::Windows::Forms::PictureBox^ pictureBox6;

	private: System::Windows::Forms::ToolStrip^ toolStrip3;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel2;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
	private: System::Windows::Forms::ToolStripLabel^ keyIntervalTSLabel;

	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator5;
	private: System::Windows::Forms::ToolStripLabel^ nextKeyTSLabel;

	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator6;

	private: System::Windows::Forms::ToolStrip^ toolStrip2;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripLabel^ clickIntervalTSLabel;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripLabel^ nextClickTSLabel;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripLabel^ cursorCoordsTSLabel;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel5;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel6;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel8;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel7;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator7;

	private: System::Windows::Forms::PictureBox^ pictureBox4;


	private: System::Windows::Forms::PictureBox^ pictureBox9;

	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::ToolStripLabel^ keyTSLabel;

	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator8;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel3;
private: System::Windows::Forms::ToolStripLabel^ toolStripLabel4;
private: System::Windows::Forms::ToolStripLabel^ toolStripLabel9;
private: System::Windows::Forms::ToolStripLabel^ toolStripLabel10;
private: System::Windows::Forms::ToolStripLabel^ toolStripLabel11;
private: System::Windows::Forms::PictureBox^ cursorInactivePictureBox;
private: System::Windows::Forms::PictureBox^ keyboardInactivePictureBox;



private: System::Windows::Forms::PictureBox^ cursorActivePictureBox;
private: System::Windows::Forms::PictureBox^ keyboardActivePictureBox;
private: System::Windows::Forms::ToolStripLabel^ toolStripLabel12;








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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->ACStopButton = (gcnew System::Windows::Forms::Button());
			this->ACStartButton = (gcnew System::Windows::Forms::Button());
			this->ACTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->ACKeyPressCheckTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->AKStopButton = (gcnew System::Windows::Forms::Button());
			this->AKStartButton = (gcnew System::Windows::Forms::Button());
			this->AKTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->saveProfileAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loadProfileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripDropDownButton2 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->checkForUpdatesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripProfileLabel = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripLabel12 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->SaveProfileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->OpenProfileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->AKKeyPressCheckTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->RandomClicksTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->mouseUpdateTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->toolStrip3 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripLabel2 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripLabel8 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripLabel9 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->keyIntervalTSLabel = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripLabel10 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->nextKeyTSLabel = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripSeparator6 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripLabel11 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->keyTSLabel = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripSeparator8 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripLabel6 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStrip2 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripLabel1 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripLabel7 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripLabel3 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->clickIntervalTSLabel = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripLabel4 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->nextClickTSLabel = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cursorCoordsTSLabel = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripSeparator7 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripLabel5 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->cursorInactivePictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->keyboardInactivePictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->cursorActivePictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->keyboardActivePictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->toolStrip3->SuspendLayout();
			this->toolStrip2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cursorInactivePictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->keyboardInactivePictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cursorActivePictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->keyboardActivePictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->linkLabel1);
			this->panel2->Controls->Add(this->ACStopButton);
			this->panel2->Controls->Add(this->ACStartButton);
			this->panel2->Location = System::Drawing::Point(102, 35);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(172, 98);
			this->panel2->TabIndex = 7;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-72, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(307, 35);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 17;
			this->pictureBox2->TabStop = false;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::DeepSkyBlue;
			this->linkLabel1->Location = System::Drawing::Point(61, 38);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(53, 13);
			this->linkLabel1->TabIndex = 13;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Settings";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel1_LinkClicked);
			// 
			// ACStopButton
			// 
			this->ACStopButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ACStopButton.BackgroundImage")));
			this->ACStopButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ACStopButton->Enabled = false;
			this->ACStopButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ACStopButton->Location = System::Drawing::Point(56, 60);
			this->ACStopButton->Name = L"ACStopButton";
			this->ACStopButton->Size = System::Drawing::Size(60, 23);
			this->ACStopButton->TabIndex = 10;
			this->ACStopButton->Text = L"Stop";
			this->ACStopButton->UseVisualStyleBackColor = true;
			this->ACStopButton->Visible = false;
			this->ACStopButton->Click += gcnew System::EventHandler(this, &MyForm::ACStopButton_Click);
			// 
			// ACStartButton
			// 
			this->ACStartButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ACStartButton.BackgroundImage")));
			this->ACStartButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ACStartButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ACStartButton->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ACStartButton->Location = System::Drawing::Point(56, 59);
			this->ACStartButton->Name = L"ACStartButton";
			this->ACStartButton->Size = System::Drawing::Size(60, 23);
			this->ACStartButton->TabIndex = 9;
			this->ACStartButton->Text = L"Start";
			this->ACStartButton->UseVisualStyleBackColor = true;
			this->ACStartButton->Click += gcnew System::EventHandler(this, &MyForm::ACStartButton_Click);
			// 
			// ACTimer
			// 
			this->ACTimer->Interval = 1;
			this->ACTimer->Tick += gcnew System::EventHandler(this, &MyForm::ACTimer_Tick);
			// 
			// ACKeyPressCheckTimer
			// 
			this->ACKeyPressCheckTimer->Interval = 1;
			this->ACKeyPressCheckTimer->Tick += gcnew System::EventHandler(this, &MyForm::ACKeyPressCheckTimer_Tick);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->linkLabel2);
			this->panel3->Controls->Add(this->AKStopButton);
			this->panel3->Controls->Add(this->AKStartButton);
			this->panel3->Location = System::Drawing::Point(282, 35);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(163, 98);
			this->panel3->TabIndex = 11;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(-72, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(307, 35);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 18;
			this->pictureBox3->TabStop = false;
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->LinkColor = System::Drawing::Color::DeepSkyBlue;
			this->linkLabel2->Location = System::Drawing::Point(58, 38);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(53, 13);
			this->linkLabel2->TabIndex = 14;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Settings";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel2_LinkClicked);
			// 
			// AKStopButton
			// 
			this->AKStopButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AKStopButton.BackgroundImage")));
			this->AKStopButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->AKStopButton->Enabled = false;
			this->AKStopButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AKStopButton->Location = System::Drawing::Point(54, 59);
			this->AKStopButton->Name = L"AKStopButton";
			this->AKStopButton->Size = System::Drawing::Size(60, 23);
			this->AKStopButton->TabIndex = 10;
			this->AKStopButton->Text = L"Stop";
			this->AKStopButton->UseVisualStyleBackColor = true;
			this->AKStopButton->Visible = false;
			this->AKStopButton->Click += gcnew System::EventHandler(this, &MyForm::AKStopButton_Click);
			// 
			// AKStartButton
			// 
			this->AKStartButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AKStartButton.BackgroundImage")));
			this->AKStartButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->AKStartButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AKStartButton->Location = System::Drawing::Point(53, 60);
			this->AKStartButton->Name = L"AKStartButton";
			this->AKStartButton->Size = System::Drawing::Size(60, 23);
			this->AKStartButton->TabIndex = 9;
			this->AKStartButton->Text = L"Start";
			this->AKStartButton->UseVisualStyleBackColor = true;
			this->AKStartButton->Click += gcnew System::EventHandler(this, &MyForm::AKStartButton_Click);
			// 
			// AKTimer
			// 
			this->AKTimer->Tick += gcnew System::EventHandler(this, &MyForm::AKTimer_Tick);
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::Color::Transparent;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripDropDownButton1,
					this->toolStripDropDownButton2, this->toolStripProfileLabel, this->toolStripLabel12
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Padding = System::Windows::Forms::Padding(0);
			this->toolStrip1->Size = System::Drawing::Size(548, 25);
			this->toolStrip1->TabIndex = 15;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripDropDownButton1
			// 
			this->toolStripDropDownButton1->BackColor = System::Drawing::Color::Transparent;
			this->toolStripDropDownButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->saveProfileAsToolStripMenuItem,
					this->loadProfileToolStripMenuItem
			});
			this->toolStripDropDownButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->toolStripDropDownButton1->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->toolStripDropDownButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton1.Image")));
			this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
			this->toolStripDropDownButton1->Size = System::Drawing::Size(73, 22);
			this->toolStripDropDownButton1->Text = L"Profile";
			// 
			// saveProfileAsToolStripMenuItem
			// 
			this->saveProfileAsToolStripMenuItem->BackColor = System::Drawing::Color::Transparent;
			this->saveProfileAsToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveProfileAsToolStripMenuItem.BackgroundImage")));
			this->saveProfileAsToolStripMenuItem->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->saveProfileAsToolStripMenuItem->Name = L"saveProfileAsToolStripMenuItem";
			this->saveProfileAsToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->saveProfileAsToolStripMenuItem->Text = L"Save Profile As...";
			this->saveProfileAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveProfileAsToolStripMenuItem_Click);
			// 
			// loadProfileToolStripMenuItem
			// 
			this->loadProfileToolStripMenuItem->BackColor = System::Drawing::Color::Transparent;
			this->loadProfileToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loadProfileToolStripMenuItem.BackgroundImage")));
			this->loadProfileToolStripMenuItem->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->loadProfileToolStripMenuItem->Name = L"loadProfileToolStripMenuItem";
			this->loadProfileToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->loadProfileToolStripMenuItem->Text = L"Load Profile";
			this->loadProfileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::loadProfileToolStripMenuItem_Click);
			// 
			// toolStripDropDownButton2
			// 
			this->toolStripDropDownButton2->BackColor = System::Drawing::Color::Transparent;
			this->toolStripDropDownButton2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aboutToolStripMenuItem,
					this->checkForUpdatesToolStripMenuItem
			});
			this->toolStripDropDownButton2->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->toolStripDropDownButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton2.Image")));
			this->toolStripDropDownButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton2->Name = L"toolStripDropDownButton2";
			this->toolStripDropDownButton2->Size = System::Drawing::Size(61, 22);
			this->toolStripDropDownButton2->Text = L"Help";
			this->toolStripDropDownButton2->Visible = false;
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->BackColor = System::Drawing::Color::Transparent;
			this->aboutToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"aboutToolStripMenuItem.BackgroundImage")));
			this->aboutToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->aboutToolStripMenuItem->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// checkForUpdatesToolStripMenuItem
			// 
			this->checkForUpdatesToolStripMenuItem->BackColor = System::Drawing::Color::Transparent;
			this->checkForUpdatesToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkForUpdatesToolStripMenuItem.BackgroundImage")));
			this->checkForUpdatesToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->checkForUpdatesToolStripMenuItem->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->checkForUpdatesToolStripMenuItem->Name = L"checkForUpdatesToolStripMenuItem";
			this->checkForUpdatesToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->checkForUpdatesToolStripMenuItem->Text = L"Check For Updates";
			this->checkForUpdatesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::CheckForUpdatesToolStripMenuItem_Click);
			// 
			// toolStripProfileLabel
			// 
			this->toolStripProfileLabel->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripProfileLabel->BackColor = System::Drawing::Color::DodgerBlue;
			this->toolStripProfileLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripProfileLabel->ForeColor = System::Drawing::Color::LightBlue;
			this->toolStripProfileLabel->Name = L"toolStripProfileLabel";
			this->toolStripProfileLabel->Size = System::Drawing::Size(102, 22);
			this->toolStripProfileLabel->Text = L"No Profile Loaded";
			// 
			// toolStripLabel12
			// 
			this->toolStripLabel12->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripLabel12->BackColor = System::Drawing::Color::DodgerBlue;
			this->toolStripLabel12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->toolStripLabel12->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->toolStripLabel12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripLabel12.Image")));
			this->toolStripLabel12->Name = L"toolStripLabel12";
			this->toolStripLabel12->Size = System::Drawing::Size(63, 22);
			this->toolStripLabel12->Text = L"Profile:";
			// 
			// SaveProfileDialog
			// 
			this->SaveProfileDialog->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::SaveProfileDialog_FileOk);
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
			this->RandomClicksTimer->Interval = 1;
			this->RandomClicksTimer->Tick += gcnew System::EventHandler(this, &MyForm::RandomClicksTimer_Tick);
			// 
			// mouseUpdateTimer
			// 
			this->mouseUpdateTimer->Interval = 1;
			this->mouseUpdateTimer->Tick += gcnew System::EventHandler(this, &MyForm::MouseUpdateTimer_Tick);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(-78, 22);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(680, 10);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 23;
			this->pictureBox6->TabStop = false;
			// 
			// toolStrip3
			// 
			this->toolStrip3->BackColor = System::Drawing::Color::Transparent;
			this->toolStrip3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->toolStrip3->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(13) {
				this->toolStripLabel2,
					this->toolStripLabel8, this->toolStripSeparator4, this->toolStripLabel9, this->keyIntervalTSLabel, this->toolStripSeparator5,
					this->toolStripLabel10, this->nextKeyTSLabel, this->toolStripSeparator6, this->toolStripLabel11, this->keyTSLabel, this->toolStripSeparator8,
					this->toolStripLabel6
			});
			this->toolStrip3->Location = System::Drawing::Point(0, 172);
			this->toolStrip3->Name = L"toolStrip3";
			this->toolStrip3->Padding = System::Windows::Forms::Padding(0);
			this->toolStrip3->Size = System::Drawing::Size(548, 25);
			this->toolStrip3->TabIndex = 26;
			this->toolStrip3->Tag = L"";
			// 
			// toolStripLabel2
			// 
			this->toolStripLabel2->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripLabel2->BackColor = System::Drawing::Color::DodgerBlue;
			this->toolStripLabel2->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->toolStripLabel2->Name = L"toolStripLabel2";
			this->toolStripLabel2->Size = System::Drawing::Size(0, 22);
			// 
			// toolStripLabel8
			// 
			this->toolStripLabel8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripLabel8.Image")));
			this->toolStripLabel8->Name = L"toolStripLabel8";
			this->toolStripLabel8->Size = System::Drawing::Size(16, 22);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripLabel9
			// 
			this->toolStripLabel9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->toolStripLabel9->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->toolStripLabel9->Name = L"toolStripLabel9";
			this->toolStripLabel9->Size = System::Drawing::Size(86, 22);
			this->toolStripLabel9->Text = L"[Key Interval]:";
			// 
			// keyIntervalTSLabel
			// 
			this->keyIntervalTSLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->keyIntervalTSLabel->ForeColor = System::Drawing::Color::LightBlue;
			this->keyIntervalTSLabel->Name = L"keyIntervalTSLabel";
			this->keyIntervalTSLabel->Size = System::Drawing::Size(76, 22);
			this->keyIntervalTSLabel->Text = L"Unscheduled";
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripLabel10
			// 
			this->toolStripLabel10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->toolStripLabel10->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->toolStripLabel10->Name = L"toolStripLabel10";
			this->toolStripLabel10->Size = System::Drawing::Size(70, 22);
			this->toolStripLabel10->Text = L"[Next Key]:";
			// 
			// nextKeyTSLabel
			// 
			this->nextKeyTSLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->nextKeyTSLabel->ForeColor = System::Drawing::Color::LightBlue;
			this->nextKeyTSLabel->Name = L"nextKeyTSLabel";
			this->nextKeyTSLabel->Size = System::Drawing::Size(76, 22);
			this->nextKeyTSLabel->Text = L"Unscheduled";
			// 
			// toolStripSeparator6
			// 
			this->toolStripSeparator6->Name = L"toolStripSeparator6";
			this->toolStripSeparator6->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripLabel11
			// 
			this->toolStripLabel11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->toolStripLabel11->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->toolStripLabel11->Name = L"toolStripLabel11";
			this->toolStripLabel11->Size = System::Drawing::Size(39, 22);
			this->toolStripLabel11->Text = L"[Key]:";
			// 
			// keyTSLabel
			// 
			this->keyTSLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->keyTSLabel->ForeColor = System::Drawing::Color::LightBlue;
			this->keyTSLabel->Name = L"keyTSLabel";
			this->keyTSLabel->Size = System::Drawing::Size(65, 22);
			this->keyTSLabel->Text = L"Unselected";
			// 
			// toolStripSeparator8
			// 
			this->toolStripSeparator8->Name = L"toolStripSeparator8";
			this->toolStripSeparator8->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripLabel6
			// 
			this->toolStripLabel6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripLabel6.Image")));
			this->toolStripLabel6->Name = L"toolStripLabel6";
			this->toolStripLabel6->Size = System::Drawing::Size(16, 22);
			// 
			// toolStrip2
			// 
			this->toolStrip2->BackColor = System::Drawing::Color::Transparent;
			this->toolStrip2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->toolStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {
				this->toolStripLabel1,
					this->toolStripLabel7, this->toolStripSeparator1, this->toolStripLabel3, this->clickIntervalTSLabel, this->toolStripSeparator2,
					this->toolStripLabel4, this->nextClickTSLabel, this->toolStripSeparator3, this->cursorCoordsTSLabel, this->toolStripSeparator7,
					this->toolStripLabel5
			});
			this->toolStrip2->Location = System::Drawing::Point(0, 147);
			this->toolStrip2->Name = L"toolStrip2";
			this->toolStrip2->Padding = System::Windows::Forms::Padding(0);
			this->toolStrip2->Size = System::Drawing::Size(548, 25);
			this->toolStrip2->TabIndex = 27;
			this->toolStrip2->Tag = L"";
			// 
			// toolStripLabel1
			// 
			this->toolStripLabel1->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripLabel1->BackColor = System::Drawing::Color::DodgerBlue;
			this->toolStripLabel1->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->toolStripLabel1->Name = L"toolStripLabel1";
			this->toolStripLabel1->Size = System::Drawing::Size(0, 22);
			// 
			// toolStripLabel7
			// 
			this->toolStripLabel7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripLabel7.Image")));
			this->toolStripLabel7->Name = L"toolStripLabel7";
			this->toolStripLabel7->Size = System::Drawing::Size(16, 22);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripLabel3
			// 
			this->toolStripLabel3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->toolStripLabel3->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->toolStripLabel3->Name = L"toolStripLabel3";
			this->toolStripLabel3->Size = System::Drawing::Size(91, 22);
			this->toolStripLabel3->Text = L"[Click Interval]:";
			// 
			// clickIntervalTSLabel
			// 
			this->clickIntervalTSLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->clickIntervalTSLabel->ForeColor = System::Drawing::Color::LightBlue;
			this->clickIntervalTSLabel->Name = L"clickIntervalTSLabel";
			this->clickIntervalTSLabel->Size = System::Drawing::Size(76, 22);
			this->clickIntervalTSLabel->Text = L"Unscheduled";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripLabel4
			// 
			this->toolStripLabel4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->toolStripLabel4->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->toolStripLabel4->Name = L"toolStripLabel4";
			this->toolStripLabel4->Size = System::Drawing::Size(75, 22);
			this->toolStripLabel4->Text = L"[Next Click]:";
			// 
			// nextClickTSLabel
			// 
			this->nextClickTSLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->nextClickTSLabel->ForeColor = System::Drawing::Color::LightBlue;
			this->nextClickTSLabel->Name = L"nextClickTSLabel";
			this->nextClickTSLabel->Size = System::Drawing::Size(76, 22);
			this->nextClickTSLabel->Text = L"Unscheduled";
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 25);
			// 
			// cursorCoordsTSLabel
			// 
			this->cursorCoordsTSLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->cursorCoordsTSLabel->ForeColor = System::Drawing::Color::LightBlue;
			this->cursorCoordsTSLabel->Name = L"cursorCoordsTSLabel";
			this->cursorCoordsTSLabel->Size = System::Drawing::Size(83, 22);
			this->cursorCoordsTSLabel->Text = L"(X: 100, Y: 100)";
			// 
			// toolStripSeparator7
			// 
			this->toolStripSeparator7->Name = L"toolStripSeparator7";
			this->toolStripSeparator7->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripLabel5
			// 
			this->toolStripLabel5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripLabel5.Image")));
			this->toolStripLabel5->Name = L"toolStripLabel5";
			this->toolStripLabel5->Size = System::Drawing::Size(16, 22);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(-108, 167);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(849, 10);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 29;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(-131, 191);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(849, 10);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 32;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(-131, 139);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(849, 10);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 34;
			this->pictureBox11->TabStop = false;
			// 
			// cursorInactivePictureBox
			// 
			this->cursorInactivePictureBox->BackColor = System::Drawing::Color::Transparent;
			this->cursorInactivePictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cursorInactivePictureBox.Image")));
			this->cursorInactivePictureBox->Location = System::Drawing::Point(4, 38);
			this->cursorInactivePictureBox->Name = L"cursorInactivePictureBox";
			this->cursorInactivePictureBox->Size = System::Drawing::Size(88, 93);
			this->cursorInactivePictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->cursorInactivePictureBox->TabIndex = 35;
			this->cursorInactivePictureBox->TabStop = false;
			// 
			// keyboardInactivePictureBox
			// 
			this->keyboardInactivePictureBox->BackColor = System::Drawing::Color::Transparent;
			this->keyboardInactivePictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"keyboardInactivePictureBox.Image")));
			this->keyboardInactivePictureBox->Location = System::Drawing::Point(459, 39);
			this->keyboardInactivePictureBox->Name = L"keyboardInactivePictureBox";
			this->keyboardInactivePictureBox->Size = System::Drawing::Size(88, 93);
			this->keyboardInactivePictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->keyboardInactivePictureBox->TabIndex = 36;
			this->keyboardInactivePictureBox->TabStop = false;
			// 
			// cursorActivePictureBox
			// 
			this->cursorActivePictureBox->BackColor = System::Drawing::Color::Transparent;
			this->cursorActivePictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cursorActivePictureBox.Image")));
			this->cursorActivePictureBox->Location = System::Drawing::Point(4, 38);
			this->cursorActivePictureBox->Name = L"cursorActivePictureBox";
			this->cursorActivePictureBox->Size = System::Drawing::Size(88, 93);
			this->cursorActivePictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->cursorActivePictureBox->TabIndex = 37;
			this->cursorActivePictureBox->TabStop = false;
			this->cursorActivePictureBox->Visible = false;
			// 
			// keyboardActivePictureBox
			// 
			this->keyboardActivePictureBox->BackColor = System::Drawing::Color::Transparent;
			this->keyboardActivePictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"keyboardActivePictureBox.Image")));
			this->keyboardActivePictureBox->Location = System::Drawing::Point(459, 39);
			this->keyboardActivePictureBox->Name = L"keyboardActivePictureBox";
			this->keyboardActivePictureBox->Size = System::Drawing::Size(88, 93);
			this->keyboardActivePictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->keyboardActivePictureBox->TabIndex = 38;
			this->keyboardActivePictureBox->TabStop = false;
			this->keyboardActivePictureBox->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(548, 197);
			this->Controls->Add(this->keyboardActivePictureBox);
			this->Controls->Add(this->cursorActivePictureBox);
			this->Controls->Add(this->keyboardInactivePictureBox);
			this->Controls->Add(this->cursorInactivePictureBox);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->toolStrip2);
			this->Controls->Add(this->toolStrip3);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(564, 236);
			this->MinimumSize = System::Drawing::Size(564, 236);
			this->Name = L"MyForm";
			this->Opacity = 0.99;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Click-Servant  | 2.1.4 |";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->toolStrip3->ResumeLayout(false);
			this->toolStrip3->PerformLayout();
			this->toolStrip2->ResumeLayout(false);
			this->toolStrip2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cursorInactivePictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->keyboardInactivePictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cursorActivePictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->keyboardActivePictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: Random r;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ACKeyPressCheckTimer->Start();
		AKKeyPressCheckTimer->Start();
		mouseUpdateTimer->Start();
		toolStripDropDownButton1->AutoToolTip = false;
		toolStripDropDownButton2->AutoToolTip = false;

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
	private: bool ACActive = false;
	private: System::Void ACStartButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checkACValues(_PROFILE.ACMIN, _PROFILE.ACMAX) == true)
		{
			try
			{
				linkLabel1->Enabled = false;
				//label3->BackColor = Color::Chartreuse;
				updateNextMainClick();
				ACTimer->Start();
				ACStartButton->Enabled = false;
				ACStopButton->Enabled = true;
				ACActive = true;
				toolStripDropDownButton1->Enabled = false;

				ACStartButton->Visible = false;
				ACStopButton->Visible = true;

				cursorActivePictureBox->Visible = true;
				cursorInactivePictureBox->Visible = false;
			}
			catch (...)
			{
				toolStripDropDownButton1->Enabled = true;
				ACStopButton->Enabled = true;
				ACStopButton->PerformClick();
			}
		}
	}
	private: System::Void ACTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
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

	private: System::Void RandomClicksTimer_Tick(System::Object^ sender, System::EventArgs^ e) {

		if (INCCOUNTER < RandomClickCounter) //Loop until we click X times
		{
			sendMouseClick();
			RandomClicksTimer->Interval = r.Next(Convert::ToInt32(_PROFILE.RANDDELAYMIN), Convert::ToInt32(_PROFILE.RANDDELAYMAX));
			ACTime = DateTime::Now.AddMilliseconds(RandomClicksTimer->Interval);
			clickIntervalTSLabel->Text = RandomClicksTimer->Interval + "ms";
			INCCOUNTER++;
		}
		else //We finished sub-click looping, lets reset everything and start the next main click loop.
		{
			INCCOUNTER = 0; //MAKE SURE TO RESET THIS OR ELSE IT WONT LOOP AGAIN!
			clickIntervalTSLabel->Text = "Unscheduled";
			updateNextMainClick();
			RandomClicksTimer->Stop();
			RandomClicksTimer->Interval = 1; //Reset randomclickTimer interval
			ACTimer->Start();
		}
	}

	private: System::Void ACStopButton_Click(System::Object^ sender, System::EventArgs^ e) {
		linkLabel1->Enabled = true;
		RandomClicksTimer->Stop();
		RandomClicksTimer->Interval = 1; //Reset randomclickTimer interval
		INCCOUNTER = 0;
		ACTimer->Stop();
		clickIntervalTSLabel->Text = "Unscheduled";
		ACStartButton->Enabled = true;
		ACStopButton->Enabled = false;
		ACActive = false;
		toolStripDropDownButton1->Enabled = true;
		cursorActivePictureBox->Visible = false;
		cursorInactivePictureBox->Visible = true;

		ACStartButton->Visible = true;
		ACStopButton->Visible = false;

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
	private: System::Void LinkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ClickerSettings CS(% _PROFILE); //Additional Settings link button pop-up
		MyForm::Hide();
		CS.ShowDialog();
		MyForm::Show();

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
		clickIntervalTSLabel->Text = val.ToString() + "ms";
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
	private: System::Void ACKeyPressCheckTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void AKKeyPressCheckTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
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
	private: bool AKActive = false;
	private: System::Void AKStartButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checkACValues(_PROFILE.AKMIN, _PROFILE.AKMAX) == true && _PROFILE.AKDROPDOWN > -1)
		{
			try
			{
				linkLabel2->Enabled = false;

				Key tk(_PROFILE.AKDROPDOWN);
				KeyToPress = tk.KeyToString;

				int val = r.Next(Convert::ToInt32(_PROFILE.AKMIN), Convert::ToInt32(_PROFILE.AKMAX));
				AKTimer->Interval = val;
				AKTime = DateTime::Now.AddMilliseconds(val);

				keyIntervalTSLabel->Text = val.ToString() + "ms";

				AKTimer->Start();

				AKStartButton->Enabled = false;
				AKStopButton->Enabled = true;
				AKActive = true;

				keyboardActivePictureBox->Visible = true;
				keyboardInactivePictureBox->Visible = false;

				AKStartButton->Visible = false;
				AKStopButton->Visible = true;

				toolStripDropDownButton1->Enabled = false;
			}
			catch (...)
			{
				AKActive = false;
				AKStopButton->Enabled = true;
				AKStopButton->PerformClick();
			}

		}
	}
	private: System::Void AKStopButton_Click(System::Object^ sender, System::EventArgs^ e) {
		linkLabel2->Enabled = true;
		AKTimer->Stop();
		keyIntervalTSLabel->Text = "Unscheduled";
		AKStartButton->Enabled = true;
		AKStopButton->Enabled = false;
		AKActive = false;
		keyboardActivePictureBox->Visible = false;
		keyboardInactivePictureBox->Visible = true;

		AKStartButton->Visible = true;
		AKStopButton->Visible = false;

		toolStripDropDownButton1->Enabled = true;
	}
	private: System::Void AKTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		//Keypress
		SendKeys::Send(KeyToPress);
		//

		int val = r.Next(Convert::ToInt32(_PROFILE.AKMIN), Convert::ToInt32(_PROFILE.AKMAX));
		AKTimer->Interval = val;
		AKTime = DateTime::Now.AddMilliseconds(val);
		keyIntervalTSLabel->Text = val.ToString() + "ms";
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
	private: System::Void saveProfileAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveProfileDialog->AddExtension = true;
		SaveProfileDialog->OverwritePrompt = true;
		SaveProfileDialog->Filter = "Click-Servant Profile (*.csp)|*.csp";
		SaveProfileDialog->ShowDialog();

	}
	private: System::Void SaveProfileDialog_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {

		SaveSettingsToPROFILE();
		_PROFILE.SaveProfileAs(SaveProfileDialog->FileName);

		toolStripProfileLabel->Text = System::IO::Path::GetFileNameWithoutExtension(SaveProfileDialog->FileName);
	}

	private: void SaveSettingsToPROFILE()
	{
		/*Clicker | -The _PROFILE settings for additional clicks will either be set or NULL, so we have a default value in place just in case its NULL*/

		if (System::String::IsNullOrEmpty(_PROFILE.ACMAX))
			_PROFILE.ACMAX = "";
		if (System::String::IsNullOrEmpty(_PROFILE.ACMIN))
			_PROFILE.ACMIN = "";
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
	private: System::Void loadProfileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenProfileDialog->AddExtension = true;
		OpenProfileDialog->Filter = "Click-Servant Profile (*.csp)|*.csp";
		OpenProfileDialog->ShowDialog();
	}
	private: System::Void OpenProfileDialog_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
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
		toolStripProfileLabel->Text = OpenProfileDialog->SafeFileName->Replace(".csp", "");
	}

			 /*--------------------------------------------------------------------------------------
			::.........................::::.........................::::.........................::*/
			/*::.........................::END LOAD PROFILE SECTION::.........................::*/
		   /*--------------------------------------------------------------------------------------
			::.........................::::.........................::::.........................::*/




	private: System::Void MouseUpdateTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		cursorCoordsTSLabel->Text = "(X: " + System::Windows::Forms::Cursor::Position.X + ", Y: " + System::Windows::Forms::Cursor::Position.Y + ")";

		Key tk(_PROFILE.AKDROPDOWN);
		keyTSLabel->Text = (tk.KeyToString)->Replace("{","")->Replace("}","");
		//_PROFILE.AKDROPDOWN

		int nextClickTimeMs = -1;
		switch (ACActive)
		{
		case true:
			nextClickTimeMs = Convert::ToInt32((ACTime - DateTime::Now).TotalMilliseconds);
			nextClickTSLabel->Text = nextClickTimeMs.ToString() + "ms";
			break;
		case false:
			nextClickTSLabel->Text = "Unscheduled";
			clickIntervalTSLabel->Text = "Unscheduled";
			break;
		}

		int nextKeyTimeMs = -1;
		switch (AKActive)
		{
		case true:
			nextKeyTimeMs = Convert::ToInt32((AKTime - DateTime::Now).TotalMilliseconds);
			nextKeyTSLabel->Text = nextKeyTimeMs.ToString() + "ms";
			break;
		case false:
			nextKeyTSLabel->Text = "Unscheduled";
			keyIntervalTSLabel->Text = "Unscheduled";
			break;
		}

	}


	private: System::Void LinkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		KeyerSettings KS(% _PROFILE); //Additional Settings link button pop-up
		MyForm::Hide();
		KS.ShowDialog();
		MyForm::Show();
	}
	private: System::Void CheckForUpdatesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("No updates found", "Checking for updates...");
	}
	};
}
