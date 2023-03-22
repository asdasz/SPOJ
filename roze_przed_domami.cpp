#include <iostream>

using namespace std;

int main()
{
    int a, b, c, x, y, z, xx, yy, zz, ile;
    cin >> ile;
    ile--;
    cin >> a >> b >> c;
    while (ile--)
    {
        cin >> x >> y >> z;
        if (b <= c)
            xx = x + b;
        else
            xx = x + c;

        if (a <= c)
            yy = y + a;
        else
            yy = y + c;

        if (a <= b)
            zz = z + a;
        else
            zz = z + b;


        a = xx;
        b = yy;
        c = zz;
    }
    if (a <= b && a <= c)
        cout << a << endl;
    else if (b <= a && b <= c)
        cout << b << endl;
    else
        cout << c << endl;
}

