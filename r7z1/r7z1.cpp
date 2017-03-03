#include <iostream>

using namespace std;

float harmoniczna(float, float);

int main()
{
	float x;
	float y;
	float srednia;

	cout << "Podaj liczby \(0 konczy program\)." << endl;
	do
	{
		
		cout << "Podaj x: ";
		cin >> x;
		cout << "Podaj y: ";
		cin >> y;
		cout << "Srednia harmoniczna: " << harmoniczna(x, y) << endl;
		
	} while (x != 0 && y != 0);
    return 0;
}

float harmoniczna(float x, float y)
{
	
	float srednia = 0;
	srednia = 2.0 * x * y / (x + y);
	
	
	return srednia;
}

