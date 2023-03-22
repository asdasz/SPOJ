#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    int ile;
    cin >> ile;
    int liczba;
    int tab[257];
    for (int i = 0; i <= 256; i++)
        tab[i] = 0;

    for (int i = 0; i < ile; i++)
    {
        cin >> liczba;
        tab[liczba]++;

    }
    int suma = 0;
    for (int i = 0; i <= 256; i++)
    {
    
        suma += (tab[i] / 3);
       // cout << tab[i];
    }
    cout << suma << endl;

    return 0;
}

