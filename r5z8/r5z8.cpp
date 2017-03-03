#include <iostream>

using namespace std;

int main()
{
	int licznik = 0;
	char word[80];
	char slowoKlucz[] = "gotowe";

	cout << "Podawaj slowa \(kiedy skonczysz, napisz \"gotowe\"\)" << endl;
	cin >> word;
	while (strcmp(word, slowoKlucz) != 0) //strcmp sprawdza czy dane lanuchy znakow sa rowne
	{
		//petla dziala dopoki sa rozne
		cin >> word;
		licznik++;
	}
	cout << "\nPodano " << licznik << " slow(a)." << endl;
    return 0;
}

