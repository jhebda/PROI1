#include <iostream>
#include <conio.h>
#include "Warsztat.h"

using namespace std;

int main()
{

	Warsztat mojWarsztat;

	mojWarsztat.wypisz_auta();
	_getch();
	mojWarsztat.dodaj_samochod();
	mojWarsztat.wypisz_auta();
	mojWarsztat.napraw_samochod(787);
	mojWarsztat.kup_czesci(10, silnik);
	mojWarsztat.kup_czesci(10, sprzeglo);
	mojWarsztat.kup_czesci(10, hamulec);
	mojWarsztat.kup_czesci(10, opony);
	mojWarsztat.kup_czesci(10, olej);
	mojWarsztat.zatrudnij_pracownika(10);
	mojWarsztat.napraw_samochod(787);
	mojWarsztat.wypisz_auta();
	mojWarsztat.napraw_samochod(787);
	mojWarsztat.dodaj_samochod();
	mojWarsztat.dodaj_samochod();
	mojWarsztat.dodaj_samochod();
	mojWarsztat.wypisz_auta();
	mojWarsztat.napraw_samochod(787 * 3);
	mojWarsztat.wypisz_auta();


	return 0;
}