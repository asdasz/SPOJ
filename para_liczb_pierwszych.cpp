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
	int liczba;
	int m; cin >> m;
	while (m--)
	{
		cin >> liczba;
		if (liczba <= 3)
		{
			cout << "NIE\n";
			continue;
		}
		for (int i = 2; i <= liczba; i++)
		{
			if (czy_pierwsza(i) == true && czy_pierwsza(liczba - i) == true)
			{
				cout << "TAK " << i << " " << liczba - i << "\n";
				break;

			}
			if (i > liczba/2)
			{
				cout << "NIE\n";
				break;
			}
		}




	}
	return 0;
}
