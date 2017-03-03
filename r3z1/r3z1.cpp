#include <iostream>

using namespace std;

int main()
{
	int cm;
	cout << "Podaj swoj wzrost w cm: ";
	cin >> cm;

	const float cm_cal = 2.54;
	const float cm_stopa = 30.48;

	float cal = cm / cm_cal;
	float stopa = cm / cm_stopa;

	cout << "Twoj wzrost wynosi " << cal << " cali." << endl;
	cout << "Twoj wzrost wynosi " << stopa << " stop." << endl;
	
	return 0;
}

