#include <iostream>

using namespace std;

int main()
{
	int wiek;
	int miesiace;

	cout << "Podaj swoj wiek: ";
	cin >> wiek;
	miesiace = wiek * 12;
	cout << "Twoj wiek w miesiacach wynosi " << miesiace << "." << endl;
    return 0;
}

