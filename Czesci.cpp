#include "Czesci.h"

void Czesci::dodaj_czesci(int ile, modol jaki)
{
	czesc[jaki] += ile;
}

void Czesci::usun_czesci(int ile, enum modol jaki)
{
	czesc[jaki] -= ile;
}

int Czesci::ile_czesci(enum modol jaka)
{
	return czesc[jaka];
}
