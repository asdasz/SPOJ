#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int testy; cin >> testy;
    while (testy--)
    {
        long double x, y, polowa_sumy, roznica, h, pole;
        cin >> x >> y;
        roznica = abs(x - y) / 2;
        polowa_sumy = (x + y) / 2;

        h = sqrt(polowa_sumy * polowa_sumy - roznica * roznica);
        pole = (x + y) * h / 2;

        cout << fixed << setprecision(2) << pole << "\n";
    }
    return 0;
}
