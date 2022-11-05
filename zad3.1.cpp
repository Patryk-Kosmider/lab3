#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	float x;
	float y;

	cout << "Podaj x" << endl;
	cin >> x;
	cout << "Podaj y" << endl;
	cin >> y;

	float suma = x + y;
	float roznica = x - y;
	float iloczyn = x * y;
	float iloraz = x / y;

	cout << "Suma: " << setprecision(2) << fixed << suma << endl;
	cout << "Roznica: " << setprecision(2) << fixed << roznica << endl;
	cout << "Iloczyn: " << setprecision(2) << fixed << iloczyn <<  endl;
	cout << "Iloraz: " << setprecision(2) << fixed << iloraz << endl;


}