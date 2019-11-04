#include <iostream>
#include "Samochod.h"

using namespace std;

void Samochod::dodaj()
{
	if (nastepny == 0)
	{
		nastepny = new Samochod;
		 cout << "Samochod dodano" <<  endl;
	}
	else
	{
		nastepny->dodaj();
	}
}

void Samochod::wypisz()
{
	 cout <<endl<< "nr: " << numer_auta <<  endl;
	 for (int j = 0; j < 5; j++)
	 {
		 cout << "uszkodzenia "; nazwa_modulu(j); cout << " " << uszkodzenia[j] << endl;
	 }
	cout << endl;
	if (nastepny != 0)
		nastepny->wypisz();

}

void Samochod::konstruktor()
{
	cout << "dodaje samochod" << endl;
	static int lp = 1;
	nastepny = 0;
	numer_auta = 787 * lp++;
	for (int i = 0; i < 5; i++)
		uszkodzenia[i] =  rand() % 3;
}

void Samochod::dekonstruktor()
{
	cout << "usuwam samochod" << endl;
}

void Samochod::napraw(int numer)
{
	if (numer == numer_auta)
	{
		for (int i = 0; i < 5; i++)
			uszkodzenia[i] = 0;		
	}
	else if (nastepny == 0)
		cout << "brak aut o danym numerze" << endl;
	else
		nastepny->napraw(numer);
}

int Samochod::podaj_numer()
{
	return numer_auta;
}

Samochod* Samochod::znajdz_samochod(int numer)
{
	if (nastepny == 0)
		return 0;

	if (nastepny->podaj_numer() == numer)
		return nastepny;
	else
		return nastepny->znajdz_samochod(numer);
}

int Samochod::ile_uszkodzen(enum modol jaki)
{
	return uszkodzenia[jaki];
}

Samochod* Samochod::nastepny_samochod()
{
	return nastepny;
}

void Samochod::oddaj(Samochod* wsk)
{
	if (nastepny == wsk)
	{
		nastepny = nastepny->nastepny_samochod();
		delete wsk;
		cout << "samochod oddano" << endl;
	}
	else
		nastepny->oddaj(wsk);
}