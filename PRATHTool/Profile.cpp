#include "Profile.h"
#include <cstddef>

Profile::Profile()
{
}


void Profile::SaveProfileAs(System::String^ PATH)
{
	array<System::String^>^ profProps = { HOUR,MINUTE,SECOND,ACMIN,ACMAX,ACHOTKEY.ToString(),RANDCLICKMIN,RANDCLICKMAX,RANDCLICK.ToString(),RANDDELAYMIN,RANDDELAYMAX,AKMIN,AKMAX,AKHOTKEY.ToString(),AKDROPDOWN.ToString() };
	for (int i = 0; i < profProps->Length; i++)
	{
		if (profProps[i]->Length < 1)
			profProps[i] = "X";
		if (profProps[i] == "-1")
			profProps[i] = "X";
	}


	System::String^ writeString = "!" + profProps[0] + "-" + profProps[1] + "-" + profProps[2] + "!@" + profProps[3] + "-" + profProps[4] + "-" + profProps[5] + "-" + profProps[6] + "-" + profProps[7] + "-" + profProps[8] + "-" + profProps[9] + "-" + profProps[10] + "@#" + profProps[11] + "-" + profProps[12] + "-" + profProps[13] + "-" + profProps[14] + "#_";

	System::IO::File::WriteAllText(PATH, writeString);

}
void Profile::LoadProfile(System::String ^ PATH)
{
	auto lines = System::IO::File::ReadAllLines(PATH);
	int counter = 0;
	while (lines[counter] != "")
	{
		try
		{
			if (lines[counter]->Contains("HOUR=")) { HOUR = lines[counter]->Replace("HOUR=", ""); }
			if (lines[counter]->Contains("MINUTE=")) { MINUTE = lines[counter]->Replace("MINUTE=", ""); }
			if (lines[counter]->Contains("SECOND=")) { SECOND = lines[counter]->Replace("SECOND=", ""); }
			if (lines[counter]->Contains("ACMIN=")) { ACMIN = lines[counter]->Replace("ACMIN=", ""); }
			if (lines[counter]->Contains("ACMAX=")) { ACMAX = lines[counter]->Replace("ACMAX=", ""); }
			if (lines[counter]->Contains("ACHOTKEY=")) { ACHOTKEY = System::Convert::ToInt32(lines[counter]->Replace("ACHOTKEY=", "")); }
			if (lines[counter]->Contains("RANDCLICKMIN=")) { RANDCLICKMIN = lines[counter]->Replace("RANDCLICKMIN=", ""); }
			if (lines[counter]->Contains("RANDCLICKMAX=")) { RANDCLICKMAX = lines[counter]->Replace("RANDCLICKMAX=", ""); }
			if (lines[counter]->Contains("RANDCLICK=")) { RANDCLICK = System::Convert::ToInt32(lines[counter]->Replace("RANDCLICK=", "")); }
			if (lines[counter]->Contains("RANDDELAYMIN=")) { RANDDELAYMIN = lines[counter]->Replace("RANDDELAYMIN=", ""); }
			if (lines[counter]->Contains("RANDDELAYMAX=")) { RANDDELAYMAX = lines[counter]->Replace("RANDDELAYMAX=", ""); }
			if (lines[counter]->Contains("AKMIN=")) { AKMIN = lines[counter]->Replace("AKMIN=", ""); }
			if (lines[counter]->Contains("AKMAX=")) { AKMAX = lines[counter]->Replace("AKMAX=", ""); }
			if (lines[counter]->Contains("AKHOTKEY=")) { AKHOTKEY = System::Convert::ToInt32(lines[counter]->Replace("AKHOTKEY=", "")); }
			if (lines[counter]->Contains("AKDROPDOWN=")) { AKDROPDOWN = System::Convert::ToInt32(lines[counter]->Replace("AKDROPDOWN=", "")); }
		}
		catch (...)
		{
			if (lines[counter]->Contains("ACHOTKEY=")) { ACHOTKEY = 0; }
			if (lines[counter]->Contains("RANDCLICK=")) { RANDCLICK = 0; }
			if (lines[counter]->Contains("AKHOTKEY=")) { AKHOTKEY = 0; }
			if (lines[counter]->Contains("AKDROPDOWN=")) { AKDROPDOWN = -1; }
		}
		counter++;
	}
}
