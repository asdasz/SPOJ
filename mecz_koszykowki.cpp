#include <iostream>

int wypelnij_tabele(int x[])
{
    x[0] = 1;
    x[1] = 2;
    x[2] = 4;
    for (int i = 3; i < 25; i++)
    {
        x[i] = x[i - 3] + x[i - 2] + x[i - 1];
    }
    return *x;
}

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int q; cin >> q;
    int tab[25];
    wypelnij_tabele(tab);
    //cout << tab[24];
    long long int a, b, c, d, opcje;
    while (q--)
    {
        cin >> a >> b >> c >> d;
        if (a == 0)
            a++;
        if (b == 0)
            b++;
        if (c == 0)
            c++;
        if (d == 0)
            d++;
        opcje = tab[a - 1];
        opcje *= tab[b - 1];
        opcje %= 1000000007;
        opcje *= tab[c - 1];
        opcje %= 1000000007;
        opcje *= tab[d - 1];
        opcje %= 1000000007;

        cout << opcje << "\n";
    }
}