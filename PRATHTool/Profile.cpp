#include "Profile.h"



Profile::Profile()
{
}
Profile::Profile(System::String^ hour, System::String^ minute, System::String^ second, System::String^ ACMin, System::String^ ACMax, int ACHotkey, System::String^ AKMin, System::String^ AKMax, int AKHotkey, int AKDropdown)
{
	HOUR = hour;
	MINUTE = minute;
	SECOND = second;
	ACMIN = ACMin;
	ACMAX = ACMax;
	ACHOTKEY = ACHotkey;
	AKMIN = AKMin;
	AKMAX = AKMax;
	AKHOTKEY = AKHotkey;
	AKDROPDOWN = AKDropdown;
}

void Profile::SaveProfileAs(System::String^ PATH)
{
	array<System::String^>^ profProps = { HOUR,MINUTE,SECOND,ACMIN,ACMAX,ACHOTKEY.ToString(),AKMIN,AKMAX,AKHOTKEY.ToString(),AKDROPDOWN.ToString() };
	for (int i = 0; i < profProps->Length; i++)
	{
		if (profProps[i]->Length < 1)
			profProps[i] = "X";
		if (profProps[i] == "-1")
			profProps[i] = "X";
	}


	System::String^ writeString = "!" + profProps[0] + "-" + profProps[1] + "-" + profProps[2] + "!@" + profProps[3] + "-" + profProps[4] + "-" + profProps[5] + "@#" + profProps[6] + "-" + profProps[7] + "-" + profProps[8] + "-" + profProps[9] + "#";

	System::IO::File::WriteAllText(PATH, writeString);

}
void Profile::LoadProfile(System::String^ PATH)
{
	System::String^ SavedProf = System::IO::File::ReadAllText(PATH);
	//Get shutdown hour, minute,second
	System::String^ temp;
	int part = 1;
	for (int i = 0; i < SavedProf->Length; i++)
	{
		
		if(SavedProf[i]=='@')
		{
			SECOND = temp;
			break;
		}
		else
		{
			if(SavedProf[i] == '-')
			{
				switch(part) 
				{
				case 1:
					HOUR = temp;
					part++;
					temp = "";
					break;
				case 2:
					MINUTE = temp;
					part++;
					temp = "";
					break;

				default:
					break;
				}
			}
			else if(SavedProf[i] !='!')
			{
				temp = temp + SavedProf[i];
				
			}
			
		}
	}
}



