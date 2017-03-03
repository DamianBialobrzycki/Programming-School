#include <iostream>
#include <new>
#include <cstring>

using namespace std;

const int BUF = 512;
const int N = 2;

char buffer[BUF];

struct chaff
{
	char dross[20];
	int slag;
};

int main()
{
	chaff *tab;
	chaff *tab2;

	// przydzielanie buforu normalnie
	tab = new (buffer) chaff[N];

	// przydzielanie buforu miejscowo
	tab2 = new chaff[N];

	char nazwa[40];
	int ilosc;

	for (int i = 0; i < N; i++)
	{
		cout << "Podaj nazwe " << (i+1) << " smiecia: ";
		cin >> nazwa;
		cout << "Podaj ilosc: ";
		cin >> ilosc;

		strcpy(tab[i].dross, nazwa);
		tab[i].slag = ilosc;

		strcpy(tab2[i].dross, nazwa);
		tab2[i].slag = ilosc;
	}
	
	for (int i = 0; i < N; i++)
	{
		cout << (i + 1) << ". Nazwa (pierwszy wariant): " << tab[i].dross << endl;
		cout << "Ilosc (pierwszy wariant): " << tab[i].slag << endl;

		cout << (i + 1) << ". Nazwa (drugi wariant): " << tab2[i].dross << endl;
		cout << "Ilosc (drugi wariant): " << tab2[i].slag << endl;
	}
    return 0;
}

