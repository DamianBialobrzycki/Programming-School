#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
	string firma;
	float srednica;
	float waga;
};

int main()
{
	Pizza * p = new Pizza;
	cout << "Podaj srednice pizzy: ";
	(cin >> p->srednica).get();

	cout << "Podaj producenta pizzy: ";
	(cin >> p->firma).get();

	cout << "Podaj wage pizzy: ";
	(cin >> p->waga).get();

	cout << endl << endl;
	cout << "Producent: " << p->firma << endl;
	cout << "Srednica: " << p->srednica << endl;
	cout << "Waga: " << p->waga << endl;

	delete p;

    return 0;
}

