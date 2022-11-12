#include <iostream>
using namespace std;

int silnia(int x)
{
	if (x > 1) {
		return x * silnia(x - 1);
	}else
	{
		return 1;
	}

}

void oddziel(int x)
{
	for(int i = 0 ; i<x; i++)
	{
		cout << " ";
		
	}

}

int main()
{


	int liczba;
	cout << "Podaj ilosc wierszy :" << endl;
	cin >> liczba;

	if(liczba==1)
	{
		
		cout << 1 << endl;

	}
	else {

		for (int i = 1; i <=liczba; i++)
		{
			oddziel(3*(liczba-(i-1)));

			for (int j = 1; j <=i; j++)
			{
				
				if (j==1 || j == liczba)
				{
					oddziel(6);
					cout << "1";
				}else
				{
					int wiersz = i - 1;
					int kolumna = j - 1;

					int n = silnia(wiersz);
					int k = silnia(kolumna);

					int nk = wiersz -  kolumna;
					nk = silnia(nk);
					
					int wynik = n / (k * nk);
					oddziel(5);
					cout << wynik;
					
						
					


				}

				
			}
			cout << "" << endl;

		}


	}

}