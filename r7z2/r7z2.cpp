#include <iostream>

using namespace std;
const int Max = 10;

int wprowadzDane(double wynik[], int limit);
void wyswietlDane(const double wynik[], int rozmiar);
void obliczSrednia(double wynik[], int rozmiar);

int main()
{
	double wynik[Max];

	int rozmiar = wprowadzDane(wynik, Max);
	wyswietlDane(wynik, rozmiar);
	obliczSrednia(wynik, rozmiar);
    return 0;
}
int wprowadzDane(double wynik[], int limit)
{
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "Podaj wynik nr " << (i + 1) << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bledne dane, wprowadzanie danych przerwane." << endl;
			break;
		}
		else if (temp < 0)
			break;
		wynik[i] = temp;
	}
	return i;
}
void wyswietlDane(const double wynik[], int rozmiar)
{
	cout << "Wyniki w kolejnosci: ";
	for (int i = 0; i < rozmiar; i++)
	{
		cout << wynik[i] << ", ";
	}
	cout << endl;
}
void obliczSrednia(double wynik[], int rozmiar)
{
	int i;
	double suma = 0;
	for (i = 0; i < rozmiar; i++)
		suma = suma + wynik[i];
	double srednia = suma / i;
	cout << "Srednia wynosi: " << srednia << endl;
}

