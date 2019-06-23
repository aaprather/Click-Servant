#pragma once

ref class InputTime
{
public:
	InputTime(System::String^ h, System::String^ m, System::String^ s);
	int Hours;
	int Minutes;
	int Seconds;
private:
	int parseText(System::String^ text);
};

