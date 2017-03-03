#include <iostream>
#include <string>

using namespace std;

int main()
{
	string miesiac[12] = { "Styczen", "Luty", "Marzec", "Kwiecien", "Maj", "Czerwiec", "Lipiec",
		"Sierpien", "Wrzesien", "Pazdziernik", "Listopad", "Grudzien" };

	int sprzedaz[3][12];
	int rok_suma = 0;
	int calosc_suma = 0;

	cout << "Podaj miesieczna sprzedaz." << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "\nRok " << (i + 1) << endl;
		for (int j = 0; j < 12; j++)
		{
			cout << miesiac[j] << ": ";
			cin >> sprzedaz[i][j];
		}
	}

	cout << "\nWprowadzone liczby: \n";

	for (int y = 0; y < 3; y++)
	{
		rok_suma = 0;
		cout << "\nRok " << (y + 1) << ". \n";
		for (int i = 0; i < 12; i++)
		{
			cout << miesiac[i] << ": " << sprzedaz[y][i] << endl;
			calosc_suma += sprzedaz[y][i];
			rok_suma += sprzedaz[y][i]; // x+=y == x=x+y  
		}

		cout << "Sprzedaz w roku: PLN " << rok_suma << endl;
	}

	cout << "\nSprzedano lacznie - PLN " << calosc_suma << endl;
    return 0;
}

