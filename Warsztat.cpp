#include <iostream>
#include "Warsztat.h"

using namespace std;

void Warsztat::dodaj_samochod()
{
	if (samochod == 0)
	{
		samochod = new Samochod;
		cout << "samochod dodano" << endl;
	}
	else
	{
		samochod->dodaj();
	}
}

void Warsztat::kup_czesci(int ile, enum modol jaka)
{
	if (saldo < ile * (jaka + 1))
	{
		cout << "brakuje " << ile * (jaka + 1) - saldo << "dolarow" << endl;
	}
	else
	{
		czesci.dodaj_czesci(ile, jaka);
		saldo -= ile * (jaka + 1);
	}
}

void Warsztat::wypisz_auta()
{
	if (samochod == 0)
		cout << endl << "brak aut w garazu" << endl;
	else
		samochod->wypisz();
}

void Warsztat::napraw_samochod(int numer)
{
	if (samochod == 0)//czy garaz jest pusty
		cout << "brak aut w garazu" << endl;
	else
	{
		Samochod* wsk = 0;
		wsk = znajdz_samochod(numer);//szuka samochodu w garazu
		if (wsk == 0)
			cout << "brak auta o danym numerze w garazu" << endl;
		else
		{
			int brak = 0;
			int ile_uszk = 0;
			for (int i = 0; i < 5; i++)//sprawdza dostepne czesci
			{
				if (wsk->ile_uszkodzen((modol)i) > czesci.ile_czesci((modol)i))
				{
					cout << "brakuje " << wsk->ile_uszkodzen((modol)i) - czesci.ile_czesci((modol)i) << " czesci <"; nazwa_modulu(i); cout << "> w magazynie" << endl;
					brak = 1;
				}
				ile_uszk += wsk->ile_uszkodzen((modol)i);
			}
			cout << endl;
			if (brak == 0)//naprawia jesli czesci dostepne
			{
				if (ile_uszk <= ile_pracownikow())
				{

					for (int i = 0; i < 5; i++)
					{
						czesci.usun_czesci(wsk->ile_uszkodzen((modol)i), (modol)i);
						saldo += wsk->ile_uszkodzen((modol)i) * 10;
					}
					wsk->napraw(numer);
					cout << "samochod naprawiony" << endl;
					oddaj_samochod(numer);
				}
				else
					cout << "brakuje " << ile_uszk - ile_pracownikow() << " pracowikow" << endl;
			}
		}
	}

}

Samochod* Warsztat::znajdz_samochod(int numer)
{
	if (samochod->podaj_numer() == numer)
		return samochod;
	else
		return samochod->znajdz_samochod(numer);
}

void Warsztat::oddaj_samochod(int numer)
{
	if (samochod == 0)//czy garaz jest pusty
		cout << "brak aut w garazu" << endl;
	else
	{
		Samochod* wsk = 0;
		wsk = znajdz_samochod(numer);//szuka samochodu w garazu
		if (wsk == 0)
			cout << "brak auta o danym numerze w garazu" << endl;
		else
		{
			if (samochod == wsk)
			{
				samochod = wsk->nastepny_samochod();
				delete wsk;
				cout << "samochod oddano" << endl;
			}
			else
				samochod->oddaj(wsk);
		}
	}
}

void Warsztat::wypisz_saldo()
{
	cout << "Saldo: " << saldo << "$" << endl;
}

void Warsztat::zatrudnij_pracownika(int ile)
{
	pracownik += ile;
}

int Warsztat::ile_pracownikow()
{
	return pracownik.ile_pracownikow();
}