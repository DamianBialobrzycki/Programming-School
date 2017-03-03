#include <iostream>

using namespace std;

template < typename T >
T max5(T tab[])
{
	T max = tab[0];
	for (int i = 1; i < 5; i++) {
		if (tab[i] > max) max = tab[i];

	}
	return max;
}
int main()
{
	int tabInt[] = { 5,3,8,9,2 };
	double tabDouble[] = { 12.03, 2.05, -0.28, 20.89, 1.2 };

	cout << "Szablon dla uzyty dla tablicy typu INT:" << endl;
	cout << "Najwieksza wartosc: " << max5(tabInt) << endl;
	cout << "Szablon dla uzyty dla tablicy typu DOUBLE:" << endl;
	cout << "Najwieksza wartosc: " << max5(tabDouble) << endl;
	
    return 0;
}



