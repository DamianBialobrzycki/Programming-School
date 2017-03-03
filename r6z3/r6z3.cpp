#include <iostream>

using namespace std;

int main()
{
	char wybor;
	cout << "Wybierz opcje:" << endl;
	cout << "r\) roslinozerca\t\tp\) pianista\nd\) drzewo\t\tg\) gra" << endl;
	cout << "Prosze wybrac litere r, p, d lub g: ";
	cin >> wybor;

	while (wybor != 'r' && wybor != 'p' && wybor != 'd' && wybor != 'g')
	{
		cout << "Prosze wybrac litere r, p, d lub g: ";
		cin >> wybor;
	}

	switch (wybor)
	{
		case 'r':
			cout << "Roslinozerca wcina roslinki." << endl;
			break;
		case 'p':
			cout << "Pianista musi dbac o palce." << endl;
			break;
		case 'd':
			cout << "Klon jest drzewem." << endl;
			break;
		case 'g':
			cout << "gra jeszcze nie jest tworzona." << endl;
			break;
	}

    return 0;
}

