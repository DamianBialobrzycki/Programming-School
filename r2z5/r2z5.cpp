#include <iostream>

using namespace std;

double przelicznik(double celsjusz)
{
	return 1.8 * celsjusz + 32.0;
}

int main()
{
	double celsjusz;
	double farhrenheit;

	cout << "Podaj temperature w stopniach Celsjusza: ";
	cin >> celsjusz;

	farhrenheit = przelicznik(celsjusz);

	cout << celsjusz << " stopni Celsjusza to " << farhrenheit << " stopni Farhrenheita." << endl;
    return 0;
}

