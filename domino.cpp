#include <iostream>

using namespace std;

int main()
{
    int ile; cin >> ile;
    while (ile--)
    {
        int tab[7] = { 0,0,0,0,0,0,0 };
        for (int i = 0; i < 27; i++)
        {
            string domino;
            cin >> domino;
            
            if (domino[0]-48 == 0)
                tab[0]++;
            else if (domino[0] - 48 == 1)
                tab[1]++;
            else if (domino[0] - 48 == 2)
                tab[2]++;
            else if (domino[0] - 48 == 3)
                tab[3]++;
            else if (domino[0] - 48 == 4)
                tab[4]++;
            else if (domino[0] - 48 == 5)
                tab[5]++;
            else if (domino[0] - 48 == 6)
                tab[6]++;

            if (domino[2] - 48 == 0)
                tab[0]++;
            else if (domino[2] - 48 == 1)
                tab[1]++;
            else if (domino[2] - 48 == 2)
                tab[2]++;
            else if (domino[2] - 48 == 3)
                tab[3]++;
            else if (domino[2] - 48 == 4)
                tab[4]++;
            else if (domino[2] - 48 == 5)
                tab[5]++;
            else if (domino[2] - 48 == 6)
                tab[6]++;
        }
        //cout << tab[0] << " " << tab[1] << " " << tab[2] << " " << tab[3] << " " << tab[4] << " " << tab[5] << " " << tab[6] << " ";
        int suma = 54;
        for (int i = 0; i < 7; i++)
        {
            if (tab[i] < 8 && suma==54)
            {
                cout << i << "|";
                tab[i]++;
                suma++;
            }
            if (tab[i] < 8)
            {
                cout << i << endl;
                tab[i]++;
            }

        }

    }
}

