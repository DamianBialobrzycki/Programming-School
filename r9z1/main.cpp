#include <iostream>
#include "golf.h"
#include <cstdlib>

using namespace std;

int main()
{
	golf g;
	char name[Len];
	int hc;
	cout << "Wprowadz imie i nazwisko gracza: ";
	cin.getline(name, Len);
	if (name[0] == NULL)
	{
		cout << "Wersja interaktywna:" << endl;
		setgolf(g);
	}
	else
	{
		cout << "Wprowadz handicap gracza: ";
		cin >> hc;
		
		setgolf(g, name, hc);
		showgolf(g);
	}
	system("pause");
	return 0;
}