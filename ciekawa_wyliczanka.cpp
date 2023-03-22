#include <iostream>
#include <math.h>

using namespace std;

void konwert(int x)
{
	int i = 0, j = 0;
	int nowa = 0;
	int* tab = new int[i];

	while (x)
	{
		tab[i] = x % 2;
		x /= 2;
		i++;
	}




	i--;
	for (i; i >= 0; i--)
	{
		nowa += (tab[i] + 5) * pow(10, i);
	}

	cout << nowa;
}




int main()
{
	int ile=10;
	//cin >> ile;
	konwert(ile);

	return 0;
}

