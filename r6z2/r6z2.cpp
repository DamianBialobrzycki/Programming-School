#include <iostream>

using namespace std;

int main()
{
	
	const double ilosc = 10.0;
	double datek[10];

	cout << "Oto 10 datkow, ktore nasi hojni sponsorzy wp³acili na konto firmy.\n";
	int licznik = 0;
	double suma = 0.0;

	for (int i = 0; i < ilosc; i++)
	{
		cin >> datek[i];
		
		if (cin.fail())
			break;
		
		licznik++;
		suma += datek[i];
	}
	double srednia = suma / licznik;
	cout << "Srednia datkow to " << srednia << ".\n";
	cout << endl;
	cout << "Datki, ktore sa wieksze od sredniej: \n";
	for (int i = 0; i < ilosc; i++)
	{
		if (datek[i] > srednia)
			cout << datek[i] << ", ";
	}
	cout << endl;
	return 0;
}

