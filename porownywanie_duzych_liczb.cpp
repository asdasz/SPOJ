#include <iostream>

using namespace std;

int main()
{
	string liczba1, dzialanie, liczba2;
	while (cin >> liczba1 >> dzialanie >> liczba2)
	{
		int dlugosc1, dlugosc2;

		dlugosc1 = liczba1.length();
		dlugosc2 = liczba2.length();
		//cout << dlugosc1 << dlugosc2 << endl;
		if (dlugosc1 > dlugosc2)
			liczba1 > liczba2;
		else if (dlugosc1 < dlugosc2)
			liczba1 < liczba2;
		else
		{
			for (int i = 0; i < dlugosc1; i++)
			{
				if (liczba1[i] > liczba2[i])
				{
					liczba1 > liczba2;
					break;
				}
				else if (liczba1[i] < liczba2[i])
				{
					liczba1 < liczba2;
					break;
				}
				else if (liczba1[dlugosc1 - 1] == liczba2[dlugosc2 - 1])
					liczba1 == liczba2;
			}
		}

		if (dzialanie == "==")
			if (liczba1 == liczba2)							cout << 1 << endl;
			else cout << 0 << endl;

		else if (dzialanie == "!=")
			if (liczba1 == liczba2)							cout << 0 << endl;
			else cout << 1 << endl;

		else if (dzialanie == ">=")
			if (dlugosc1 > dlugosc2)						cout << 1 << endl;
			else if (dlugosc1 < dlugosc2)					cout << 0 << endl;
			else if (liczba1 >= liczba2)					cout << 1 << endl;
			else											cout << 0 << endl;

		else if(dzialanie == "<=")
			if (dlugosc1 < dlugosc2)						cout << 1 << endl;
			else if (dlugosc1 > dlugosc2)					cout << 0 << endl;
			else if (liczba1 <= liczba2)					cout << 1 << endl;
			else											cout << 0 << endl;
	}
	return 0;
}