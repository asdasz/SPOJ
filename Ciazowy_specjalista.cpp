#include <iostream>
#include <math.h>

using namespace std;



int main()
{
    int ile;
    cin >> ile;
    while (ile--)
    {
        double x, y, z, ciaza;
        cin >> x >> y >> z;

        ciaza = (z * y - x - y) / (z - 1) * 12;
        ciaza = round(ciaza);

        cout << ciaza << endl;

    }
    return 0;
}

