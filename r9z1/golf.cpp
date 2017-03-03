// definicje odpowiadajace prototypom

#include <iostream>
#include "golf.h"

using namespace std;

void setgolf(golf & g, const char * name, int hc)
{
	for (int i = 0; i < Len; i++)
	{
		g.fullname[i] = name[i];
	}

	handicap(g, hc);
}

void setgolf(golf & g)
{
	char name[Len];
	int hc;

	cout << "Podaj imie i nazwisko: ";
	cin.getline(name, Len);

	cout << "Podaj wartosc handicapu: ";
	cin >> hc;

	for (int i = 0; i < Len; i++)
		g.fullname[i] = name[i];

	handicap(g, hc);
	cout << "Podales imie i nazwisko: " << g.fullname << endl;
	cout << "Podales handicap: " << g.handicap << endl;
}

void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf & g)
{
	cout << "Wprowadzono:" << endl;
	cout << "Imie i nazwisko: " << g.fullname << endl;
	cout << "Handicap: " << g.handicap << endl;
}