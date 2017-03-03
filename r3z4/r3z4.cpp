#include <iostream>

using namespace std;

int main()
{
	long sekundy;
	
	const int sek_min = 60;
	const int min_godz = 60;
	const int godz_dzien = 24;

	int minuty = 0;
	int godziny = 0;
	int dni = 0;

	

	cout << "Podaj liczbe sekund: ";
	cin >> sekundy;

	int sek = sekundy;
	
	dni = ((sek / sek_min) / min_godz) / godz_dzien;
	sek = sek - dni * 86400;

	godziny = (sek / sek_min) / min_godz;
	sek = sek - godziny * 3600;

	minuty = sek / sek_min;
	sek = sek - minuty * 60;
	
	cout << sekundy << " sekund = " << dni << " dni, " << godziny << " godzin, " << minuty << " minut, " << sek << " sekund." << endl;

    return 0;
}

