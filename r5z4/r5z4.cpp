#include <iostream>  

int main()
{
	using namespace std;

	double Dafne = 0;
	double Cleo = 0;
	int lata = 1;

	Dafne = 100 + (0.10 * 100);
	Cleo = 100 + (0.05 * 100);

	while (Cleo < Dafne)
	{
		cout << "Rok " << lata << ", lokata Dafne = PLN " << Dafne << ", lokata Cleo = PLN " << Cleo << ".\n";
		Cleo = Cleo + (Cleo * 0.05);
		Dafne = Dafne + 10;
		lata = lata + 1;
	}

	cout << "\n\nRok przelamania - " << lata << endl;
	cout << "Koncowy bilans: Dafne: PLN " << Dafne << ", Cleo: PLN " << Cleo << ".\n";

	return 0;
}
