#include <iostream>

using namespace std;

void zegar(int godziny, int minuty)
{
	cout << "Czas: " << godziny << ":" << minuty << endl;
}

int main()
{
	int godziny;
	int minuty;

	cout << "Podaj liczbe godzin: ";
	cin >> godziny;
	cout << "Podaj liczbe minut: ";
	cin >> minuty;
	zegar(godziny, minuty);
    return 0;
}

