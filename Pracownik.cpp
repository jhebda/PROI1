#include <iostream>
#include "Pracownik.h"

void Pracownik::zatrudnij(int ile)
{
	ilosc += ile;
}
void Pracownik::zwolnij(int ile)
{
	if (ile > ilosc)
		std::cout << "nie ma tylu pracownikow" << std::endl;
	else
		ilosc -= ile;
}

void Pracownik::operator+=(int ile)
{
	ilosc += ile;
}

void Pracownik::operator-=(int ile)
{
	zwolnij(ile);
}

int Pracownik::ile_pracownikow()
{
	return ilosc;
}
