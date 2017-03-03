#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>


using namespace std;

struct sponsorzy
{
	string nazwisko;
	double kwota;
};

int main()
{

	ifstream plik;
	plik.open("sponsorzy.txt");
	string dotacja;
	string donator;
	bool nazw = true;
	bool kwo = false;
	string iloscstr;
	int ilosc;
	getline(plik, iloscstr);
	ilosc = atoi(iloscstr.c_str());
	

	sponsorzy *sponsor = new sponsorzy[ilosc]; // deklaracja dynamicznej struktury

	for (int i = 0; i < ilosc; i++)
	{
		
		getline(plik, donator);
		sponsor[i].nazwisko = donator;
		getline(plik, dotacja);
		sponsor[i].kwota = atoi(dotacja.c_str());
		//cout << sponsor[i].nazwisko << endl;
		//cout << sponsor[i].kwota << " zl " << endl;
	}

	int brak10k = 0;
	//Wyswietlenie napisu jesli ktos wplacil >= 10 000
	cout << "Nasi Wspaniali Sponsorzy:" << endl;
	for (int i = 0; i < ilosc; i++)
	{
		if (sponsor[i].kwota < 10000)
		{
			brak10k++;
		}
	}
	if (brak10k == ilosc)
		cout << "brak" << endl << endl;

	// Sponsorzy ktorzy wplacili >= 10 000
	for (int i = 0; i < ilosc; i++)
	{
		if (sponsor[i].kwota >= 10000)
		{
			cout << sponsor[i].nazwisko << endl;
			cout << "Wplacil: " << sponsor[i].kwota << endl;
		}
	}
	int brak = 0;
	//Wyswietlenie napisu jesli ktos wplacil < 10 000
	cout << "\nNasi  Sponsorzy:" << endl;
	for (int i = 0; i < ilosc; i++)
	{
		if (sponsor[i].kwota >= 10000)
		{
			brak++;
		}
	}
	if (brak == ilosc)
		cout << "brak" << endl << endl;

	// Sponsorzy ktorzy wplacili < 10 000
	for (int i = 0; i < ilosc; i++)
	{
		if (sponsor[i].kwota < 10000)
		{
			cout << sponsor[i].nazwisko << endl;
			cout << "Wplacil: " << sponsor[i].kwota << endl;
		}
	}
	plik.close();
	delete[] sponsor;
	return 0;
}


