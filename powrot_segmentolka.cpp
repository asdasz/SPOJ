#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int testy; cin >> testy;
	while (testy--)
	{

		int ile; cin >> ile;
		int operacje = (-1);
		operacje += ile;
		int* tab = new int[ile];
		for (int i = 0; i < ile; i++)
		{
			cin >> tab[i];
			operacje += tab[i];
		}
		cout << operacje << endl;

		int minimalny_czas_rozrostu_na_dlugosc = 0;

		for (minimalny_czas_rozrostu_na_dlugosc = 0;; minimalny_czas_rozrostu_na_dlugosc++)
			if ((pow(2, minimalny_czas_rozrostu_na_dlugosc)) >= ile)
			{
				break;
			}

		cout << minimalny_czas_rozrostu_na_dlugosc << endl;

	}




	return 0;
	
}
