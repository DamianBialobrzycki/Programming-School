#include <iostream>
#include <string>

using namespace std;

struct car
{
	string marka;
	int rok;
};
int main()
{
	int ilosc;

	cout << "Ile samochodow chcesz skatalogowac? ";
	(cin >> ilosc).get();

	car *TablicaAut = new car[ilosc];

	for (int i = 0; i < ilosc; i++)
	{
		cout << "Samochod #" << (i + 1) << ":" << endl;
		cout << "Prosze podac marke: ";
		getline(cin, TablicaAut[i].marka);
		cout << "Rok produkcji: ";
		(cin >> TablicaAut[i].rok).get();
	}

	cout << "\nOto Twoja kolekcja:\n";

	for (int i = 0; i < ilosc; i++)
		cout << TablicaAut[i].rok << " " << TablicaAut[i].marka << endl;

	delete[] TablicaAut;
    return 0;
}

