#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	cout << "Postac rownania kwadratowego to: ax^2 + bx + c" << endl;

	float a;
	float b;
	float c;

	float p1;
	float p2;
	float p0;

	cout << "Podaj A" << endl;
	cin >> a;
	cout << "Podaj B" << endl;
	cin >> b;
	cout << "Podaj C" << endl;
	cin >> c;


	if (b > 0 && c > 0)
	{
		cout << "Twoje rownanie kwadratowe to: " << a << "x^2+" << b << "x+" <<
			c << endl;
	}
	else if (b > 0 && c < 0)
	{
		cout << "Twoje rownanie kwadratowe to: " << a << "x^2+" << b << "x" << c << endl;
	}
	else if (b < 0 && c > 0)
	{
		cout << "Twoje rownanie kwadratowe to: " << a << "x^2" << b << "x+" << c << endl;
	}
	else if (b < 0 && c < 0)
	{
		cout << "Twoje rownanie kwadratowe to: " << a << "x^2" << b << "x" <<
			c << endl;
	}
	else
	{
		cout << "Twoje rownanie kwadratowe to: " << a << "x^2 + " << b << "x + " << c << endl;
	}



	float delta;

	delta = (b * b) - (4 * a * c);

	float sqrtdel = sqrt(delta);
	if (delta < 0)
	{
		cout << "Pierwiastki nie istnieja, delta jest ujemna" << endl;
	}
	else if (delta == 0)
	{
		p0 = (b * -1) / (2 * a);
		cout << "Delta ma jeden pierwiastek rowny: " << p0 << endl;
	}
	else
	{
		p1 = ((b * -1) - sqrtdel) / (2 * a);
		p2 = ((b * -1) + sqrtdel) / (2 * a);

		cout << "Pierwiastek pierwszy: " << p1 << endl;
		cout << "Pierwiastek drugi: " << p2 << endl;
	}


}
