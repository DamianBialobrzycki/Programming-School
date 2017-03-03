#ifndef HEADER_H_
#define HEARER_H_
#include <string>

using namespace std;

const int SIZE = 4;

class Rachunek
{
	private:
		string accounts[SIZE];
		int numbers[SIZE];
		double values[SIZE];
	public:
		void set();
		void show();
		void show(int number);
		void deposit(int number);
		void withdraw(int number);
};
#endif
