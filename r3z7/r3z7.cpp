#include <iostream>

using namespace std;

int main()
{
	float litry;
	const float km = 100;

	cout << "Podaj ile litrow na 100 km zuzyto: ";
	cin >> litry;

	float galony = litry / 3.875;
	float mile_na_galon = 62.14 / galony;

	cout << "Mil na galon: " << mile_na_galon << endl;

    return 0;
}

