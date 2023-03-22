#include <iostream>

using namespace std;

int main()
{
    int* tab = new int[43];
    tab[0] = 2;
    tab[1] = 3;
    for (int i = 2; i < 43; i++)
        tab[i] = tab[i - 1] + tab[i - 2];   //ciąg fibonacciego

    int ile; cin >> ile;
    int dl, liczba;
    while (ile--)
    {
        cin >> dl >> liczba;
        string x = "";
        if (liczba > tab[dl-1])
        {
            cout << "-1" << endl;
            continue;
        }

        for (int i = 0; i < dl; i++)
        {
            if (i == dl - 1 && liczba == 1)
            {
                cout << 0;
                break;
            }
            else if (i == dl - 1 && liczba == 2)
            {             
                cout << 1; 
                break;
            }
            if (liczba > tab[dl - 2 - i])
            {
                cout << 1;
                liczba -= tab[dl - 2 - i];
            }
            else
                cout << 0;
        }
        cout << endl;
    }
    delete[]tab;
    return 0;
}