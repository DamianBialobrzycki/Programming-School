#include <iostream>
#include "Header.h"

using namespace std;

namespace SALES
{
	// licznik andany na 0
	// sluzy do ustawienia kolejnym z 4 indeksow tablicy najmniejszych wartosci z tabel
	int counter = 0;
	void setSales(Sales & s, const double ar[], int n)
	{
		// nadanie kolejnemu indexowi pierwszej wartosci z tabeli - uzywane do min i max
		s.sales[counter] = ar[0];
		
		for (int i = 0; i < n; i++)
		{
			if (ar[i] < s.sales[counter])
				s.sales[counter] = ar[i];
		}
		double min = s.sales[0];
		double max = s.sales[0];
		double sum = 0;

		for (int i = 0; i < QUARTERS; i++)
		{
			if (s.sales[i] < min)
				min = s.sales[i];
			if (s.sales[i] > max)
				max = s.sales[i];

			sum += s.sales[i];
		}
		s.average = sum / QUARTERS;
		s.min = min;
		s.max = max;
		counter++;
	}

	void setSales(Sales & s)
	{
		for (int i = 0; i < QUARTERS; i++)
		{
			cout << "Podaj sprzedaz za " << (i + 1) << " kwartal: ";
			cin >> s.sales[i];
		}

		double min = s.sales[0];
		double max = s.sales[0];
		double sum = 0;

		for (int i = 0; i < QUARTERS; i++)
		{
			if (s.sales[i] < min)
				min = s.sales[i];
			if (s.sales[i] > max)
				max = s.sales[i];

			sum += s.sales[i];
		}
		s.average = sum / QUARTERS;
		s.min = min;
		s.max = max;
	}

	void showSales(const Sales & s)
	{
		cout << "Zawartosc tablicy sales:" << endl;
		for (int i = 0; i < QUARTERS; i++)
			cout << (i + 1) << ". "<< s.sales[i] << endl;

		cout << "AVG: " << s.average << endl;
		cout << "MIN: " << s.min << endl;
		cout << "MAX: " << s.max << endl;
	}
}