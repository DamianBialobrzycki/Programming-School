#include <iostream>
#include <string>

using namespace std;

struct pudlo
{
	char producent[40];
	float wysokosc;
	float szerokosc;
	float dlugosc;
	float objetosc;
};
void wyswietl(pudlo p1);
void oblicz(pudlo * ps);
int main()
{

	pudlo * ps = new pudlo;
	pudlo p1 =
	{
		"Producent numero uno",
		2.00,
		2.00,
		2.00,
		8.00
	};
	wyswietl(p1);
	oblicz(ps);
	delete ps;
    return 0;
}
void wyswietl(pudlo p1)
{
	cout << "Producent: " << p1.producent << endl;
	cout << "Wysokosc: " << p1.wysokosc << endl;
	cout << "Szerokosc: " << p1.szerokosc << endl;
	cout << "Dlugosc: " << p1.dlugosc << endl;
	cout << "Objetosc: " << p1.objetosc << endl << endl;
}
void oblicz(pudlo * ps)
{
	
	float objetosc;
	cout << "Podaj producenta: ";
	cin >> ps->producent;
	cout << "Podaj wysokosc: ";
	cin >> ps->wysokosc;
	cout << "Podaj szerokosc: ";
	cin >> ps->szerokosc;
	cout << "Podaj dlugosc: ";
	cin >> ps->dlugosc;
	string producent = ps->producent;
	float wysokosc = ps->wysokosc;
	float szerokosc = ps->szerokosc;
	float dlugosc = ps->dlugosc;

	objetosc = wysokosc * szerokosc * dlugosc;

	ps->objetosc = objetosc;
	cout << "Objetosc wynosi: " << ps->objetosc << endl;
	
}

