#include <iostream>
#include <string>
using namespace std;

int main()
{
	string slowa;
	string slowoKluczowe = "gotowe";
	int licznik = 0;

	cout << "Podawaj slowa, kiedy skonczysz, napisz gotowe" << endl;
	cin >> slowa;
	while (slowa != slowoKluczowe)
	{
		cin >> slowa;
		licznik++;
	}
	cout << "\nPodano " << licznik << " slow(a)." << endl;

    return 0;
}

