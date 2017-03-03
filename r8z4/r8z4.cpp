#include <iostream>
#include <cstring> // dla strlen(), strcpy()

using namespace std;

struct stringy
{
	char * str; // wskazuje lanuch
	int ct; // dlugosc lanucha (bez \0')
};

// prototypy set(), show() i show()
void set(stringy & beany, char * testing);
void show(stringy & beany, int ilosc = 1);
void show(char * testing, int ilosc = 1);

int main()
{
	stringy beany;
	char testing[] = "Rzeczywistosc to juz nie to, co kiedys.";

	set(beany, testing); // pierwszy parametr jako referencja
		// alokacja pamieci na wynik sprawdzania,
		// ustawienie pola str struktury beany tak, by wskazywala nowy blok;
		// kopiowanie testing do nowego bloku,
		// ustawienie pola ct zmiennej beany
	show(beany); // pokazuje napis z pola raz
	show(beany, 2); // pokazuje napis z pola dwukrotnie
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Gotowe!");

    return 0;
}
void set(stringy & beany, char * testing)
{
	// alokacja pamieci dla lanucha pod zmienna w strukturze
	beany.str = new char[strlen(testing) + 1];
	// skopiowanie zawartosci testing do str
	strcpy(beany.str, testing);
	// dlugosc beany wpisana do ct
	beany.ct = strlen(beany.str);
}
void show(stringy & beany, int ilosc)
{
	// wyswietlenie okreslona ilosc razy zawartosci beany.str - domyslnie raz
	for (int i = 0; i < ilosc; i++)
		cout << beany.str << endl;
}
void show(char * testing, int ilosc)
{
	// wyswietlenie okreslona ilosc razy zawartosci testing - domyslnie raz
	for (int i = 0; i < ilosc; i++)
		cout << testing << endl;
}

