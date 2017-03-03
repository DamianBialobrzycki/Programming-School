#include <iostream>
#include <algorithm>

using namespace std;

const int Max = 5;

int fill_array(double t[], int limit);
void show_array(double t[], int n);
void reverse_array(double t[], int n);

int main()
{
	double tab[Max];

	int size = fill_array(tab, Max);
	show_array(tab, size);
	reverse_array(tab, size);
	cout << "\nPo odwroceniu:" << endl;
	show_array(tab, size);
    return 0;
}
int fill_array(double t[], int limit)
{
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "Podaj wartosc nr " << (i + 1) << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bledne dane, wprowadzanie danych przerwane." << endl;
			break;
		}
		else if (temp < 0)
			break;
		t[i] = temp;
	}
	return i;
}
void show_array(double t[], int n)
{
	for (int i = 0;i < n; i++)
	{
		cout << "Wartosc " << (i + 1) << ": ";
		cout << t[i] << endl;
	}
}
void reverse_array(double t[], int n)
{
	reverse(t, t + n);
}

