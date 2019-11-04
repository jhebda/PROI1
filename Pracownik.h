class Pracownik
{
public:
	void zatrudnij(int);
	void zwolnij(int);
	void operator+=(int);
	void operator-=(int);
	int ile_pracownikow();
	Pracownik()
	{
		std::cout << "zatrudniam pracownikow" << std::endl;
		ilosc=1;
	}
private:
	int ilosc;
};