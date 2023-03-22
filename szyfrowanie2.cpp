#include <iostream>

using namespace std;

int main()
{
    string napis2;
    bool check = false;
    int tab[5];
    tab[0] = 127;
    tab[1] = 131;
    tab[2] = 137;
    tab[3] = 141;
    tab[4] = 149;
    int ile, dlugosc, liczba;
    cin >> ile;
    while (ile--)
    {
        cin >> dlugosc;
        int *tablica = new int[dlugosc];
        for (int i = 0; i < ile; i++)
            cin >> tablica[i];
        for (int i = 0; i < 5; i++)
        {
            string napis;
            for (int j = 0; j < ile; j++)
            {
                if (tablica[j] % tab[i] > 90 || tablica[j] % tab[i] < 65)
                    break;
                else
                {
                    napis += tablica[j] % tab[i];
                    cout << napis;
                    if (ile == j - 1)
                    {
                        check = true;
                        napis2 = napis;
                    }
                }
                if (check == true)
                    break;
            }

            if (check == true)
                break;

        }
        if (check == true)
            cout << napis2 << endl;


    }
    return 0;
}
