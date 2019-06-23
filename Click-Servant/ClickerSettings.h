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
	private: System::Windows::Forms::Label^ RandClicksRangeLabel;
	private: System::Windows::Forms::Button^ RandClickSaveButton;
	private: System::Windows::Forms::Button^ RandClickCancelButton;
	private: System::Windows::Forms::Label^ RandDelayLabel;
	private: System::Windows::Forms::TextBox^ RandDelayMaxTextBox;


	private: System::Windows::Forms::TextBox^ RandDelayMinTextBox;

	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::TextBox^ ACMaxTimeTextBox;
	private: System::Windows::Forms::TextBox^ ACMinTimeTextBox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ ACHotkeyCheckBox;






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
			this->RandClicksRangeLabel = (gcnew System::Windows::Forms::Label());
			this->RandClickSaveButton = (gcnew System::Windows::Forms::Button());
			this->RandClickCancelButton = (gcnew System::Windows::Forms::Button());
			this->RandDelayLabel = (gcnew System::Windows::Forms::Label());
			this->RandDelayMaxTextBox = (gcnew System::Windows::Forms::TextBox());
			this->RandDelayMinTextBox = (gcnew System::Windows::Forms::TextBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->ACMaxTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ACMinTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ACHotkeyCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// RandClicksMaxTimeTextBox
			// 
			this->RandClicksMaxTimeTextBox->Enabled = false;
			this->RandClicksMaxTimeTextBox->Location = System::Drawing::Point(383, 40);
			this->RandClicksMaxTimeTextBox->Name = L"RandClicksMaxTimeTextBox";
			this->RandClicksMaxTimeTextBox->Size = System::Drawing::Size(39, 20);
			this->RandClicksMaxTimeTextBox->TabIndex = 4;
			// 
			// RandClicksMinTimeTextBox
			// 
			this->RandClicksMinTimeTextBox->Enabled = false;
			this->RandClicksMinTimeTextBox->Location = System::Drawing::Point(338, 40);
			this->RandClicksMinTimeTextBox->Name = L"RandClicksMinTimeTextBox";
			this->RandClicksMinTimeTextBox->Size = System::Drawing::Size(39, 20);
			this->RandClicksMinTimeTextBox->TabIndex = 3;
			this->RandClicksMinTimeTextBox->Text = L"1";
			// 
			// RandClicksCheckBox
			// 
			this->RandClicksCheckBox->AutoSize = true;
			this->RandClicksCheckBox->BackColor = System::Drawing::Color::Transparent;
			this->RandClicksCheckBox->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->RandClicksCheckBox->Location = System::Drawing::Point(319, 17);
			this->RandClicksCheckBox->Name = L"RandClicksCheckBox";
			this->RandClicksCheckBox->Size = System::Drawing::Size(127, 17);
			this->RandClicksCheckBox->TabIndex = 13;
			this->RandClicksCheckBox->Text = L"Enable multiple clicks";
			this->RandClicksCheckBox->UseVisualStyleBackColor = false;
			this->RandClicksCheckBox->CheckedChanged += gcnew System::EventHandler(this, &ClickerSettings::RandClicksCheckBox_CheckedChanged);
			// 
			// RandClicksRangeLabel
			// 
			this->RandClicksRangeLabel->AutoSize = true;
			this->RandClicksRangeLabel->BackColor = System::Drawing::Color::Transparent;
			this->RandClicksRangeLabel->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->RandClicksRangeLabel->Location = System::Drawing::Point(331, 67);
			this->RandClicksRangeLabel->Name = L"RandClicksRangeLabel";
			this->RandClicksRangeLabel->Size = System::Drawing::Size(97, 26);
			this->RandClicksRangeLabel->TabIndex = 14;
			this->RandClicksRangeLabel->Text = L"       Click range\r\n(For example: 1 - 5)";
			// 
			// RandClickSaveButton
			// 
			this->RandClickSaveButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RandClickSaveButton.BackgroundImage")));
			this->RandClickSaveButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->RandClickSaveButton->Location = System::Drawing::Point(178, 149);
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
			this->RandClickCancelButton->Location = System::Drawing::Point(244, 149);
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
			this->RandDelayLabel->BackColor = System::Drawing::Color::Transparent;
			this->RandDelayLabel->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->RandDelayLabel->Location = System::Drawing::Point(331, 129);
			this->RandDelayLabel->Name = L"RandDelayLabel";
			this->RandDelayLabel->Size = System::Drawing::Size(104, 26);
			this->RandDelayLabel->TabIndex = 19;
			this->RandDelayLabel->Text = L"Delay in milliseconds\r\n     between clicks";
			// 
			// RandDelayMaxTextBox
			// 
			this->RandDelayMaxTextBox->Enabled = false;
			this->RandDelayMaxTextBox->Location = System::Drawing::Point(383, 103);
			this->RandDelayMaxTextBox->Name = L"RandDelayMaxTextBox";
			this->RandDelayMaxTextBox->Size = System::Drawing::Size(39, 20);
			this->RandDelayMaxTextBox->TabIndex = 18;
			// 
			// RandDelayMinTextBox
			// 
			this->RandDelayMinTextBox->Enabled = false;
			this->RandDelayMinTextBox->Location = System::Drawing::Point(338, 103);
			this->RandDelayMinTextBox->Name = L"RandDelayMinTextBox";
			this->RandDelayMinTextBox->Size = System::Drawing::Size(39, 20);
			this->RandDelayMinTextBox->TabIndex = 17;
			// 
			// toolTip1
			// 
			this->toolTip1->Tag = L"";
			// 
			// ACMaxTimeTextBox
			// 
			this->ACMaxTimeTextBox->Location = System::Drawing::Point(110, 60);
			this->ACMaxTimeTextBox->Name = L"ACMaxTimeTextBox";
			this->ACMaxTimeTextBox->Size = System::Drawing::Size(59, 20);
			this->ACMaxTimeTextBox->TabIndex = 21;
			// 
			// ACMinTimeTextBox
			// 
			this->ACMinTimeTextBox->ForeColor = System::Drawing::SystemColors::WindowText;
			this->ACMinTimeTextBox->Location = System::Drawing::Point(45, 60);
			this->ACMinTimeTextBox->Name = L"ACMinTimeTextBox";
			this->ACMinTimeTextBox->Size = System::Drawing::Size(59, 20);
			this->ACMinTimeTextBox->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label4->Location = System::Drawing::Point(11, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(227, 39);
			this->label4->TabIndex = 22;
			this->label4->Text = L"- Enter time range below in milliseconds\r\n- Every click is done at a random time "
				L"between\r\n   the given range.";
			// 
			// ACHotkeyCheckBox
			// 
			this->ACHotkeyCheckBox->AutoSize = true;
			this->ACHotkeyCheckBox->BackColor = System::Drawing::Color::Transparent;
			this->ACHotkeyCheckBox->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->ACHotkeyCheckBox->Location = System::Drawing::Point(45, 97);
			this->ACHotkeyCheckBox->Name = L"ACHotkeyCheckBox";
			this->ACHotkeyCheckBox->Size = System::Drawing::Size(142, 17);
			this->ACHotkeyCheckBox->TabIndex = 23;
			this->ACHotkeyCheckBox->Text = L"Enable R-CTRL Hot-Key\r\n";
			this->ACHotkeyCheckBox->UseVisualStyleBackColor = false;
			// 
			// ClickerSettings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(478, 184);
			this->Controls->Add(this->ACHotkeyCheckBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->ACMaxTimeTextBox);
			this->Controls->Add(this->ACMinTimeTextBox);
			this->Controls->Add(this->RandDelayLabel);
			this->Controls->Add(this->RandDelayMaxTextBox);
			this->Controls->Add(this->RandDelayMinTextBox);
			this->Controls->Add(this->RandClickCancelButton);
			this->Controls->Add(this->RandClickSaveButton);
			this->Controls->Add(this->RandClicksRangeLabel);
			this->Controls->Add(this->RandClicksCheckBox);
			this->Controls->Add(this->RandClicksMaxTimeTextBox);
			this->Controls->Add(this->RandClicksMinTimeTextBox);
			this->DoubleBuffered = true;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(494, 223);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(494, 223);
			this->Name = L"ClickerSettings";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Interval Clicker Settings";
			this->Load += gcnew System::EventHandler(this, &ClickerSettings::ClickerSettings_Load);
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
					MessageBox::Show("Upper range integer for # of clicks must be a non-negative number!");
				}
				//Check Random Upper is greater than Random Lower
				else if(Convert::ToInt32(RandClicksMaxTimeTextBox->Text) < Convert::ToInt32(RandClicksMinTimeTextBox->Text))
				{
					countError++;
					MessageBox::Show("Upper range integer for # of clicks must be greater than the lower range!");
				}
				//Check Random Lower is greater than 1
				else if(Convert::ToInt32(RandClicksMinTimeTextBox->Text) < 1)
				{
					countError++;
					MessageBox::Show("Lower range must be greater or equal to 1!");
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
					MessageBox::Show("Invalid click interval range!");
				}
				//Assign Random Delay Lower & Upper
				else
				{
					prof->RANDDELAYMIN = RandDelayMinTextBox->Text;
					prof->RANDDELAYMAX = RandDelayMaxTextBox->Text;
				}
				//Check time interval
				if(checkACValues(ACMinTimeTextBox->Text,ACMaxTimeTextBox->Text) != true)
				{
					countError++;
					MessageBox::Show("Invalid interval range!");
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

private: System::Void ClickerSettings_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
