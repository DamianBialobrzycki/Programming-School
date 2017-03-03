#include <iostream>
#include <array>
#include <string>

using namespace std;

const int Seasons = 4;
const array<string, Seasons> Snames =
{ "Wiosna", "Lato", "Jesien", "Zima" };

void fill(array<double, Seasons> * pa);
void show(array<double, Seasons> da);

int main()
{
	array<double, 4> expenses;
	fill(&expenses);
	show(expenses);
	return 0;
}

void fill(array<double, Seasons> * pa)
{
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Podaj wydatki na okres >> " << Snames[i] << " <<: ";
		cin >> (*pa)[i];
	}
}

void show(array<double, Seasons> da)
{
	double total = 0.0;
	cout << "\nWYDATKI\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << da[i] << '\n';
		total += da[i];
	}
	cout << "Lacznie wydatki roczne: " << total << " zl" << endl;
}

