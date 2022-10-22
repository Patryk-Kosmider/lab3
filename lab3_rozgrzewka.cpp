
#include <iostream>
using namespace std;

int main()
{
	float goscie = 0;
	float pizza = 0;
	cout << "Podaj ilosc kawalkow pizzy: " << endl;
	cin >> pizza;

	cout << "Podaj ilosc uczestnikow " << endl;
	cin >> goscie;

	float wynik = pizza / goscie;
	int nakazdego = wynik;


	int organizator = pizza - (nakazdego * goscie);

	cout << "Kazdy otrzyma po: " << nakazdego << " kawalkow" << endl;



	cout << "Dla organizatora zostaje: " << organizator << endl;

			

	return 0;
}

