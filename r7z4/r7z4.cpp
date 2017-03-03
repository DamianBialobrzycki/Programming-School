#include <iostream>

using namespace std;

long double szansa(unsigned il_numerow, unsigned il_skreslen, double dodatkowa);

int main()
{
	unsigned int il_numerow, il_skreslen;
	double dodatkowa;

	cout << "Podaj najwieksza liczbe, jaka mozna wybrac, oraz liczbe skreslen, oraz ilosc liczb z dodatkowej puli:" << endl;
	while ((cin >> il_numerow >> il_skreslen  >> dodatkowa ) && il_skreslen <= il_numerow)
	{
		cout << "Szansa wygranej to jeden do ";
		cout << szansa(il_numerow, il_skreslen, dodatkowa); //wyliczenie wyniku
		cout << endl;
		cout << "Nastepne dwie liczby (q, aby zakonczyc): " << endl;
	}
	cout << "Do widzenia!" << endl;
    return 0;
}
long double szansa(unsigned il_numerow, unsigned il_skreslen, double dodatkowa)
{
	long double wynik = 1.0;
	long double n = il_numerow;
	unsigned s = il_skreslen;
	unsigned d = dodatkowa;
	//long double dodateczek = 1 / dodatkowa;
	//cout << "\nDodateczek: "<< dodateczek << endl;
	cout << endl << il_numerow << endl;
	cout << il_skreslen << endl;
	cout << dodatkowa << endl;
	for (n = il_numerow,s = il_skreslen; s > 0; n--, s--)
		wynik = wynik * n / s;
	cout << "\nWynik: " << wynik << endl;
	wynik = wynik / dodatkowa;
	return wynik;
}
