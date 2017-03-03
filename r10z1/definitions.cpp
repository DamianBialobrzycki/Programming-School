#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Header.h"

using namespace std;

int licznik = 0;
bool koniectabeli = false;
void Rachunek::set()
{
	string acc_name;
	int acc_number;
	double acc_value;
	srand(time(NULL));

	system("cls");
	if (koniectabeli == true)
		cout << "Limit kont osiagniety!" << endl;
	else
	{
		cout << "Podaj nazwisko: ";
		cin >> acc_name;
		acc_number = (rand() % 9001) + 1000;
		acc_value = 0.00;

		accounts[licznik] = acc_name;
		numbers[licznik] = acc_number;
		values[licznik] = acc_value;
	}

	if (licznik == (SIZE - 1))
	{
		koniectabeli = true;
		licznik++;
	}
		

	if (koniectabeli == false)
		licznik++;
}

void Rachunek::show()
{
	system("cls");
	for (int i = 0; i < licznik; i++)
	{
		cout << "Nr konta: " << numbers[i] << endl;
		cout << "Nazwisko: " << accounts[i] << endl;
		cout << "Stan konta: " << values[i] << endl << endl;
	}
}
void Rachunek::show(int number)
{
	int i;
	bool accept = false;
	for (i = 0; i < SIZE; i++)
	{
		if (number == numbers[i])
		{
			accept = true;
			break;
		}
	}
	if (accept == true)
	{
		cout << "Nr konta: " << numbers[i] << endl;
		cout << "Nazwisko: " << accounts[i] << endl;
		cout << "Stan konta: " << values[i] << endl << endl;
	}
	else
	{
		system("cls");
		cout << "Taki numer konta nie istnieje w naszej bazie." << endl;
		cout << "Powrot do MENU..." << endl << endl << endl;
	}
}
void Rachunek::deposit(int number)
{
	system("cls");
	int i;
	double value;
	bool accept = false;
	for (i = 0; i < SIZE; i++)
	{
		if (number == numbers[i])
		{
			accept = true;
			break;
		}
	}
	if (accept == true)
	{
		cout << "Podaj kwote: ";
		cin >> value;
		if (value <= 0)
			cout << "NIE MOZNA WPLACAC WARTOSCI UJEMNYCH LUB ROWNYCH 0!" << endl << endl << endl;
		else
		{
			values[i] += value;
			cout << "Kwote " << value << " zl wplacono na rachunkek bankowy." << endl << endl << endl;
		}
	}
	else
	{
		cout << "Taki numer konta nie istnieje w naszej bazie." << endl;
		cout << "Powrot do MENU..." << endl << endl << endl;
	}
}
void Rachunek::withdraw(int number)
{
	system("cls");
	int i;
	double value;
	bool accept = false;
	for (i = 0; i < SIZE; i++)
	{
		if (number == numbers[i])
		{
			accept = true;
			break;
		}
	}
	if (accept == true)
	{
		cout << "Podaj kwote: ";
		cin >> value;
		if(value <= 0)
			cout << "NIE MOZNA WYPLACAC WARTOSCI UJEMNYCH LUB ROWNYCH 0!" << endl << endl << endl;
		else if(values[i] < value)
			cout << "NIE MOZNA WYPLACIC KWOTY WYZSZEJ OD ZDEPOZYTOWANEJ!" << endl << endl << endl;
		else
		{
			values[i] -= value;
			cout << "Kwote " << value << " zl wyplacono z rachunku bankowego." << endl << endl << endl;
		}
	}
	else
	{
		cout << "Taki numer konta nie istnieje w naszej bazie." << endl;
		cout << "Powrot do MENU..." << endl << endl << endl;
	}
}