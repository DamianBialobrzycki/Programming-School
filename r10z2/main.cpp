#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	// TEN PROGRAM MA PEWIEN BLAD: POKAZUJE NA ODWROT IMIE I NAZWISKO, NIE ZMIENIONE
	// BO W KSIAZCE TAK PISZE xDD

	Person one;							// wywolanie konstruktora domyslnego (#1)
	Person two("Staszek");				// wywolanie #2, z jednym argumentem domyslnym
	Person three("Jacek", "Placek");	// wywolanie #2, bez argumentow domyslnych

	one.Show();
	cout << endl;
	one.FormalShow();

	two.Show();
	cout << endl;
	two.FormalShow();

	three.Show();
	cout << endl;
	three.FormalShow();

	cin.get();
	

	return 0;
}