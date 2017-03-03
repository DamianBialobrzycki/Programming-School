#include <iostream>

using namespace std;

int main()
{
	float kilometry;
	float benzyna;

	cout << "Podaj przebyte kilometry: ";
	cin >> kilometry;
	cout << "Podaj zuzyta benzyne: ";
	cin >> benzyna;

	float litr_na_sto = (benzyna * 100) / kilometry;

	cout << "Spaliles " << litr_na_sto << " litrow na 100 km." << endl;

    return 0;
}

