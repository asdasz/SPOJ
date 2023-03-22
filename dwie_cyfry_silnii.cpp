#include <iostream>
using namespace std;

int main()
{
	int ile;
	cin >> ile;
	for (int i = 0; i < ile; i++)
	{
		long long int n, nowa = 1;
		int d, j;
		cin >> n;
		if (n <= 1)
		{
			d = 0;
			j = 1;
		}
		else
		{
			if (n >= 10)
			{
				d = 0; j = 0;
			}
			else
			{
				for (int q = 1; q <= n; q++)
				{
					nowa = nowa * q;
					j = nowa % 10;
					d = nowa / 10 % 10;
					nowa = 10 * d + j;
				}
			}
		}
		cout << d << " " << j<<endl;
	}
	return 0;
}