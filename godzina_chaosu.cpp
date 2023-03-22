#include <iostream>
using namespace std;

int main()
{
    int ile; cin >> ile;
    while (ile--)
    {
        char godzina_poczatkowa[5];
        cin >> godzina_poczatkowa;
        int tab[4];
        tab[0] = godzina_poczatkowa[0] - 48;
        tab[1] = godzina_poczatkowa[1] - 48;
        tab[2] = godzina_poczatkowa[3] - 48;
        tab[3] = godzina_poczatkowa[4] - 48;


        do
        {
            tab[3]++;
            if (tab[3] == 10)
            {
                tab[3] -= 10;
                tab[2]++;
            }
            if (tab[2] == 6)
            {
                tab[2] -= 6;
                tab[1]++;
            }
            if (tab[1] == 10)
            {
                tab[1] -= 10;
                tab[0]++;
            }
            if (tab[0] == 2 && tab[1]==4)
            {
                tab[0] -= 2;
                tab[1] -= 4;
            }
                
        } while (!((tab[0] == 0 && tab[1] == 0 && tab[2] == 0) || (tab[0] == 0 && tab[1] == 0 && tab[2] == tab[3]) || (tab[0] == 0 && tab[1] != 0 && tab[1] == tab[3]) || (tab[0] != 0 && tab[0] == tab[3] && tab[1] == tab[2])));

        cout << tab[0] << tab[1] << ":" << tab[2] << tab[3] << endl;


    }
    return 0;
}
