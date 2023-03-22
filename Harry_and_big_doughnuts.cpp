#include <iostream>

using namespace std;

int main()
{
    int ile;
    cin >> ile;
    while (ile--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x * z <= y)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }

    return 0;
}

