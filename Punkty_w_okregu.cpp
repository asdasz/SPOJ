#include <iostream>

using namespace std;

int main()
{
    int x, y, r, a, b, ile;
    cin >> x >> y >> r >> ile;
    while (ile--)
    {
        cin >> a >> b;
        if ((x - a) * (x - a) + (y - b) * (y - b) > r * r)
            cout << "O\n";
        else if ((x - a) * (x - a) + (y - b) * (y - b) == r * r)
            cout << "E\n";
        else
            cout << "I\n";
    }
    return 0;
}