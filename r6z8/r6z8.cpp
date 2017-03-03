#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream plik;
	plik.open("literki.txt");
	char ch;
	int licznik = 0;
	if (!plik.is_open())
	{
		cout << "Nie mozna odczytac pliku!" << endl;
	}
	else
	{
		plik >> ch;
		while (plik.good())
		{
			licznik++;
			plik >> ch;
		}
		if (plik.eof())
			cout << "Koniec pliku." << endl;
		else if (plik.fail())
			cout << "Wczytywanie danych przerwane - blad." << endl;
		else
			cout << "Wczytywanie danych przerwane - przyczyna nieznana." << endl;

		if (licznik == 0)
			cout << "Nie przetworzono zadnych danych." << endl;
		else
			cout << "Ilosc znakow: " << licznik << endl;
	}
	plik.close();
    return 0;
}

