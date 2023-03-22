#include <iostream>

using namespace std;

int main()
{
    int proby; cin >> proby;
    while (proby--)
    {
        int kolumny, wiersze;
        cin >> wiersze;
        int** tab = new int* [wiersze];
        cin >> kolumny;
        for (int i = 0; i < wiersze; i++)
        {
            tab[i] = new int[kolumny];
            for (int j = 0; j < kolumny; j++){}
        }

        for (int i = 0; i < wiersze; i++)
            for (int j = 0; j < kolumny; j++)
            {
                int liczba;
                cin >> liczba;

                if (i != 0 && i != wiersze - 1 && j != 0 && j != kolumny - 1)
                    tab[i][j] = liczba;
                else if (i != wiersze - 1 && j == 0)
                    tab[i + 1][j] = liczba;
                else if (i == 0 && j != 0)
                    tab[i][j - 1] = liczba;
                else if (i == wiersze - 1 && j != kolumny - 1)
                    tab[i][j + 1] = liczba;
                else if (i != 0 && j == kolumny - 1)
                    tab[i - 1][j] = liczba;
            }

        for (int i = 0; i < wiersze; i++)
        {
            for (int j = 0; j < kolumny; j++)
                cout << tab[i][j] << " ";
            cout << endl;
        }
        for (int i = 0; i < wiersze; i++)
        {
            delete[]tab[i];
        }
        delete[] tab;
    }
    return 0;
}