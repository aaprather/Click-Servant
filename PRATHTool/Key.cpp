#include "Key.h"



Key::Key(int i)
{
	parseKey(i);
}
void Key::parseKey(int ii)
{
	switch(ii)
	{
	case 0: //ESCAPE KEY
		KeyToString = "{ESC}";
		break;
	default:
		break;
	}
}
