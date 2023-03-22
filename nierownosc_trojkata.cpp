#include <iostream>

using namespace std;
bool warunek(double x, double y, double z)
{   
    if ((x + y > z && x + z > y && y + z > x) && (x > 0 && y > 0 && z > 0)) return true;
    return false;
}
int main()
{
    double a, b, c;
    while (cin >> a >> b >> c)
        cout << warunek(a, b, c) << endl;
    return 0;
}
