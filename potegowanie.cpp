#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int wykladnik;
    int podstawa;
    int tab[3001];
    for (int i = 0; i < 3001; i++)
        tab[i] = 0;
    cin >> podstawa >> wykladnik;

    int j = 0;

    tab[0] = podstawa % 10;
    tab[1] = (podstawa / 10) % 10;
    tab[2] = (podstawa / 100) % 10;
    tab[3] = (podstawa / 1000) % 10;


    if (wykladnik == 0)
        cout << "1" << endl;

    else
    {
        for (int i = 0; i < wykladnik-1; i++)
        {
            for (int z = 0; z < (i + 1) * 4 && z<3000; z++)
                tab[z] *= podstawa;

            for (int z = 0; z <3000; z++)
            {
                while (tab[z] >= 1000)
                {
                    tab[z + 3]++;
                    tab[z] -= 1000;
                }
                while (tab[z] >= 100)
                {
                    tab[z + 2]++;
                    tab[z] -= 100;
                }
                while (tab[z] >= 10)
                {
                    tab[z + 1]++;
                    tab[z] -= 10;
                }
            }
        }

        int q = 3000;
        for (; tab[q] == 0; q--) {}

        for (; q >=0; q--)
            cout << tab[q];

    }
    cout << endl;
    return 0;
}
