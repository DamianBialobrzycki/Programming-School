#include <iostream>
#include "Header.h"

using namespace std;


Person::Person(const string & ln, const char * fn)
{
	lname = ln;
	for (int i = 0; i < LIMIT; i++)
		fname[i] = fn[i];
}
void Person::Show() const
{
	cout << endl << "Zapis zwykly:" << endl;
	cout << "Imie: " << fname << endl;
	cout << "Nazwisko: " << lname << endl;
}

void Person::FormalShow() const
{
	cout << endl << "Zapis formalny:" << endl;
	cout << "Nazwisko: " << lname << endl;
	cout << "Imie: " << fname << endl;
	
}