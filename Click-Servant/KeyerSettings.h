#pragma once
#include "Profile.h"

namespace PRATHTool {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for KeyerSettings
	/// </summary>
	public ref class KeyerSettings : public System::Windows::Forms::Form
	{
	private: Profile^ prof;
	public:
		KeyerSettings(Profile^ f)
		{
			InitializeComponent();

			prof = f;

			if (!System::String::IsNullOrEmpty(prof->AKMAX))
				AKMaxTextBox->Text = prof->AKMAX->Replace("X", "");
			else
				AKMaxTextBox->Text = prof->AKMAX;

			if (!System::String::IsNullOrEmpty(prof->AKMIN))
				AKMinTextBox->Text = prof->AKMIN->Replace("X", "");
			else
				AKMinTextBox->Text = prof->AKMIN;

			if (prof->AKDROPDOWN != -1)
				AKDropDown->SelectedIndex = prof->AKDROPDOWN;
			else
				prof->AKDROPDOWN = -1;

			AKHotkeyCheckBox->Checked = prof->AKHOTKEY;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~KeyerSettings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ AKHotkeyCheckBox;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ AKMaxTextBox;
	private: System::Windows::Forms::TextBox^ AKMinTextBox;
	private: System::Windows::Forms::ComboBox^ AKDropDown;
	private: System::Windows::Forms::Button^ KeyerSave;
	private: System::Windows::Forms::Button^ KeyerCancel;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(KeyerSettings::typeid));
			this->AKHotkeyCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->AKMaxTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AKMinTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AKDropDown = (gcnew System::Windows::Forms::ComboBox());
			this->KeyerSave = (gcnew System::Windows::Forms::Button());
			this->KeyerCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// AKHotkeyCheckBox
			// 
			this->AKHotkeyCheckBox->AutoSize = true;
			this->AKHotkeyCheckBox->BackColor = System::Drawing::Color::Transparent;
			this->AKHotkeyCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AKHotkeyCheckBox->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->AKHotkeyCheckBox->Location = System::Drawing::Point(73, 114);
			this->AKHotkeyCheckBox->Name = L"AKHotkeyCheckBox";
			this->AKHotkeyCheckBox->Size = System::Drawing::Size(162, 17);
			this->AKHotkeyCheckBox->TabIndex = 13;
			this->AKHotkeyCheckBox->Text = L"Enable R-SHIFT Hotkey";
			this->AKHotkeyCheckBox->UseVisualStyleBackColor = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label7->Location = System::Drawing::Point(36, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(250, 39);
			this->label7->TabIndex = 14;
			this->label7->Text = L"- Enter time range below in milliseconds\r\n- Every key press is done at a random t"
				L"ime between\r\n   the given range.";
			// 
			// AKMaxTextBox
			// 
			this->AKMaxTextBox->BackColor = System::Drawing::SystemColors::WindowText;
			this->AKMaxTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->AKMaxTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AKMaxTextBox->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->AKMaxTextBox->Location = System::Drawing::Point(154, 61);
			this->AKMaxTextBox->Name = L"AKMaxTextBox";
			this->AKMaxTextBox->Size = System::Drawing::Size(59, 20);
			this->AKMaxTextBox->TabIndex = 16;
			// 
			// AKMinTextBox
			// 
			this->AKMinTextBox->BackColor = System::Drawing::SystemColors::WindowText;
			this->AKMinTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->AKMinTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AKMinTextBox->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->AKMinTextBox->Location = System::Drawing::Point(89, 61);
			this->AKMinTextBox->Name = L"AKMinTextBox";
			this->AKMinTextBox->Size = System::Drawing::Size(59, 20);
			this->AKMinTextBox->TabIndex = 15;
			// 
			// AKDropDown
			// 
			this->AKDropDown->BackColor = System::Drawing::SystemColors::WindowText;
			this->AKDropDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AKDropDown->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->AKDropDown->FormattingEnabled = true;
			this->AKDropDown->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"Escape", L"BackSpace", L"End", L"Home", L"F1",
					L"F2", L"F3", L"F4", L"F5", L"F6", L"F7", L"F8", L"F9", L"F10", L"F11", L"F12", L"Tab", L"Up Arrow", L"Down Arrow", L"Left Arrow",
					L"Right Arrow"
			});
			this->AKDropDown->Location = System::Drawing::Point(117, 87);
			this->AKDropDown->Name = L"AKDropDown";
			this->AKDropDown->Size = System::Drawing::Size(76, 21);
			this->AKDropDown->TabIndex = 17;
			// 
			// KeyerSave
			// 
			this->KeyerSave->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"KeyerSave.BackgroundImage")));
			this->KeyerSave->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->KeyerSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->KeyerSave->Location = System::Drawing::Point(88, 146);
			this->KeyerSave->Name = L"KeyerSave";
			this->KeyerSave->Size = System::Drawing::Size(60, 23);
			this->KeyerSave->TabIndex = 18;
			this->KeyerSave->Text = L"Save";
			this->KeyerSave->UseVisualStyleBackColor = true;
			this->KeyerSave->Click += gcnew System::EventHandler(this, &KeyerSettings::KeyerSave_Click);
			// 
			// KeyerCancel
			// 
			this->KeyerCancel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"KeyerCancel.BackgroundImage")));
			this->KeyerCancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->KeyerCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->KeyerCancel->Location = System::Drawing::Point(164, 146);
			this->KeyerCancel->Name = L"KeyerCancel";
			this->KeyerCancel->Size = System::Drawing::Size(60, 23);
			this->KeyerCancel->TabIndex = 19;
			this->KeyerCancel->Text = L"Cancel";
			this->KeyerCancel->UseVisualStyleBackColor = true;
			this->KeyerCancel->Click += gcnew System::EventHandler(this, &KeyerSettings::KeyerCancel_Click);
			// 
			// KeyerSettings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(309, 181);
			this->Controls->Add(this->KeyerCancel);
			this->Controls->Add(this->KeyerSave);
			this->Controls->Add(this->AKDropDown);
			this->Controls->Add(this->AKMaxTextBox);
			this->Controls->Add(this->AKMinTextBox);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->AKHotkeyCheckBox);
			this->DoubleBuffered = true;
			this->MaximumSize = System::Drawing::Size(325, 220);
			this->MinimumSize = System::Drawing::Size(325, 220);
			this->Name = L"KeyerSettings";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Interval Keyer Settings";
			this->Load += gcnew System::EventHandler(this, &KeyerSettings::KeyerSettings_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void KeyerSettings_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void KeyerSave_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int countError = 0;

			if (Convert::ToInt32(AKMaxTextBox->Text) < Convert::ToInt32(AKMinTextBox->Text))
			{
				countError++;
				MessageBox::Show("Upper range must be larger than lower range!");
			}
			else if (Convert::ToInt32(AKMinTextBox->Text) < 1)
			{
				countError++;
				MessageBox::Show("Lower value must be greater than 0");
			}

			if (countError == 0)
			{
				prof->AKHOTKEY = AKHotkeyCheckBox->Checked;
				prof->AKMIN = AKMinTextBox->Text;
				prof->AKMAX = AKMaxTextBox->Text;
				prof->AKDROPDOWN = AKDropDown->SelectedIndex;
				this->Close();
			}
		}
		catch(...)
		{
			MessageBox::Show("Invalid settings!");
		}
		

	}
	private: System::Void KeyerCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
