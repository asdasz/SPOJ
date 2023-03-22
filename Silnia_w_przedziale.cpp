#include <iostream>

using namespace std;

int main()
{
    int tab[13], maly, duzy, wynik;
    tab[0] = 1;
    for (int i = 1; i <= 12; i++)
        tab[i] = tab[i - 1] * i;
    
    while (cin >> maly >> duzy)
    {
        wynik = 0;
        for (int i = 0; i <= 12; i++)       
            if (tab[i] >= maly && tab[i] <= duzy)
                wynik++;
        cout << wynik << endl;
    }
    return 0;
}