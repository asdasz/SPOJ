#include <iostream>

using namespace std;
int main()
{
    string znaki;
    cin >> znaki;
    int dlugosc = znaki.length();
    int oceny = 0;
    int tab[40];
    int j = 0;
    for (int i = 0; i < dlugosc; i++)
    {
        if (znaki[i] == '+')
            oceny++;
        else
            oceny--;

        if (oceny == 3)
        {
            tab[j] = 5;
            j++;
            oceny = 0;
        }
        else if (oceny == (-3))
        {
            tab[j] = 1;
            j++;
            oceny = 0;
        }

    }
    for (int i = 0; i < j; i++)
        cout << tab[i] << " ";
    if (j == 0)
        cout << "BRAK<<" << endl;
}