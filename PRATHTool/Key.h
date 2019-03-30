#pragma once
ref class Key
{
public:
	Key(int i);
	System::String^ KeyToString;
private:
	void parseKey(int i);
};

