#include <iostream>
#include <string>

using namespace std;

struct Batonik
{
	string marka;
	float waga;
	int kalorie;
};

int main()
{
	Batonik bat[3] =
	{
		{ "Snickers", 2.1, 300 },
		{ "Mocha Munch", 2.3, 350 },
		{ "Mars", 3.2, 420 }
	};

	cout << "Marka: " << bat[0].marka << endl;
	cout << "Waga: " << bat[0].waga << endl;
	cout << "Kalorie: " << bat[0].kalorie << endl << endl;

	cout << "Marka: " << bat[1].marka << endl;
	cout << "Waga: " << bat[1].waga << endl;
	cout << "Kalorie: " << bat[1].kalorie << endl << endl;

	cout << "Marka: " << bat[2].marka << endl;
	cout << "Waga: " << bat[2].waga << endl;
	cout << "Kalorie: " << bat[2].kalorie << endl << endl;

    return 0;
}

