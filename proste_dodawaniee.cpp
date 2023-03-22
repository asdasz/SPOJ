#include <iostream>

using namespace std;
int main()
{
	
	int ile, k;
	cin >> ile;
	int** tab2 = new int* [ile]; 
	int suma;
	for (int i = 0; i < ile; i++)
	{
		suma = 0;
		cin >> k;
		tab2[i] = new int[k];
		for (int j = 0; j < k; j++)
		{
			cin >> tab2[i][j];
			suma += tab2[i][j];
		}
		cout << suma << endl;
	}

	return 0;
}