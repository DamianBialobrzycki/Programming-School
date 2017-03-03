#include <iostream>
#include <string>
#include <cctype>

using namespace std;

const int ArSize = 20;

void ZmianaZnakow(string napis);

int main()
{
	string napis;
	cout << "Podaj lancuch (q, aby skonczyc): ";
	getline(cin, napis);

	while (napis != "q")
	{
		ZmianaZnakow(napis);

		cout << "Podaj lancuch (q, aby skonczyc): ";
		getline(cin, napis);
	}

	cout << "Do widzenia" << endl;
    return 0;
}

void ZmianaZnakow(string napis)
{
	// zmiana znaku z malego na duzy (wymagana konwersja na char) bo funkcja zwraca kod ASCII
	for (int i = 0; i < napis.length(); i++)
		cout << char(toupper(napis[i]));
	cout << endl;
}

