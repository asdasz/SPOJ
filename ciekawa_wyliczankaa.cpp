#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

void konwert(long double x)
{
	double z = x;
	int i = 0;
	double nowa1 = 0;
	double nowa2 = 0;

	for (i; pow(2, i + 1) - 2 < x; i++) {}
	for (i; i > 0; i--)
	{
		if (x < 32768)
		{
			if (((pow(2, i + 1) + pow(2, i)) / 2 - 2) < x)
			{
				nowa1 += 6 * pow(10, i - 1);
				x -= 2 * pow(2, i - 1);
			}
			else
			{
				nowa1 += 5 * pow(10, i - 1);
				x -= pow(2, i - 1);
			}
		}
		else
		{
			if (((pow(2, i + 1) + pow(2, i)) / 2 - 2) < x)
			{
				nowa2 += 6 * pow(10, i - 15);
				x -= 2 * pow(2, i - 1);
			}
			else
			{
				nowa2 += 5 * pow(10, i - 15);
				x -= pow(2, i - 1);
			}
		}
	}
	cout << setprecision(33);
	if (z < 32768)
		cout << nowa1 << endl;
	else
		cout << nowa2 << nowa1 << endl;

}

int main()
{
	long double ile;
	cin >> ile;
	konwert(ile);
	return 0;
}

