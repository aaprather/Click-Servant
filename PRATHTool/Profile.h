#pragma once
public ref class Profile
{
public:
	Profile();
	
	void SaveProfileAs(System::String^ PATH);
	void LoadProfile(System::String^ PATH);

	/*Shutdown settings*/
	System::String^ HOUR;
	System::String^ MINUTE;
	System::String^ SECOND;
	/**/

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
	void LoadShutdownTime(System::String^ fileText); //Load shutdown settings from file
	void LoadAutoClickerVals(System::String^ fileText); //Load clicker settings from file
	void LoadAutoKeyerVals(System::String^ fileText); //Load keyer settings from file
};

