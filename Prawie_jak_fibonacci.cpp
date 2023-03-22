#include <iostream>

using namespace std;

int main()
{
    int ile; cin >> ile;
    int* tab = new int[ile];
    int fib = 0;
    if (ile < 2)
    {
        cout << 0 << endl;
        return 0;
    }
    cin >> tab[0] >> tab[1];

    for (int i = 2; i < ile; i++)
    {
        cin >> tab[i];
        if (tab[i - 2] + tab[i - 1] == tab[i])
            fib++;
    }
    cout << fib << endl;
    delete[]tab;
}