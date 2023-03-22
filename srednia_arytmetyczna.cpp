#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int ile;
	cin >> ile;
	while (ile--)
	{
		int ilee;
		cin >> ilee;
		int* tab = new int[ilee];
		double suma = 0, srednia, najblizsza, naj=0;
		for (int i = 0; i < ilee; i++)
		{
			cin >> tab[i];
			suma += tab[i];
		}
		najblizsza = 1000;
		srednia = suma / ilee;
	//	cout << srednia;

		for (int i = 0; i < ilee; i++)
			if (srednia - tab[i] >= 0)
			{
				if (srednia - tab[i] < najblizsza)
				{
					najblizsza = srednia - tab[i];
					naj = tab[i];
				}
			}
			else
			{
				if (tab[i] - srednia < najblizsza)
				{
					najblizsza = tab[i] - srednia;
					naj = tab[i];
				}
			}


		cout << naj << endl;
	}
	return 0;
}