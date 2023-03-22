#include <iostream>

using namespace std;


bool czy_pierwsza(int n)
{
	if (n < 2)
		return false;

	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}

int main()
{
	int tab[5], ile = 0, liczba = 0;
	for (int i = 0; i < 5; i++)
		cin >> tab[i];

	for (int a = 0; a < 5; a++)
	{
		liczba += 10000 * tab[a];
		for (int b = 0; b < 5; b++)
		{
			if (b != a) 			
			{
				liczba += 1000 * tab[b];
				for (int c = 0; c < 5; c++)
				{
					if (c != a && c != b) 
					{
						liczba += 100 * tab[c];
						for (int d = 0; d < 5; d++)
						{
							if (d != a && d != b && d!=c) 
							{
								liczba += 10 * tab[d];
								for (int e = 0; e < 5; e++)
								{
									if (e != a && e != b && e!=c && e!=d)
									{
										liczba += tab[e];
										//cout << liczba << endl;
										if (czy_pierwsza(liczba) == true)
											ile++;
										liczba -= tab[e];
										
									}
								}
								liczba -= 10* tab[d];
								//cout << liczba << endl;
							}
						}
						liczba -=100* tab[c];
					}
				}
				liczba -=1000* tab[b];
			}
		}
		liczba -=10000* tab[a];
	}
	cout << ile << endl;

	return 0;
}