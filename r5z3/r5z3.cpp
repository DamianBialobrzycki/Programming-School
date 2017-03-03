#include <iostream>

using namespace std;

int main()
{
	
	cout << "Podaj liczbe: ";
	int liczba;
	
	int suma = 0;
	do
	{
		cin >> liczba;
		suma = suma + liczba;
		cout << "Suma = " << suma << endl;
		cout << "Podaj liczbe: ";
		
	} while (liczba != 0);
    return 0;
}

