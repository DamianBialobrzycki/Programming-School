#include <iostream>
#include <cctype>
#include <string>
int main()
{
	using namespace std;
	bool spolgloska = true;
	char tab[6] = { 'a', 'e', 'i', 'o', 'u', 'y' };
	string slowo;
	int spolgloski = 0, samogloski = 0, inne = 0;

	cout << "Podawaj slowa (pojedyncze q konczy):\n";
	int licznik = 0;
	while ((cin >> slowo) && (slowo[licznik] != 'q'))
	{
		if (isalpha(slowo[licznik]))
		{
			
			for (int i=0; i < 6; i++)
			{
				if (slowo[licznik] == tab[i])
				{
					samogloski++;
					spolgloska = false;
					break;
				}
			}
			if (spolgloska == true)
				spolgloski++;
			else !spolgloska;
		}
		else inne++;
	}
	cout << spolgloski << " slow zaczyna sie od spolglosek.\n";
	cout << samogloski << " slow zaczyna sie od samoglosek.\n";
	cout << inne << " slow nie zalicza sie do zadnej z tych kategorii.\n";
	return 0;
}
