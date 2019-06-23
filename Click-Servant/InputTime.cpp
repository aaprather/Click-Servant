#include "InputTime.h"


InputTime::InputTime(System::String^ h, System::String^ m, System::String^ s)
{
	Hours = parseText(h);
	Minutes = parseText(m);
	Seconds = parseText(s);
}

int InputTime::parseText(System::String^ text)
{
	int ret;
	try
	{
		ret = System::Convert::ToInt32(text);
	}
	catch (...)
	{
		ret = 0;
	}

	return ret;
}
