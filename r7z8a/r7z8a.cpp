#include <iostream>

using namespace std;

const int Seasons = 4;

const char * Snames[] = { "Wiosna", "Lato", "Jesien", "Zima" };

void fill(const char * Snames[], double expenses[]);
void show(const char * Snames[], double expenses[]);

int main()
{
	double expenses[4];
	fill(Snames, expenses);
	show(Snames, expenses);
	return 0;
}

void fill(const char * Snames[], double expenses[])
{
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Podaj wydatki na okres >> " << Snames[i] << " <<: ";
		cin >> expenses[i];
	}
}

void show(const char * Snames[], double expenses[])
{
	double total = 0.0;
	cout << "\nWYDATKI\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << expenses[i] << '\n';
		total += expenses[i];
	}
	cout << "Lacznie wydatki roczne: " << total << " zl" << endl;
}

