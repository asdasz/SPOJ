#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int ile; cin >> ile;

    long long int pole;

    while (ile--)
    {
        int i = 2;
        cin >> pole;
        long long int wszystkie[2];
        wszystkie[0] = 0;
        wszystkie[1] = 0;
        wszystkie[0] += sqrt(pole);
        if (pole > 1)
        {
            wszystkie[0] += (pole - 1) * 2;
            if (wszystkie[0] > 100000000)
            {
                wszystkie[1] += wszystkie[0] / 100000000;
                wszystkie[0] -= wszystkie[1] * 100000000;
            }
        }


        for (long long int i = 2; i * i + i <= pole; i++)
        {
            long long int k = 0;
            //cout << wszystkie[0] << endl;
            k = (pole - i * i) / i;
            k *= 2;
            wszystkie[0] += k;
            if (wszystkie[0] > 100000000)
            {
                long long int z = wszystkie[0] / 100000000;
                wszystkie[1] += z;
                wszystkie[0] -= z * 100000000;
            }
        }

        if (wszystkie[1] > 0)
        {
            cout << wszystkie[1];
            if (wszystkie[0] < 10000000) cout << 0;
            if (wszystkie[0] < 1000000) cout << 0;
            if (wszystkie[0] < 100000) cout << 0;
            if (wszystkie[0] < 10000) cout << 0;
            if (wszystkie[0] < 1000) cout << 0;
            if (wszystkie[0] < 100) cout << 0;
            if (wszystkie[0] < 10) cout << 0;
            if (wszystkie[0] < 1) cout << 0;
        }
        cout << wszystkie[0] << endl;
    }
    return 0;
}

