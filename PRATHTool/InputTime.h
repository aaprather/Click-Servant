#pragma once
#include <string>

ref class InputTime
{
public:
	InputTime(std::string h, std::string m, std::string s);
	int Hours;
	int Minutes;
	int Seconds;
private:
	int parseText(std::string text);
};

