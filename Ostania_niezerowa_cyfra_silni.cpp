#include <iostream>

using namespace std;

int main()
{
    int ile;
    cin >> ile;
    while (ile--)
    {
        int liczba = 1, wczytana, k;
        cin >> wczytana;
        for (int i = 1; i <= wczytana; i++)
        {
            k = i;
            for (k % 10 == 0; k % 10 == 0; k /= 10) {}

            liczba *= k;

            for (liczba % 10 == 0; liczba % 10 == 0; liczba /= 10) {}
            liczba = liczba % 1000;
            
        }

        cout << liczba%10 << endl;
    }
}

