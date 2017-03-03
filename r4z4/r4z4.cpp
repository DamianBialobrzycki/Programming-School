#include <iostream>
#include <string>

using namespace std;

int main()
{
	string imie;
	string nazwisko;

	cout << "Podaj imie: ";
	getline(cin, imie);
	cout << "Podaj nazwisko: ";
	getline(cin, nazwisko);

	string napis = nazwisko + ", " + imie;

	cout << "Oto informacje zestawione w jeden napis: " << napis << endl;

    return 0;
}

