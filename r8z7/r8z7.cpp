#include <iostream>
#include <cstring>

using namespace std;

template <typename T>		// szablon A
T SumArray(T arr[], int n);

template <typename T>		// szablon B
T SumArray(T * arr[], int n);

struct debts
{
	char name[50];
	double amount;
};

int main()
{
	int things[6] = { 13, 31, 103, 301, 310, 130 };
	struct debts mr_E[3] =
	{
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Strout", 1800.0}
	};
	double * pd[3];


	// ustawienie wskaznikow na pola amount struktur z tablicy Mr_E
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;

	int sumaRzeczy = 0;
	double sumaDlugow = 0;
	cout << "Suma rzeczy pana E." << endl;
	//things to tablica int
	sumaRzeczy = SumArray(things, 6);
	cout << sumaRzeczy << endl;	// uzywamy szablonu A
	cout << "Suma dlugow pana E." << endl;
	// pd to tablica wskaznikow na double
	sumaDlugow = SumArray(pd, 3);
	cout << sumaDlugow << endl;		// uzywa szablonu B (bardziej wyspecjalizowanego)

	cout << "Liczba przedmiotow pana E." << endl;
	int dlugosc = 6;
	cout <<  dlugosc << endl;
	cout << "Zadluzenie pana E." << endl;
	cout << sumaDlugow - sumaRzeczy << endl;

    return 0;
}

template <typename T>
T SumArray(T arr[], int n)
{
	T suma = 0;
	cout << "szablon A" << endl;
	for (int i = 0; i < n; i++)
		suma += arr[i];
	return suma;
}

template <typename T>
T SumArray(T * arr[], int n)
{
	T suma = 0;
	cout << "szablon B" << endl;
	for (int i = 0; i < n; i++)
		suma += *arr[i];
	return suma;
}

