#include <iostream>
#include <string>

using namespace std;

struct sponsorzy
{
	string nazwisko;
	double kwota;
};

int main()
{
	

	cout << "Podaj liczbe wplacajacych: ";
	int ilosc;
	cin >> ilosc;
	sponsorzy *sponsor = new sponsorzy[ilosc]; // deklaracja dynamicznej struktury

	for (int i = 1; i <= ilosc; i++)
	{
		cout << "Podaj nazwisko " << i << ". osoby: " << endl;
		cin >> sponsor[i-1].nazwisko;							//odczyt nazwiska
		cout << "Podaj wplacona kwote przez " << i << ". osobe: " << endl;
		cin >> sponsor[i-1].kwota;										//odczyt kwoty
	}

	int brak10k = 0;
	//Wyswietlenie napisu jesli ktos wplacil >= 10 000
	cout << "\n\n\nNasi Wspaniali Sponsorzy:" << endl;
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

	delete [] sponsor;
    return 0;
}

