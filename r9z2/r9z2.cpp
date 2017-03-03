#include <iostream>
#include <string>

using namespace std;

const int ArSize = 10;

void strcount(string str);

int main()
{
	string input;
	char next;

	cout << "Wprowadz wiersz:" << endl;
	cin >> input;
	while (cin)
	{
		if (input[0] == 'q')
			break;
		strcount(input);
		cout << "wprowadz nastepny wiersz (q konczy wprowadzanie):" << endl;
		cin >> input;
		
	}
	cout << "Koniec" << endl;
    return 0;
}

void strcount(string str)
{
	static int total = 0;		// statyczna zmienna lokalna
	int count = 0;

	cout << "\"" << str << "\" zawiera ";
	int i = 0;
	while (str[i++])				// przejdz na koniec ciagu
		count++;
	total += count;
	cout << count << " znakow" << endl;
	cout << "Lacznie " << total << " znakow" << endl;
}