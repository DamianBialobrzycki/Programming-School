#include <iostream>

using namespace std;

int main()
{
	int wiersze = 0;
	int denominator = 1;

	cout << "Podaj liczbe wierszy: ";
	(cin >> wiersze).get();

	for (int i = 0; i < wiersze; i++)
	{
		for (int i = 0; i < (wiersze - denominator); i++)
			cout << ".";
		for (int i = 0; i < denominator; i++)
			cout << "*";
		cout << endl;
		denominator++;
	}

	return 0;
}

