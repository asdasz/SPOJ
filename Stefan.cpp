#include <iostream>

using namespace std;

int main()
{
	int ile, x;
	long long int maxsuma = 0, suma = 0;
	cin >> ile;
	int* tab = new int[ile];
	for (int i = 0; i < ile; i++)
	{
		cin >> x;
		tab[i] = x;
		suma += tab[i];
		if (maxsuma < suma)
			maxsuma = suma;
		if (suma < 0)
			suma = 0;
	}

	cout << maxsuma << endl;

	return 0;
}