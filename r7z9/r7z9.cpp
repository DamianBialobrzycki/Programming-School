#include <iostream>

using namespace std;

const int SLEN = 30;
struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};


int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main()
{
	cout << "Podaj wielkosc grupy: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "Gotowe" << endl;
    return 0;
}
int getinfo(student pa[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "Podaj nazwisko studenta: ";
		int o = 0;
		while (cin.get(pa->fullname[o]))
		{
			if (pa->fullname[0] == '\n')
				return i;
			if (pa->fullname[o] == '\n')
				break;
			o++;
		}
		pa->fullname[o] = '\0';
		o = 0;
		cout << "Podaj hobby: ";
		while (cin.get(pa->hobby[o]))
		{
			if (pa->hobby[o] == '\n')
				break;
			o++;
		}
		pa->hobby[o] = '\0';
		if (pa->fullname[0] == '\n' || pa->hobby[0] == '\n')
			break;
		cout << "Podaj oop level (numer): ";
		cin >> pa->ooplevel;
		cin.ignore(1);
		++pa;
	}
	return i;
}
void display1(student st)
{
	cout << "Nazwisko studenta: " << st.fullname << endl;
	cout << "Hobby: " << st.hobby << endl;
	cout << "Poziom OOP: " << st.ooplevel << endl << endl;
}
void display2(const student * ps)
{
	cout << "Nazwisko studenta: " << ps->fullname << endl;
	cout << "Hobby: " << ps->hobby << endl;
	cout << "Poziom OOP: " << ps->ooplevel << endl << endl;
}
void display3(const student pa[], int size)
{
	for (int i = 0;i < size;i++)
	{
		cout << "Nazwisko studenta: " << pa->fullname << endl;
		cout << "Hobby: " << pa->hobby << endl;
		cout << "Poziom OOP: " << pa->ooplevel << endl << endl;
		pa++;
	}
}


