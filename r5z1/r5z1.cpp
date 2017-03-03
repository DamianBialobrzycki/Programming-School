#include <iostream>

using namespace std;

int main()
{
	
	cout << "Podaj pierwsza liczbe: ";
	int a;
	cin >> a;

	cout << "Podaj druga liczbe: ";
	int b;
	cin >> b;

	int suma = 0;
	for (int i = a; i <= b; i++)
		suma += i;

	cout << "Suma = " << suma << endl;
    return 0;
}

