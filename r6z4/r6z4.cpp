#include <iostream>

using namespace std;

const int strsize = 40;			//ilosc znakow mozliwych do wpisania

struct zpdw
{
	char imie[strsize];			// prawdziwe imie
	char stanowisko[strsize];	// stanowisko sluzbowe
	char pseudozpdw[strsize];	// pseudonim ZPDW
	int preferencje;			//0=imie, 1=stanowisko,2=pseudonim;
};

int main()
{
	const int czsize = 4;
	zpdw czlonkowie[czsize] =
	{
		{"Jan Kowalski", "Mlodszy programista", "Kowal", 2},
		{ "Piotr Nowak", "Starszy programista", "Endriu", 0 },
		{ "Jakub Kwiatkowski", "Szkoleniowiec analitykow", "Kwiatek", 1 },
		{ "Zofia Trzepiekuca", "Sekretarka", "Rodzynek", 0 }
	};

	cout << "Zakon Programistow Dobrej Woli" << endl;
	cout << "a. lista wg imion \tb.lista wg stanowisk" << endl;
	cout << "c. lista wg pseudonimow\td. lista wg preferencji" << endl;
	cout << "q. koniec" << endl;

	cout << "Wybierz jedna z opcji: ";
	char wybor;
	cin >> wybor;
	while (wybor != 'q')
	{
		
		switch (wybor)
		{
			case 'a':
				for (int i = 0; i < czsize; i++)
					cout << czlonkowie[i].imie << endl; // wyswietla imie i nazwisko
				break;
			case 'b':
				for (int i = 0; i < czsize; i++)
					cout << czlonkowie[i].stanowisko << endl; // wyswietla stanowisko
				break;
			case 'c':
				for (int i = 0; i < czsize; i++)
					cout << czlonkowie[i].pseudozpdw << endl; // wyswietla pseudonim
				break;
			case 'd':
				for (int i = 0; i < czsize; i++)
				{
					switch (czlonkowie[i].preferencje) // sprawdza preferencje danego czlonka
					{
						case 0:
							cout << czlonkowie[i].imie << endl; // jesli 0 to wyswietla imie i nazwisko
							break;
						case 1:
							cout << czlonkowie[i].stanowisko << endl; // jesli 1 to wyswietla stanowisko
							break;
						case 2:
							cout << czlonkowie[i].pseudozpdw << endl; // jesli 2 to wyswietla pseudonim
							break;
					}
				}
				break;
			default:
				break; //jezeli podano zla litere to wychodzi ze switcha i prosi ponownie o podanie
		}
		cout << "Wybierz jedna z opcji: ";
		cin >> wybor;
	} // koniec petli
	cout << "Do zobaczenia!" << endl;	//jesli wpisano q to petla sie nie zaczyna

    return 0;
}

