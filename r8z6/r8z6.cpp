#include <iostream>
#include <cstring>

using namespace std;

template <class T>
T maxn(T tab[], int n);

//template <> char* maxn<char>(char tab[][20], int n){
//Ÿle, ma byæ "T maxn<T>(T tab[], int n)", tyle ¿e w miejsce "T" wstawiasz "const char*", czyli:
template <> const char* maxn<const char*>(const char* tab[], int n);

int main()
{
	int tab[5] = { 2,7,6,4,3 };
	cout << maxn(tab, 5) << endl;;

	double tabl[4] = { 1.3,4.6,8.7,3.5 };
	cout << maxn(tabl, 4) << endl;

	const char *tablica[5] = { "Mik", "makaka", "najdluzszy", "sfs", "fdf" };
	cout << maxn(tablica, 5) << endl;

	return 0;
}


template <class T>
T maxn(T tab[], int n)
{
	T max = tab[0];

	for (int i = 1; i<5; i++) {
		if (tab[i]>max)
			max = tab[i];
	}

	return max;
}


template <> const char* maxn<const char*>(const char* tab[], int n)
{
	const char *p = tab[0];

	for (int i = 1; i<n; i++) {
		if ((strlen(tab[i])) >(strlen(p)))
			p = tab[i];
	}

	return p;
}