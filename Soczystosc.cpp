#include <iostream>
using namespace std;

int main()
{
    int ile; cin >> ile;
    for(int z= 0; z<ile; z++)
    {
        if (z)cout << endl;


        int amount; cin >> amount;
        int* tab = new int[amount];
        for (int i = 0; i < amount; i++)
        {
            cin >> tab[i];
        }
       long long int a = tab[0], b = tab[0], c, d;
        if (amount) {
            c = tab[1];
            d = tab[1];
        }
        else {
            c = 0;
            d = 0;
        }

        for (int i = 2; i < amount; i++)
        {
            if (i % 3)
                a += tab[i];
            if (!(i % 3))
            {
                b += tab[i];
                c += tab[i];
            }
            if (i % 3 == 1)
                d += tab[i];

            if (i % 3 == 1)
            {
                if (a > d) d = a;
                else a = d;
                if (b > c) c = b;
                else b = c;
                //swapping
                a += c;
                c = a - c;
                a = a - c;
            }
        }
        if (a >= b && a >= c && a >= d) cout << a;
        else if (b >= a && b >= c && b >= d) cout << b;
        else if (c >= a && c >= b && c >= d) cout << c;
        else cout << d;
    }
    return 0;
}