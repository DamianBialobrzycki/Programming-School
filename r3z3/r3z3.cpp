#include <iostream>

using namespace std;

int main()
{
	float stopnie;
	float minuty;
	float sekundy;

	cout << "Podaj dlugosc w stopniach, minutach i sekundach:" << endl;
	cout << "Najpierw podaj stopnie: ";
	cin >> stopnie;
	cout << "Nastepnie podaj minuty stopnia luku: ";
	cin >> minuty;
	cout << "Na koniec podaj sekundy luku: ";
	cin >> sekundy;

	const int sec_min = 60;
	const int min_stop = 60;

	float minuty_i_sekundy = minuty + sekundy / sec_min;
	float stopnie_razem = stopnie + minuty_i_sekundy / min_stop;
	cout << stopnie << " stopni, " << minuty << " minut, " << sekundy << " sekund = " << stopnie_razem << " stopni." << endl;
	return 0;
}

