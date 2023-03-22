#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{

    long long int a, b, c, roznica;

    cin >> a >> b >> c;

    roznica = abs(a - b);
    if (c < roznica)
    {
        if (a < b)
            cout <<2* a << endl;
        else
            cout <<2*b << endl;
    }

    else
    {
        if (a < b)
        {
            b -= roznica;
            c -= roznica;
            if (c % 2 == 0)
            {
                cout << 2 * a - c << endl;
            }
            else
                cout << 2 * a - c - 1 << endl;
        }
        else
        {
            a -= roznica;
            c -= roznica;
            if (c % 2 == 0)
            {
                cout << 2 * a - c << endl;
            }
            else
                cout << 2 * a - c - 1 << endl;

        }

    }


}

