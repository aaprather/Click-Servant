#include "Key.h"



Key::Key(int i)
{
	parseKey(i);
}
void Key::parseKey(int ii)
{
	switch(ii)
	{
	case -1:
		KeyToString = "Unselected";
		break;
	case 0: //ESCAPE KEY
		KeyToString = "{ESC}";
		break;
	case 1: //BACKSPACE KEY
		KeyToString = "{BACKSPACE}";
		break;
	case 2: //END KEY
		KeyToString = "{END}";
		break;
	case 3: //HOME KEY
		KeyToString = "{HOME}";
		break;
	case 4: 
		KeyToString = "{F1}";
		break;
	case 5: 
		KeyToString = "{F2}";
		break;
	case 6: 
		KeyToString = "{F3}";
		break;
	case 7: 
		KeyToString = "{F4}";
		break;
	case 8: 
		KeyToString = "{F5}";
		break;
	case 9: 
		KeyToString = "{F6}";
		break;
	case 10: 
		KeyToString = "{F7}";
		break;
	case 11: 
		KeyToString = "{F8}";
		break;
	case 12: 
		KeyToString = "{F9}";
		break;
	case 13: 
		KeyToString = "{F10}";
		break;
	case 14: 
		KeyToString = "{F11}";
		break;
	case 15: 
		KeyToString = "{F12}";
		break;
	case 16: 
		KeyToString = "{TAB}";
		break;
	case 17: //UP ARROW KEY
		KeyToString = "{UP}";
		break;
	case 18: //DOWN ARROW KEY
		KeyToString = "{DOWN}";
		break;
	case 19: //LEFT ARROW KEY
		KeyToString = "{LEFT}";
		break;
	case 20: //RIGHT ARROW KEY
		KeyToString = "{RIGHT}";
		break;
	default:
		break;
	}
}
