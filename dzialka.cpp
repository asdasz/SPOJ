#include<iostream>
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

int NWD(int a, int b)
{
    while (a != b)
        if (a > b)
            a -= b;
        else
            b -= a;
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, ile;
    int tab[168];
    cin >> ile;
    int j = 0;
    for (int i = 2; i < 998; i++)
    {
        if (czy_pierwsza(i) == true)
        {
            tab[j] = i;
            j++;
        }
    }
    while (ile--)
    {
        cin >> a >> b;
        if(a!=b)
            cout << NWD(a, b) << endl;
        else
        {
            for (int i = 0; i < 168; i++)
            {
                if (a % tab[i] == 0)
                {
                    a /= tab[i];
                    cout << a << "\n";
                    break;
                }
            }

            if (a == b)
                cout << 1 << endl;


        }
    }
    return 0;
}