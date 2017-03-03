#include <iostream>  
#include <cstring>  

int main()
{
	using namespace std;

	const int Size = 20;

	cout << "Podaj imie: ";
	char name[Size];
	cin.getline(name, Size);

	cout << "Podaj nazwisko: ";
	char surname[Size];
	cin.getline(surname, Size);

	char calosc[2 * Size - 1];
	strcpy_s(calosc, surname);
	strcat_s(calosc, ", ");
	strcat_s(calosc, name);

	cout << "Oto informacje zestawione w jeden napis: " << calosc << endl;

	return 0;
}
