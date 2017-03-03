#include <iostream>
#include <array>
using namespace std;

int main()
{
	array <long double, 101> arr;
	long double silnia[arr.size()];
	silnia[1] = silnia[0] = 1L;
	for (int i = 2; i < arr.size(); i++)
		silnia[i] = i * silnia[i - 1];
	for (int i = 0; i < arr.size(); i++)
		cout << i << "! = " << silnia[i] << endl;
    return 0;
}

