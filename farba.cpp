#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double pb, pd;

    pb = ceil((a + b) * 2 * c / 5);
    //cout << pb << endl;
    pd = ceil(a * b / 3);
    cout << pb + pd << endl;
    return 0;
}
