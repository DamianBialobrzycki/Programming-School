#include <iostream>
#include <string>

using namespace std;

int main()
{
	string miesiac[12] = { "Styczen", "Luty", "Marzec", "Kwiecen", "Maj", "Czerwiec", "Lipiec", "Sierpien", "Wrzesien", "Pazdziernik", "Listopad", "Grudzien" };

	int sprzedaz[12];
	int suma = 0;

	cout << "Podaj miesieczna sprzedaz:" << endl;

	for (int i = 0; i < 12; i++)
	{
		cout << miesiac[i] << ": ";
		cin >> sprzedaz[i];
	}
	cout << "\n\nWprowadzone liczby: \n";
	for (int i = 0; i < 12; i++)
	{
		suma += sprzedaz[i];
		cout << miesiac[i] << ": " << sprzedaz[i] << endl;
	}

	cout << "\nSprzedaz razem: " << suma << endl;
    return 0;
}

