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
	Batonik snack =
	{
		"Mocha Munch",
		2.3,
		350
	};

	cout << "Marka: " << snack.marka  << endl;
	cout << "Waga: " << snack.waga << endl;
	cout << "Kalorie: " << snack.kalorie << endl;
    return 0;
}

