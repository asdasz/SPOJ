#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ile; cin >> ile;
    long long int dni, d1, d2;
    while (ile--)
    {
        cin >> dni >> d1 >> d2;
        int tab[100];
        tab[0] = d1 % 10;
        tab[1] = d2 % 10;
        int ktory = 1;
        for (int i = 2; i < 100; i++)
        {
            tab[i] = (tab[i - 1] + tab[i - 2]) % 10;

            if (tab[i] == tab[1] && tab[i - 1] == tab[0])
            {
                ktory = i - 1;
                break;
            }
        }

        dni %= ktory;
        if (dni == 0)
            cout << tab[ktory - 1] << endl;
        else
            cout << tab[dni - 1] << endl;
    }
    return 0;
}

