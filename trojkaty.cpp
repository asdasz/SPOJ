
#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x; cin >> x;
    unsigned long long int wielkosc;
    while (x--)
    {
        cin >> wielkosc;
        long long int a = ((wielkosc + 2)%80808), b = ((2 * wielkosc + 1)%80808), c = wielkosc%80808;
        long long int ilosc_trojkatow = 0;     
        ilosc_trojkatow = a * b;
        ilosc_trojkatow = ilosc_trojkatow % 80808;
        ilosc_trojkatow *= c;
        ilosc_trojkatow = ilosc_trojkatow % 80808;
        ilosc_trojkatow /= 8;

        cout << ilosc_trojkatow << "\n";
    }
}


/*
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x; cin >> x;
    unsigned long long int wielkosc;
    while (x--)
    {
        cin >> wielkosc; wielkosc = wielkosc % 10101;
        long long int ilosc_trojkatow = 0, a, b=0;
        a = wielkosc * (wielkosc + 1) * (wielkosc + 2) / 6;
        cout << a << " ";
        if (wielkosc % 2 == 0)
        {
            wielkosc /= 2;
            b = (wielkosc * (wielkosc + 1) * (4 * wielkosc - 1)) / 6;

        }
        else
        {
            wielkosc--; wielkosc /= 2;
            b = (wielkosc * (wielkosc + 1) * (4 * wielkosc + 5)) / 6;

        }
        cout << b << endl;
        ilosc_trojkatow = (a + b) % 10101;
        cout << ilosc_trojkatow << "\n";
    }
}
*/