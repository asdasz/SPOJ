#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int ile = 0;
	long long int wierz = 0;
	cin >> ile;
	while (ile--)
	{
		int licznik = 0;
		cin >> wierz;

		switch (wierz % 12)
		{
		case 1:
		case 2:
		case 5:
			licznik += wierz / 12;				break;
		default:
			licznik += wierz / 12 + 1;			break;
		}
		cout << licznik << "\n";
	}
	return 0;

}