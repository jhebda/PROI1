#include <iostream>
#include "header.h"

class Samochod
{
private:
	int numer_auta;
	int uszkodzenia[5];
	Samochod* nastepny;
public:	
	void dodaj();
	void napraw(int);
	void oddaj(Samochod*);
	void wypisz();
	int ile_uszkodzen(enum modol);
	int podaj_numer();
	Samochod* znajdz_samochod(int);
	Samochod* nastepny_samochod();

	void konstruktor();
	void dekonstruktor();
	Samochod()
	{
		konstruktor();
	}
	~Samochod()
	{
		dekonstruktor();
	}
};
