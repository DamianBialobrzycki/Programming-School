#include <iostream>

using namespace std;

const int Seasons = 4;

const char * Snames[] = { "Wiosna", "Lato", "Jesien", "Zima" };

struct expences
{
	double tab[Seasons];
};

void fill(const char * Snames[]);
void show(const char * Snames[], expences dane);

int main()
{
	
	fill(Snames);
	//show(Snames);
	return 0;
}

void fill(const char * Snames[])
{
	expences dane;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Podaj wydatki na okres >> " << Snames[i] << " <<: ";
		cin >> dane.tab[i];
	}
	show(Snames, dane);
}

void show(const char * Snames[], expences dane)
{
	double total = 0.0;
	cout << "\nWYDATKI\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << dane.tab[i] << '\n';
		total += dane.tab[i];
	}
	cout << "Lacznie wydatki roczne: " << total << " zl" << endl;
}

