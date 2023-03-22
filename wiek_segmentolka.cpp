#include <iostream>
using namespace std;

int main() {
	int testy; cin >> testy;
	while (testy--)
	{

		int ile; cin >> ile;
		int suma = (-1);
		suma += ile;
		int* tab = new int[ile];
		for (int i = 0; i < ile; i++)
		{
			cin >> tab[i];
			suma += tab[i];
		}
		cout << suma << endl;
	}
	return 0;
}