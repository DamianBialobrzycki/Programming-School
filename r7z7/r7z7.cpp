#include<iostream>
using namespace std;
const int SIZE = 5;

double* fill(double * begin, double * end);
void show(double * begin, double * end);
void revaluate(double * begin, double * end, double r);

int main() {
	double wartosci[SIZE];
	double * ile = fill(wartosci, wartosci + SIZE);
	cout << "ile ="<< *ile << endl;
	show(wartosci, ile);
	
	cout << "Podaj czynnik zmiany wartosci: ";
	double r = 0;
	while (!(cin >> r))
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cout << "Niepoprawna wartosc, podaj liczbe: ";
	}
	cout << endl;
	revaluate(wartosci, ile, r);
	show(wartosci, ile);
	cout << "Gotowe" << endl;
	return 0;
}

double* fill(double * begin, double * end) {
	double *i = 0;
	int temp;
	int n = 0;
	cout << endl << "tablica = " << begin << endl;
	for (i = begin; i != end; i++) {
		cout << n + 1 << ". ";
		cin >> temp;
		if (!cin) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bledne dane!" << endl;
			break;
		}
		else if (temp < 0)
			break;
		begin[n] = temp;
		cout << begin[n] << endl;
		n++;
		
		
	}
	return i; // TU NA PEWNO JEST BLAD, ale nie wiem jak to zrobic inaczej
}

void show(double * begin, double * end) {
	double *i = 0;
	int n = 0;
	cout << "beg=" << begin[0] << endl;
	cout << "end = " << *end << endl;
	for (i = begin; i != end; i++) {
		cout << (n + 1) << ". " << begin[n] << endl;
		n++;
	}
}
void revaluate(double * begin, double * end, double r)
{
	double *i = 0;
	int n = 0;
	for (i = begin; i != end; i++)
	{
		begin[n] *= r;
		n++;
	}
		
}