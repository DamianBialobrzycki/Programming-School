#include <iostream>

using namespace std;

int main()
{
	long long swiat;
	long long polska;

	cout << "Podaj liczbe ludnosci swiata: ";
	cin >> swiat;

	cout << "Podaj liczbe ludnosci Polski: ";
	cin >> polska;

	float procent = ( (float) polska * 100) / (float) swiat;

	cout << "Populacja Polski stanowi " << procent << "% populacji swiata." << endl;

    return 0;
}

