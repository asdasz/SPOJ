#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a, b, p, q, check;
    int ile; cin >> ile;
    while (ile--)
    {
        cin >> a >> b >> p >> q;
        if (b > a)
        {
            double bufor = a;
            a = b;
            b = bufor;
        }
        if (q > p)
        {
            double bufor = p;
            p = q;
            q = bufor;
        }

        if (a >= p && b >= q)
            cout << "TAK\n";
        else if (a < p && b < q)
            cout << "NIE\n";
        else

        {
            check = (2 * p * q * a + (p * p - q * q) * sqrt(p * p + q * q - a * a)) / (p * p + q * q);
            if (p > a && b >= check)
                cout << "TAK\n";
            else
                cout << "NIE\n";
        }
    }
    return 0;
}