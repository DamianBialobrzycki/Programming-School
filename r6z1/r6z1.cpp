#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	cout << "Podaj znak: ";
	char ch;
	cin >> ch;
	while (ch != '@')
	{
		
		if (islower(ch))
			cout << char(toupper(ch));
		else if (isupper(ch))
			cout << char(tolower(ch));
		else if (ispunct(ch))
			cout << char(ch);
		
		cin >> ch;
	}
	return 0;
}

