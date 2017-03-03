#include <iostream>

using namespace std;

double przelicznik(double lata_swietlne)
{
	return lata_swietlne * 63240;
}

int main()
{
	double lata_swietlne;
	double j_astronomiczne;

	cout << "Podaj liczbe lat swietlnych: ";
	cin >> lata_swietlne;
	j_astronomiczne = przelicznik(lata_swietlne);
	cout << lata_swietlne << " lat swietlnych = " << j_astronomiczne << " jednostek astronomicznych." << endl;
    return 0;
}

