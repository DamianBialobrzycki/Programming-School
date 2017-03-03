#include <iostream>

using namespace std;
int silniaLiczby = 1;
int silnia(int liczba);
int main()
{
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	while (cin.good())
	{
		cout << "Silnia z tej liczby to: " << silnia(liczba) << endl;
		silniaLiczby = 1;
		cout << "Podaj liczbe: ";
		cin >> liczba;
	}
	cout << "Nie podales liczby calkowitej. Zamkniecie programu" << endl;
    return 0;
}
int silnia(int liczba)
{
	
	if (liczba == 1 || liczba == 0)
		return liczba;
	silniaLiczby *= liczba;
	silnia(liczba-1);
	return silniaLiczby;
}

