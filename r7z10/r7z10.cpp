#include <iostream>

using namespace std;

//deklaracja wskaznika na funkcje o okreslonych parametrach
typedef double(*p_funkcja)(double x, double y);

//definicja funkcji ktora w parametrze ma wskaznik na inna funkcje
double calculate(double x, double y, p_funkcja wskaznik );

double add(double x, double y);
double subtract(double x, double y);

int main()
{
	double x;
	double y;
	int ilosc;
	double dodawanie;
	double odejmowanie;

	//funkcje z parametrami okreslonymi w deklaracji sa dodawane do wskaznikow
	p_funkcja p1 = add;
	p_funkcja p2 = subtract;
	

	cout << "Ile par liczb chcesz wpisac? ";
	cin >> ilosc;
	for (int i = 0; i < ilosc; i++)
	{
		cout << "Podaj x: ";
		cin >> x;
		while (!cin)
		{
			cout << "Podaj liczbe!" << endl;
			cout << "Podaj x: ";

			//konieczne bo inaczej petla dziala w nieskonczonosc
			cin.clear();
			cin.ignore(1000, '\n');
			cin >> x;
		}

		cout << "Podaj y: ";
		cin >> y;
		while (!cin)
		{
			cout << "Podaj liczbe!" << endl;
			cout << "Podaj y: ";
			//konieczne bo inaczej petla dziala w nieskonczonosc
			cin.clear();
			cin.ignore(1000, '\n');
			cin >> y;
		}
		//liczby + wywolanie funkcji add(dodawanie)
		dodawanie = calculate(x, y, add);
		//liczby + wywolanie funkcji subtract(odejmowanie)
		odejmowanie = calculate(x, y, subtract);

		cout << "Wynik dodawania: " << dodawanie << endl;
		cout << "Wynik odejmowania: " << odejmowanie << endl;
	}
	cout << "Koniec!" << endl;
    return 0;
}
//trzeci parametr to wskaznik na funkcje podana w wywolaniu
double calculate(double x, double y, p_funkcja funkcja)
{
	//zwraca wynik okraslonej funkcji podanej w wywolaniu
	return funkcja(x, y);
}

double add(double x, double y)
{
	return x + y;
}

double subtract(double x, double y)
{
	return x - y;
}

