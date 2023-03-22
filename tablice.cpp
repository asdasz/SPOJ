#include <iostream>

using namespace std;
int main()
{
	//wczytaj wymiary
	int w, k;
	cin >> w;
	int** tab2 = new int* [w]; //alokacja pamieci
    int suma;
	for (int i = 0; i < w; i++)
	{
		cin >> k;
		tab2[i] = new int[k]; //alokacja pamieci
		for (int j = 0; j < k; j++) //wpisanie wartosci do tablicy
			cin >> tab2[i][j];

		for (int j = k; j > 0; j--)
			cout << tab2[i][j - 1] << " ";
	}
    for (int i = 0; i<w; i++)
		delete [] tab2[i];

delete [] tab2;
	return 0;
}
