#include "InputTime.h"


InputTime::InputTime(std::string h, std::string m, std::string s)
{
	Hours = parseText(h);
	Minutes = parseText(m);
	Seconds = parseText(s);
}

int InputTime::parseText(std::string text)
{
	int ret;
	try
	{
		ret = std::stoi(text);
	}
	catch (...)
	{
		ret = 0;
	}

	return ret;
}
