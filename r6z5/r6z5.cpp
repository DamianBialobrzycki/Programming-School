#include <iostream>

using namespace std;

int main()
{
	int kwota;

	int p1 = 5000;
	int p2 = 10000;
	int p3 = 20000;
	int p4 = 35000;

	double dPodatek = 0.00;

	cout << "Podaj swoj dochod: ";
	cin.clear();
	cin >> kwota;
	int progi = 0;
	if (cin.good())
	{
		if (kwota <= 5000 && kwota >= 0)
		{
			dPodatek = 0.00;
			cout << "Do zaplacenia 0.00 twarpow" << endl;
		}
		else if (kwota > 5000)
		{
			if (kwota > 35000)
				progi = 4;
			else if (kwota > 15000)
				progi = 3;
			else if (kwota > 5000)
				progi = 2;

			cout << progi << endl;
			int dopodatku = kwota - 5000;
			for (int i = 2; i <= progi; i++)
			{
				if (i == 2)
				{
					if (progi == 2)
						dPodatek = dopodatku * 0.10;
					else
						dPodatek += p2 * 0.10;
					cout << dPodatek << endl;
				}
				else if (i == 3)
				{
					if (progi == 3)
						dPodatek = (dopodatku - 10000) * 0.15;
					else
						dPodatek += p3 * 0.15;
					cout << dPodatek << endl;
				}
				else if (i == 4)
				{
					if(progi == 4)
						dPodatek += (dopodatku - 30000) * 0.20;
					else
						dPodatek += p4 * 0.20;
					cout << dPodatek << endl;
				}
					
			}

			cout << "Do zaplacenia: " << dPodatek << " twarpow podatku." << endl;
		}
	}

    return 0;
}

