#ifndef HEADER_H_
#define HEADER_H_
#include <string>

using namespace std;

class Person
{
	private:
		static const int LIMIT = 256;
		string lname;			// nazwisko
		char fname[LIMIT];
	public:
		Person() { lname = ""; fname[0] = '\0'; }				// #1
		Person(const string & ln, const char * fn = "HejTy");	// #2
	// ponizsze metody wyswietlaja imie i nazwisko
		void Show() const;			// w kolejnosci imie nazwisko
		void FormalShow() const;	// w kolejnosci nazwisko imie
};
#endif