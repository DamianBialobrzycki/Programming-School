#include <iostream>
#include "Header.h"
#include <cstdlib>

using namespace SALES;
using namespace std;

int main()
{
	
	Sales a;
	Sales b;
	double t1[] = { 12.0, 14.5, 17.8, 19.1, 26.31 };
	double t2[] = { 1.4, 70.9, 12.7, 6.0 };
	double t3[] = { 12.3, 17.1, 78.4, 34.2 };
	double t4[] = { 56.98, 27.78, 12.09, 13.02, 17.56, 12.34 };
	
	setSales(a, t1, 5);
	setSales(a, t2, 4);
	setSales(a, t3, 4);
	setSales(a, t4, 6);

	setSales(b);

	showSales(a);
	showSales(b);
	system("pause");
	return 0;
}