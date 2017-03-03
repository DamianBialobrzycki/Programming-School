#include <iostream>

using namespace std;

int main()
{
	float wzrost_cale;
	int wzrost_stopy;
	float waga_funty;

	cout << "Podaj wzrost w calach: ";
	cin >> wzrost_cale;
	cout << "Podaj wzrost w stopach: ";
	cin >> wzrost_stopy;
	cout << "Podaj wage w funtach: ";
	cin >> waga_funty;

	const int cal_stopy = 12;
	const float cal_metr = 0.0254;

	float metry = (12 * wzrost_stopy + wzrost_cale) * cal_metr;

	float waga_kg = waga_funty / 2.2;

	float bmi = waga_kg / (metry*metry);

	cout << "Twoje BMI to: " << bmi << endl;


    return 0;
}

