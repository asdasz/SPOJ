#include <iostream>
using namespace std;

int main()
{
	int ile;
	cin >> ile;
	for (int i = 0; i < ile; i++)
	{
		long long int pesel;
		cin >> pesel;
		int a, b, c, d, e, f, g, h, x, j, k;
		k = pesel % 10;
		j = pesel / 10 % 10;
		x = pesel / 100 % 10;
		h = pesel / 1000 % 10;
		g = pesel / 10000 % 10;
		f = pesel / 100000 % 10;
		e = pesel / 1000000 % 10;
		d = pesel / 10000000 % 10;
		c = pesel / 100000000 % 10;
		b = pesel / 1000000000 % 10;
		a = pesel / 10000000000 % 10;

		if ((a + 3 * b + 7 * c + 9 * d + e + 3 * f + 7 * g + 9 * h + x + 3 * j + k) % 10 == 0)
			cout << "D" << endl;
		else
			cout << "N" << endl;


	}
	return 0;
}