#pragma once
ref class Profile
{
public:
	Profile();
	Profile(System::String^ hour, System::String^ minute, System::String^ second, System::String^ ACMin, System::String^ ACMax, int ACHotkey, System::String^ AKMin, System::String^ AKMax, int AKHotkey, int AKDropdown);
	void SaveProfileAs(System::String^ PATH);
	void LoadProfile(System::String^ PATH);
	System::String^ HOUR;
	System::String^ MINUTE;
	System::String^ SECOND;
	System::String^ ACMIN;
	System::String^ ACMAX;
	int ACHOTKEY;
	System::String^ AKMIN;
	System::String^ AKMAX;
	int AKHOTKEY;
	int AKDROPDOWN;
private:
	void LoadShutdownTime(System::String^ fileText);
	void LoadAutoClickerVals(System::String^ fileText);
	void LoadAutoKeyerVals(System::String^ fileText);
};

