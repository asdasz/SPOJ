#include <iostream>

using namespace std;

bool czy_pierwsza(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{

    int ile; cin >> ile;

    int tab[78498], j = 0;
    for (int i=2; i<1000000;i++)
        if (czy_pierwsza(i))
        {
            tab[j] = i; j++;
        }

    while (ile--)
    {
        int a, b, licz=0, i, jed, dwa;
        cin >> a >> b;

        for (i = 0; tab[i] < a; i++) {}
        jed = i;
        for (tab[i]; tab[i] <= b && tab[i]!= 999983; i++) {}
        dwa = i;
        licz = dwa - jed;
//        cout << licz << " ";
        if (b>= 999983 && a<= 999983)
            cout << licz + 1 << endl;
        else
            cout << licz << endl;
    }

    for (int i = 78497; i != (2); i--)
        if(tab[i]- tab[i-1]>=100)
        cout << tab[i] - tab[i - 1] << endl;



    return 0;
}
