#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
	array <double, 3> wynik;

	cout << "Wpisz pierwszy winik sprintu na 100 metrow: ";
	cin >> wynik[0];
	cout << "Wpisz drugi winik sprintu na 100 metrow: ";
	cin >> wynik[1];
	cout << "Wpisz trzeci winik sprintu na 100 metrow: ";
	cin >> wynik[2];

	float srednia = (wynik[0] + wynik[1] + wynik[2]) / 3;

	cout << "Srednia: " << srednia << endl;

    return 0;
}

