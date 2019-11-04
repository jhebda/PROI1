#include "header.h"

class Czesci
{
private:
	int czesc[5];
public:
	void dodaj_czesci(int, enum modol);
	void usun_czesci(int, enum modol);
	int ile_czesci(enum modol);
	Czesci()
	{
		for (int i = 0; i < 5; i++)
			czesc[i] = 0;
	}
};