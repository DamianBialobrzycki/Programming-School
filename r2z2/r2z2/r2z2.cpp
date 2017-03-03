#include <iostream>

using namespace std;

int main()
{
	double mile;
	double metry;

	cout << "Podaj odleglosc w milach morskich:" << endl;
	cin >> mile;
	metry = mile * 1852;
	cout << "Jest to " << metry << " metrow." << endl;
    return 0;
}

