#include <iostream>
#include <cstdlib>
#include "Header.h"

using namespace std;


int main()
{
	Rachunek client;
	int wybor;
	int number;
	double value;
	do
	{
		cout << "MENU:" << endl << endl;
		cout << "1. Dodaj nowe konto." << endl;
		cout << "2. Wplac srodki." << endl;
		cout << "3. Wyplac srodki." << endl;
		cout << "4. Wyswietl wszystkie rachunki." << endl;
		cout << "5. Wyswietl saldo konta." << endl;
		cout << "6. Wyjdz." << endl;

		cin >> wybor;

		switch (wybor)
		{
			case 1:
				client.set();
				break;
			case 2:
				cout << "Podaj numer konta: ";
				cin >> number;
				client.deposit(number);
				break;
			case 3:
				cout << "Podaj numer konta: ";
				cin >> number;
				client.withdraw(number);
				break;
			case 4:
				client.show();
				break;
			case 5:
				cout << "Podaj numer konta: ";
				cin >> number;
				client.show(number);
				break;
			case 6:
				break;
			default:
				system("cls");
				cout << "WPROWADZONO ZLA WARTOSC!!!" << endl << endl << endl;
		}
	} while (wybor != 6);
	
	cout << "Do widzenia!" << endl;
	cin.get();
	cin.get();
	return 0;
}