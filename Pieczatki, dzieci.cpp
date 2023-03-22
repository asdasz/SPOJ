#include <iostream>
#include <math.h>

using namespace std;

int ilepiatek(long long int numer)
{
    int xd=0;
    int howManyDigits = (int)log10(numer) + 1;

    for (int i = 0; i < howManyDigits; i++)
    {
        if (numer % 10 == 5)
            xd++;
        numer /= 10;
    }
    return xd;
}

int main()
{
    long long int liczba, ile;
    while (cin >> liczba >> ile)

    {
        liczba++;

        if (ilepiatek(liczba) >= ile)
            cout << liczba << endl;

        else
        {
            long long int przypadek = 0, potega;
            while (ilepiatek(liczba) < ile)
            {        
                potega = pow(10, przypadek);
                while ((liczba / potega) % 10 != 5)
                {
                    if ((liczba / potega) % 10 == 0)
                        if (ilepiatek(liczba) >= ile)
                            break;

                    liczba += 1 * potega;
                }
                przypadek++;
            }
            cout << liczba << endl;
        }
    }
    return 0;
}
