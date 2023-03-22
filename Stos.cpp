#include <iostream>

using namespace std;

int main()
{
    int tab[10], i = 0, liczba;
    char znak;
    while (cin >> znak)
    {
        switch (znak)
        {
        case '+':
        {
            cin >> liczba;
            if (i < 10)
            {
                tab[i] = liczba;
                i++;
                cout << ":)" << endl;
            }
            else
                cout << ":(" << endl;
            break;
        }
        case '-':
        {
            if (i == 0)
                cout << ":(" << endl;
            else
            {
                i--;
                cout << tab[i] << endl;
            }
            break;
        }
        }

    }
}
