#include <iostream>

using namespace std;

void sortowanie(int* tab, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                int bufor;
                bufor = tab[j + 1];
                tab[j + 1] = tab[j];
                tab[j] = bufor;

            }
        }
    }
}



int main()
{
    int ile;
    cin >> ile;
    while (ile--)
    {
        int max=0, ileee, punkty, countmax=0;
        cin >> ileee;
        int* tabl = new int[ileee];
        for (int i = 0; i < ileee; i++)
        {
            cin >> punkty;
            tabl[i] = punkty;
            if (max < punkty)
                max = punkty;
        }
        for (int i = 0; i < ileee; i++)
            if (max == tabl[i])
                countmax++;
        for (int i = 0; i < countmax; i++)
            cout << max << endl;


        sortowanie (tabl, ileee);
        for (int i = 0; i < ileee - countmax; i++)
            cout << tabl[i] << endl;

    }
    return 0;
}
