#include <iostream>
using namespace std;

int main()
{
    long long int a=0, b=0, c;
    while (cin >> c && c)
    {
        if (c > b &&(c<a ||c>a))
        {
            b += c;
            c = b - c;
            b -= c;
        }
        if (b >= a)
        {
            a += b;
            b = a - b;
            a -= b;
        }
        cout << a << " " << b << " " << c << endl;
    }
    if (b != 0)
        cout << b << endl;
    else cout << a << endl;
}
