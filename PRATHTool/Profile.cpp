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


	System::String^ writeString = "!" + profProps[0] + "-" + profProps[1] + "-" + profProps[2] + "!@" + profProps[3] + "-" + profProps[4] + "-" + profProps[5] + "@#" + profProps[6] + "-" + profProps[7] + "-" + profProps[8] + "-" + profProps[9] + "#_";

	System::IO::File::WriteAllText(PATH, writeString);

}
void Profile::LoadProfile(System::String^ PATH)
{
	System::String^ SavedProf = System::IO::File::ReadAllText(PATH);
	//Get shutdown hour, minute,second
	LoadShutdownTime(SavedProf);
	SavedProf = SavedProf->Replace("!" + HOUR + "-" + MINUTE + "-" + SECOND + "!", "");
	LoadAutoClickerVals(SavedProf);
	SavedProf = SavedProf->Replace("@" + ACMIN + "-" + ACMAX + "-" + ACHOTKEY + "@", "");
	LoadAutoKeyerVals(SavedProf);
}


void Profile::LoadShutdownTime(System::String^ fileText)
{
	System::String^ temp;
	int part = 1;
	/*START SHUTDOWN TIMER*/
	for (int i = 0; i < fileText->Length; i++)
	{

		if (fileText[i] == '@')
		{
			SECOND = temp;
			break;
		}
		else if (fileText[i] == '-')
		{
			switch (part)
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
		else if (fileText[i] != '!')
		{
			temp += fileText[i];

		}

	}
	/*END SHUTDOWN TIMER*/
}
void Profile::LoadAutoClickerVals(System::String^ fileText)
{
	System::String^ temp;
	int part = 1;

	for (int i = 0; i < fileText->Length; i++)
	{
		if (fileText[i] == '#')
		{
			ACHOTKEY = System::Convert::ToInt32(temp);
			break;
		}
		else if (fileText[i] == '-')
		{
			switch (part)
			{
			case 1:
				ACMIN = temp;
				part++;
				temp = "";
				break;
			case 2:
				ACMAX = temp;
				part++;
				temp = "";
				break;

			default:
				break;
			}
		}
		else if (fileText[i] != '@')
		{
			temp += fileText[i];

		}
	}
}
void Profile::LoadAutoKeyerVals(System::String^ fileText)
{
	System::String^ temp;
	int part = 1;

	for (int i = 0; i < fileText->Length; i++)
	{
		if (fileText[i] == '_')
		{
			if (temp == "X")
				AKDROPDOWN = -1;
			else
				AKDROPDOWN = System::Convert::ToInt32(temp);
			break;
		}
		else if (fileText[i] == '-')
		{
			switch (part)
			{
			case 1:
				AKMIN = temp;
				part++;
				temp = "";
				break;
			case 2:
				AKMAX = temp;
				part++;
				temp = "";
				break;
			case 3:
				AKHOTKEY = System::Convert::ToInt32(temp);
				part++;
				temp = "";
				break;

			default:
				break;
			}
		}
		else if (fileText[i] != '#')
		{
			temp += fileText[i];

		}
	}
	/*END AUTOKEYER*/
}




