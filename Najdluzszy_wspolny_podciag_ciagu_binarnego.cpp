#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ciag;
    int m1, siz, ile, przod, tyl, max;
    int tests; cin >> tests;
    while (tests--)
    {
        przod = 0;
        tyl = 0;
        ile = 0;
        max = 0;
        cin >> siz >> m1 >> ciag;
        for (int i = 0; i < siz; i++)
        {
            przod++;        
            if (ciag[i] == '1')
                ile++;
            if(ile>m1)
                for (int j = tyl; j <= przod; j++)
                {
                    tyl++;
                    if (ciag[j] == '1')
                    {
                        ile--;
                        break;
                    }
                }
            if (przod - tyl > max)
                max = przod - tyl;

        }
        cout << max << endl;
    }
}

