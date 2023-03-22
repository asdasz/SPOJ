#include <iostream>

using namespace std;
int main()
{
    int ile; cin >> ile;
    long long int x, y;
    while (ile--)
    {
        cin >> x >> y;
        if (y > x)
        {
            long long int bufor = x;
            x = y;
            y = bufor;
        }

        if (x == y)
            cout << "N" << endl;
        else if (y == 1)
            if (x % 2 == 0)
                cout << "P" << endl;
            else
                cout << "N" << endl;
        else cout << "P" << endl;
    }
}
