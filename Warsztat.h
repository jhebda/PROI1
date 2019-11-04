#include "header.h"
#include "Samochod.h"
#include "Czesci.h"
#include "Pracownik.h"


class Warsztat
{
public:
	void dodaj_samochod();
	void napraw_samochod(int);
	void oddaj_samochod(int);
	void wypisz_auta();
	void zatrudnij_pracownika(int);
	void kup_czesci(int, enum modol);
	void wypisz_saldo();
	int ile_pracownikow();
	Samochod* znajdz_samochod(int);//zwraca adres samochodu, 0 jesli samochod nie istnieje

	Warsztat()
	{
		saldo = 1000;
		samochod = 0;
	}

private:
	int saldo;
	Pracownik pracownik;
	Czesci czesci;
	Samochod* samochod;
};