#include <iostream>
#include <string>
using namespace std;

int main()
{
	string liczba;
	cin >> liczba;
	int dlugosc = liczba.length();
	int pierwsze_zero = 0;
	int ostatnia_jedynka=dlugosc-1;

	for (int i = 0; liczba[i] != '0'; i++)
		pierwsze_zero++;

	for (int i = dlugosc-1; liczba[i] != '1'; i--)
		ostatnia_jedynka--;

	if (ostatnia_jedynka - pierwsze_zero == 1)
		cout << "PUSTY";
	else
		for (int i = pierwsze_zero + 1; i < ostatnia_jedynka; i++)
			cout << liczba[i];
	cout << endl;

	return 0;
}