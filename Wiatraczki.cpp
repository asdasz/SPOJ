#include <iostream>
using namespace std;

int main()
{
    char wiatraczek[401][401];
    int x;
    while (cin >> x)
    {
        if (x < 0)
        {
            x = (-1) * x;

            for (int i = 0; i < 2 * x; i++)
            {
                for (int j = 0; j < 2 * x; j++)
                {
                    wiatraczek[i][j] = '.';

                    if ((i < x && j < x && i <= j)
                        ||
                        (i < x && j >= x && i + j >= 2 * x - 1)
                        ||
                        (i >= x && j >= x && i >= j)
                        ||
                        (i >= x && j <= x && i + j <= 2 * x - 1))
                        wiatraczek[i][j] = '*';


                    cout << wiatraczek[i][j];
                }
                cout << endl;
            }
        }
        else
            for (int i = 0; i < 2 * x; i++)
            {
                for (int j = 0; j < 2 * x; j++)
                {
                    wiatraczek[i][j] = '.';

                    if ((i < x && j < x && i >= j)
                        ||
                        (i < x && j >= x && i + j <= 2 * x - 1)
                        ||
                        (i >= x && j >= x && i <= j)
                        ||
                        (i >= x && j < x && i + j >= 2 * x - 1))
                        wiatraczek[i][j] = '*';


                    cout << wiatraczek[i][j];
                }
                cout << endl;
            }
    }
    return 0;
}