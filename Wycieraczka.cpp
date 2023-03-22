#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, r, suma = 0, p, q;
    cin >> a >> r;
    int ile;
    cin >> ile;
    while (ile--)
    {
        cin >> p >> q;

        if ((p - a) * (p - a) + q * q > r * r)       
            suma++;      
    }
    cout << suma << endl;
    return 0;
}