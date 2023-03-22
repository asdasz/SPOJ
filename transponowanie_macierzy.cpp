#include <iostream>

using namespace std;

int main()
{
    int kolumny, wiersze;
    cin >> wiersze;
    int** tab = new int* [wiersze];
    cin >> kolumny;
    for (int i = 0; i < wiersze; i++)
    {
        tab[i] = new int[kolumny];
        for (int j = 0; j < kolumny; j++) { cin >> tab[i][j]; }
    }

    for (int i = 0; i < kolumny; i++)
    {
        for (int j = 0; j < wiersze; j++)
            cout << tab[j][i] << " ";
        cout << endl;
    }

    for (int i = 0; i < wiersze; i++)
    {
        delete[]tab[i];
    }
    delete[] tab;
    return 0;
}

