#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b && a < c)
        cout << "TAK 1" << endl;
    else if (b < a && b < c)
        cout << "TAK 2" << endl;
    else if (c < a && c < b)
        cout << "TAK 3" << endl;
    else
        cout << "NIE" << endl;
}