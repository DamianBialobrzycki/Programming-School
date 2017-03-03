#include <iostream>

using namespace std;

void show(char * str, bool repeat = false);

const int ArSize = 20;
int counter = 0;

int main()
{
	cout << "Podaj lancuch: ";
	char lancuch[ArSize];
	cin.getline(lancuch, ArSize);

	show(lancuch);
	show(lancuch);
	show(lancuch);
	show(lancuch);

	show(lancuch, true);

    return 0;
}
void show(char * str, bool repeat)
{
	if (repeat == false)
		cout << str << endl;
	else
	{
		cout << "\nPokazanie kilkukrotne:" << endl;
		for (int i = 0; i < counter; i++)
			cout << str << endl;
	}
	counter++;
}

