#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c, wynik;
    cin >> a >> b >> c;
    a = round(100 * a) / 100;
    b = round(100 * b) / 100;
    c = round(100 * c) / 100;

    if (a == 0 && b == c)
        cout << "NWR" << endl;
    else if (a == 0 && b != c)
        cout << "BR" << endl;
    else
    {
        wynik = (c - b) / a * 100;
        wynik = round(wynik);
        wynik /= 100;
        cout.setf(ios::fixed);
        cout << fixed << setprecision(2) << wynik << endl;
    }
    return 0;
}