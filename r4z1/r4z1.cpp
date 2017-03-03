#include <iostream>


using namespace std;

int main()
{
	char imie[20];
	char nazwisko[20];
	int ocena;
	int wiek;

	cout << "Jak masz na imie? ";
	cin.getline(imie, 20);
	cout << "Jak sie nazywasz? ";
	cin.getline(nazwisko,20);
	cout << "Na jaka ocene zaslugujesz? ";
	cin >> ocena;
	cout << "Ile masz lat? ";
	cin >> wiek;

	ocena--;

	cout << "Nazwisko: " << nazwisko << ", " << imie << endl;
	cout << "Ocena: " << ocena << endl;
	cout << "Wiek: " << wiek << endl;

    return 0;
}

