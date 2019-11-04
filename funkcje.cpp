#include "header.h"

void nazwa_modulu(int numer)
{
	switch (numer)
	{
	case 0:
		cout << "silnik";
		break;
	case 1:
		cout << "sprzeglo";
		break;
	case 2:
		cout << "hamulec";
		break;
	case 3:
		cout << "opony";
		break;
	case 4:
		cout << "olej";
		break;
	default:
		break;
	}
}