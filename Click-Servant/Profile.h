#pragma once
public ref class Profile
{
public:
	Profile();
	
	void SaveProfileAs(System::String^ PATH);
	void LoadProfile(System::String^ PATH);

	/*Clicker settings*/
	System::String^ ACMIN;
	System::String^ ACMAX;
	int ACHOTKEY;
	/**/

	/*Keyer settings*/
	System::String^ AKMIN;
	System::String^ AKMAX;
	int AKHOTKEY;
	int AKDROPDOWN;
	/**/

	/*Extra Clicker settings*/
	System::String^ RANDCLICKMIN;
	System::String^ RANDCLICKMAX;
	int RANDCLICK;
	System::String^ RANDDELAYMIN;
	System::String^ RANDDELAYMAX;


	/**/

private:
};

