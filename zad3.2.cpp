#include <iostream>
using namespace std;

int main()
{

	char znak;
	cout << "Podaj znak" << endl;
	cin >> znak;

	if (znak == 't')
	{
		cout << "Podales znak t" << endl;

	} else
	{
		while(znak != 't')
		{
			cout << "Podaj znak" << endl;
			cin >> znak;
		}

		cout << "Podales znak t" << endl;
	}


}