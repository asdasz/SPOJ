#include <iostream>

using namespace std;


int main()
{
	int ile, oile;
	cin >> ile;
	int *tab = new int[ile];
	cin >> oile;

	for (int i = 0; i < ile; i++)
	{
		int x;
		cin >> x;
		tab[i] = x;
	}
	for (int i = 0; i < ile; i++)
	{
		if (i + oile < ile)
			cout << tab[i + oile] << endl;
		else
			cout << tab[i + oile - ile] << endl;
	}

	delete[]tab;

	return 0;
}