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
	cout << "Podaj producenta pizzy: ";
	Pizza p;
	getline(cin, p.firma);

	cout << "Podaj srednice pizzy: ";
	cin >> p.srednica;

	cout << "Podaj wage pizzy: ";
	cin >> p.waga;

	cout << "\nProducent: " << p.firma << endl;
	cout << "Srednica: " << p.srednica << endl;
	cout << "Waga: " << p.waga << endl;

    return 0;
}

