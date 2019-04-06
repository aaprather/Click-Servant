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
	/// Summary for ClickerSettings
	/// </summary>
	public ref class ClickerSettings : public System::Windows::Forms::Form
	{

	private: Profile^ prof;

	public:
		ClickerSettings(Profile^ f)
		{
			InitializeComponent();
			toolTip1->SetToolTip(this->RandClicksRangeLabel, "The program will pick a number between the given range and click X many times.");
			toolTip1->SetToolTip(this->RandDelayLabel, "Enter a range in milliseconds. This is the amount of delay between each click.");
			//
			prof = f;
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
	private: System::Windows::Forms::Label^ RandClicksRangeLabel;
	private: System::Windows::Forms::Button^ RandClickSaveButton;
	private: System::Windows::Forms::Button^ RandClickCancelButton;
	private: System::Windows::Forms::Label^ RandDelayLabel;
	private: System::Windows::Forms::TextBox^ RandDelayMaxTextBox;


	private: System::Windows::Forms::TextBox^ RandDelayMinTextBox;

	private: System::Windows::Forms::ToolTip^ toolTip1;
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
			this->RandClicksMaxTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->RandClicksMinTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->RandClicksCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->RandClicksRangeLabel = (gcnew System::Windows::Forms::Label());
			this->RandClickSaveButton = (gcnew System::Windows::Forms::Button());
			this->RandClickCancelButton = (gcnew System::Windows::Forms::Button());
			this->RandDelayLabel = (gcnew System::Windows::Forms::Label());
			this->RandDelayMaxTextBox = (gcnew System::Windows::Forms::TextBox());
			this->RandDelayMinTextBox = (gcnew System::Windows::Forms::TextBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->SuspendLayout();
			// 
			// RandClicksMaxTimeTextBox
			// 
			this->RandClicksMaxTimeTextBox->Enabled = false;
			this->RandClicksMaxTimeTextBox->Location = System::Drawing::Point(74, 40);
			this->RandClicksMaxTimeTextBox->Name = L"RandClicksMaxTimeTextBox";
			this->RandClicksMaxTimeTextBox->Size = System::Drawing::Size(39, 20);
			this->RandClicksMaxTimeTextBox->TabIndex = 4;
			// 
			// RandClicksMinTimeTextBox
			// 
			this->RandClicksMinTimeTextBox->Enabled = false;
			this->RandClicksMinTimeTextBox->Location = System::Drawing::Point(29, 40);
			this->RandClicksMinTimeTextBox->Name = L"RandClicksMinTimeTextBox";
			this->RandClicksMinTimeTextBox->Size = System::Drawing::Size(39, 20);
			this->RandClicksMinTimeTextBox->TabIndex = 3;
			this->RandClicksMinTimeTextBox->Text = L"1";
			// 
			// RandClicksCheckBox
			// 
			this->RandClicksCheckBox->AutoSize = true;
			this->RandClicksCheckBox->Location = System::Drawing::Point(12, 12);
			this->RandClicksCheckBox->Name = L"RandClicksCheckBox";
			this->RandClicksCheckBox->Size = System::Drawing::Size(124, 17);
			this->RandClicksCheckBox->TabIndex = 13;
			this->RandClicksCheckBox->Text = L"Random # of clicks\?";
			this->RandClicksCheckBox->UseVisualStyleBackColor = true;
			this->RandClicksCheckBox->CheckedChanged += gcnew System::EventHandler(this, &ClickerSettings::RandClicksCheckBox_CheckedChanged);
			// 
			// RandClicksRangeLabel
			// 
			this->RandClicksRangeLabel->AutoSize = true;
			this->RandClicksRangeLabel->Location = System::Drawing::Point(32, 63);
			this->RandClicksRangeLabel->Name = L"RandClicksRangeLabel";
			this->RandClicksRangeLabel->Size = System::Drawing::Size(81, 13);
			this->RandClicksRangeLabel->TabIndex = 14;
			this->RandClicksRangeLabel->Text = L"Range of clicks";
			// 
			// RandClickSaveButton
			// 
			this->RandClickSaveButton->Location = System::Drawing::Point(8, 140);
			this->RandClickSaveButton->Name = L"RandClickSaveButton";
			this->RandClickSaveButton->Size = System::Drawing::Size(60, 23);
			this->RandClickSaveButton->TabIndex = 15;
			this->RandClickSaveButton->Text = L"Save";
			this->RandClickSaveButton->UseVisualStyleBackColor = true;
			this->RandClickSaveButton->Click += gcnew System::EventHandler(this, &ClickerSettings::RandClickSaveButton_Click);
			// 
			// RandClickCancelButton
			// 
			this->RandClickCancelButton->Location = System::Drawing::Point(74, 140);
			this->RandClickCancelButton->Name = L"RandClickCancelButton";
			this->RandClickCancelButton->Size = System::Drawing::Size(60, 23);
			this->RandClickCancelButton->TabIndex = 16;
			this->RandClickCancelButton->Text = L"Cancel";
			this->RandClickCancelButton->UseVisualStyleBackColor = true;
			this->RandClickCancelButton->Click += gcnew System::EventHandler(this, &ClickerSettings::RandClickCancelButton_Click);
			// 
			// RandDelayLabel
			// 
			this->RandDelayLabel->AutoSize = true;
			this->RandDelayLabel->Location = System::Drawing::Point(22, 120);
			this->RandDelayLabel->Name = L"RandDelayLabel";
			this->RandDelayLabel->Size = System::Drawing::Size(108, 13);
			this->RandDelayLabel->TabIndex = 19;
			this->RandDelayLabel->Text = L"Delay between clicks";
			// 
			// RandDelayMaxTextBox
			// 
			this->RandDelayMaxTextBox->Enabled = false;
			this->RandDelayMaxTextBox->Location = System::Drawing::Point(74, 97);
			this->RandDelayMaxTextBox->Name = L"RandDelayMaxTextBox";
			this->RandDelayMaxTextBox->Size = System::Drawing::Size(39, 20);
			this->RandDelayMaxTextBox->TabIndex = 18;
			// 
			// RandDelayMinTextBox
			// 
			this->RandDelayMinTextBox->Enabled = false;
			this->RandDelayMinTextBox->Location = System::Drawing::Point(29, 97);
			this->RandDelayMinTextBox->Name = L"RandDelayMinTextBox";
			this->RandDelayMinTextBox->Size = System::Drawing::Size(39, 20);
			this->RandDelayMinTextBox->TabIndex = 17;
			// 
			// toolTip1
			// 
			this->toolTip1->Tag = L"";
			// 
			// ClickerSettings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(141, 184);
			this->Controls->Add(this->RandDelayLabel);
			this->Controls->Add(this->RandDelayMaxTextBox);
			this->Controls->Add(this->RandDelayMinTextBox);
			this->Controls->Add(this->RandClickCancelButton);
			this->Controls->Add(this->RandClickSaveButton);
			this->Controls->Add(this->RandClicksRangeLabel);
			this->Controls->Add(this->RandClicksCheckBox);
			this->Controls->Add(this->RandClicksMaxTimeTextBox);
			this->Controls->Add(this->RandClicksMinTimeTextBox);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(157, 223);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(157, 223);
			this->Name = L"ClickerSettings";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RandClickSaveButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int countError = 0;
			if (RandClicksCheckBox->Checked == 1)
			{
				if (Convert::ToInt32(RandClicksMaxTimeTextBox->Text) < 1)
				{
					countError++;
					MessageBox::Show("Upper range integer for # of clicks must be a non-negative number!");
				}
				else if(Convert::ToInt32(RandClicksMaxTimeTextBox->Text) < Convert::ToInt32(RandClicksMinTimeTextBox->Text))
				{
					countError++;
					MessageBox::Show("Upper range integer for # of clicks must be greater than the lower range!");
				}
				else if(Convert::ToInt32(RandClicksMinTimeTextBox->Text) < 1)
				{
					countError++;
					MessageBox::Show("Lower range must be greater or equal to 1!");
				}
				else
				{
					prof->RANDCLICKMAX = RandClicksMaxTimeTextBox->Text;
				}
				if (Convert::ToInt32(RandDelayMinTextBox->Text) >= Convert::ToInt32(RandDelayMaxTextBox->Text))
				{
					countError++;
					MessageBox::Show("Invalid click interval range!");
				}
				else
				{
					prof->RANDDELAYMIN = RandDelayMinTextBox->Text;
					prof->RANDDELAYMAX = RandDelayMaxTextBox->Text;
				}

				if (countError == 0)
				{
					prof->RANDCLICK = RandClicksCheckBox->Checked;
					prof->RANDCLICKMIN = RandClicksMinTimeTextBox->Text;
					this->Close();
				}
			}
			else //Allow user to save settings even if invalid, they will not be usable until fixed.
			{
				prof->RANDCLICKMAX = RandClicksMaxTimeTextBox->Text;
				prof->RANDDELAYMIN = RandDelayMinTextBox->Text;
				prof->RANDDELAYMAX = RandDelayMaxTextBox->Text;
				prof->RANDCLICK = RandClicksCheckBox->Checked;
				prof->RANDCLICKMIN = RandClicksMinTimeTextBox->Text;
				this->Close();
			}
		}catch(...)
		{
			MessageBox::Show("Please correctly enter your settings!");
		}

	}
	private: System::Void RandClickCancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void RandClicksCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (RandClicksCheckBox->Checked == 1)
		{
			RandClicksMinTimeTextBox->Enabled = true;
			RandClicksMaxTimeTextBox->Enabled = true;
			RandDelayMinTextBox->Enabled = true;
			RandDelayMaxTextBox->Enabled = true;
		}
		else
		{
			RandClicksMinTimeTextBox->Enabled = false;
			RandClicksMaxTimeTextBox->Enabled = false;
			RandDelayMinTextBox->Enabled = false;
			RandDelayMaxTextBox->Enabled = false;
		}
			
	}

};
}
