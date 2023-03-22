#include <iostream>

using namespace std;

unsigned long long int NWD(unsigned long long int a, unsigned long long int b)
{
    unsigned long long int pom;

    while (b != 0)
    {
        pom = b;
        b = a % b;
        a = pom;
    }
    return a;
}
unsigned long long int NWW(unsigned long long int a, unsigned long long int b)
{
    a = a*b/ (NWD(a, b));
    return a;
}



int main()
{
    unsigned long long int a, b, c, d, e, odl;

    cin >> a >> b >> c >> odl;
    d = NWW(NWW(a, b),c);
    //cout << d << endl;
    odl *= 100;
    odl /= d;
    cout << odl << endl;

    return 0;
}

