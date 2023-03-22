#include <iostream>

using namespace std;

void sortowanie_2(int* tab, int lewy, int prawy)
{
    int v = tab[(lewy + prawy) / 2];
    int i, j, x;
    i = lewy;
    j = prawy;
    do
    {
        while (tab[i] > v) i++;
        while (tab[j] < v) j--;
        if (i <= j)
        {
            x = tab[i];
            tab[i] = tab[j];
            tab[j] = x;
            i++;
            j--;
        }
    } while (i <= j);
    if (j > lewy)
        sortowanie_2(tab, lewy, j);
    if (i < prawy)
        sortowanie_2(tab, i, prawy);

}


int main()
{
	int ile; cin >> ile;
	while (ile--)
	{
        long long int x, liczba, przec; cin >> liczba>>przec;
		int *tab = new int[liczba];
        long long int suma = 0;
        int count = 0;

		for (int i = 0; i < liczba; i++)
			cin >> tab[i];

        sortowanie_2(tab,0, liczba-1);
        for (int i = 0; i < liczba; i++)
        {
//            cout << tab[i] << endl;
            count++;
            if (count == przec)
            {
                suma += tab[i];
                count = 0;
            }
        }
        cout << suma << endl;
	}


	return 0;
}