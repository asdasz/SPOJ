#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ile; cin >> ile;
    long long int liczba;

    int wynik;
    while (ile--)
    {
        wynik = 0;
        cin >> liczba;

        for (int i = 19; i >= 0; i--)
        {
            if (liczba >= pow(3, i))
            {
                liczba -= pow(3, i);
                wynik++;             
            }
        }
        cout << wynik << "\n";

    }
    return 0;
}
