#include <iostream>

using namespace std;

int main()
{
    int ile; cin >> ile;
    while (ile--)
    {
        int kolumny, wiersze;
        cin >> wiersze;
        int** tab = new int* [wiersze];
        cin >> kolumny;
        for (int i = 0; i < wiersze; i++)
        {
            tab[i] = new int[kolumny];
            for (int j = 0; j < kolumny; j++) {}
        }

        for (int i = 0; i < wiersze; i++)
            for (int j = 0; j < kolumny; j++)
            {
                int liczba;
                cin >> liczba;

                if (i == 0 && j % 2 == 0)
                    tab[i + 1][j] = liczba;

                else if (i == 0 && j % 2 == 1)
                    if (j + 1 == kolumny)
                        tab[i][0] = liczba;
                    else
                        tab[i][j + 1] = liczba;
                //|||||||||||||||||||||||||||||||||||||

                else if (i == wiersze - 1 && j % 2 == 0)
                    if (j + 1 == kolumny)
                        tab[0][0] = liczba;
                    else
                        tab[i][j + 1] = liczba;
                else if (i == wiersze - 1 && j % 2 == 1)
                    tab[i - 1][j] = liczba;

                //|||||||||||||||||||||||||||||||||||||
                else
                    if (j % 2 == 0)
                        tab[i + 1][j] = liczba;
                    else
                        tab[i - 1][j] = liczba;

            }
        for (int i = 0; i < wiersze; i++)
        {
            for (int j = 0; j < kolumny; j++)
                cout << tab[i][j] << " ";
            cout << endl;
        }


    }
}

