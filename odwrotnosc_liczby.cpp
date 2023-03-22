#include <iostream>

using namespace std;


int main()
{
    long long int p, n, iloraz, pp, nn, dodaj;
    int ile;
    cin >> ile;

    while (ile--)
    {
        cin >> p >> n;
        iloraz = p / n;
        nn = n;
        pp = p;

        while (n - 1 != p)
        {
            if (n < p)
            {
                n += iloraz * nn;
            }
            if (n < p)
            {
                n += nn;
            }

            if ((n - 1) != p)
                p += pp;

            //cout << p << " " << n << endl;
        }
        cout << n / nn << endl;


    }






    return 0;
}

