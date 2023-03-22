#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ile; cin >> ile;
    int tab[101];
    for (int i = 0; i < 101; i++)
    {
        tab[i] = 0;
    }
    while (ile--)
    {
        int x;
        cin >> x;
        tab[x + 50]++;
    }
    int q = 0;
    for (int i = 0; i < 101; i++)
    {
        if (tab[i] != 0)
            q++;
    }
    cout << q << endl;
}
