#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m; cin >> m;
    while (m--)
    {
        long long int dlugosc, szerokosc, poczatkowy_podatek, koncowy_podatek, roznicapodatku, a, b, c;
        cin >> dlugosc >> szerokosc >> poczatkowy_podatek >> koncowy_podatek;
        roznicapodatku = koncowy_podatek - poczatkowy_podatek;

        a = 100 - koncowy_podatek;
        b = (100 * (dlugosc + szerokosc) - (dlugosc + szerokosc) * (koncowy_podatek));
        c = roznicapodatku * dlugosc * szerokosc;
        long long int delta = (b * b + 4 * a * c);
        long double pierw_delta;
        //cout << a<<" " << b<<" " << c << endl;
        //cout << delta << endl;
        pierw_delta = sqrt(delta);
        long double wynik;

        wynik = (pierw_delta - b) / (2 * a);

        cout << fixed;
        cout << setprecision(4) << wynik << endl;


    }

    return 0;
}

