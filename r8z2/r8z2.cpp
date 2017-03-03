#include <iostream>
#include <string>
using namespace std;

const int ArSize = 20;

struct Batonik
{
	char * marka;
	double waga;
	int kalorie;
};

// funkcja z referencja do struktury batonik i 3 domyslnymi parametrami
void funkcja(Batonik & firmy, char * marka = "Millenium Munch", double waga = 2.85, int kalorie = 350);
// funkcja wyswietlajaca zawartosc struktury
void show(Batonik & firmy);

int main()
{
	Batonik firmy;
	char marka[ArSize];
	double waga;
	int kalorie;
	int ilosc;

	cout << "Podaj marke: ";
	cin.getline(marka, ArSize);
	cout << "Podaj wage: ";
	cin >> waga;
	cout << "Podaj kalorie: ";
	cin >> kalorie;


	funkcja(firmy, marka, waga, kalorie);
	show(firmy);
	cout << endl;

	funkcja(firmy, marka, waga);
	show(firmy);
	cout << endl;

	funkcja(firmy, marka);
	show(firmy);
	cout << endl;

	funkcja(firmy);
	show(firmy);
	cout << endl;

    return 0;
}
void funkcja(Batonik & firmy, char marka[ArSize], double waga, int kalorie)

{
	firmy.marka = marka;
	firmy.waga = waga;
	firmy.kalorie = kalorie;
}

void show(Batonik & firmy)
{
	cout << firmy.marka << endl;
	cout << firmy.waga << endl;
	cout << firmy.kalorie << endl;
}

