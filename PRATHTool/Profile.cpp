#include "Profile.h"
#include <cstddef>

Profile::Profile()
{
}



void Profile::SaveProfileAs(System::String^ PATH)
{
	array<System::String^>^ fileLines = { "SHUTDOWN","_______",
	"HOUR=" + HOUR,"MINUTE=" + MINUTE, "SECOND=" + SECOND,
	"CLICKER","_______",
	"ACMIN=" + ACMIN,"ACMAX=" + ACMAX,"ACHOTKEY=" + ACHOTKEY,"RANDCLICKMIN=" + RANDCLICKMIN,"RANDCLICKMAX=" + RANDCLICKMAX,"RANDCLICK=" + RANDCLICK,"RANDDELAYMIN=" + RANDDELAYMIN,"RANDDELAYMAX=" + RANDDELAYMAX,
	"KEYER","_______",
	"AKMIN=" + AKMIN,"AKMAX=" + AKMAX,"AKHOTKEY=" + AKHOTKEY,"AKDROPDOWN=" + AKDROPDOWN,
	"","" };

	System::IO::File::WriteAllLines(PATH, fileLines);

}
void Profile::LoadProfile(System::String^ PATH)
{
	auto lines = System::IO::File::ReadAllLines(PATH);
	int counter = 0;
	while (lines[counter] != "")
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

		counter++;
	}
}
