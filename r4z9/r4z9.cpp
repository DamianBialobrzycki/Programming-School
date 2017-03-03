#include <iostream>
#include <string>

using namespace std;

struct Batonik {
	string marka;
	double waga;
	int kalorie;
};

int main()
{
	Batonik * bat = new Batonik[3];

	bat[0].marka = "Mars"; bat[0].waga = 10.0; bat[0].kalorie = 43;
	bat[1].marka = "Snickers"; bat[1].waga = 14.0; bat[1].kalorie = 47;
	bat[2].marka = "Twix"; bat[2].waga = 20.0; bat[2].kalorie = 87;

	cout << "Marka: " << bat[0].marka << endl;
	cout << "Waga: " << bat[0].waga << endl;
	cout << "Kalorie: " << bat[0].kalorie << endl << endl;

	cout << "Marka: " << bat[1].marka << endl;
	cout << "Waga: " << bat[1].waga << endl;
	cout << "Kalorie: " << bat[1].kalorie << endl << endl;

	cout << "Marka: " << bat[2].marka << endl;
	cout << "Waga: " << bat[2].waga << endl;
	cout << "Kalorie: " << bat[2].kalorie << endl << endl;

	delete[] bat;

    return 0;
}

