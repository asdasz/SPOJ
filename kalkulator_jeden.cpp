#include <iostream>

using namespace std;

int main()
{
    char znak;
    while (cin >> znak)
    {
        switch (znak)
        {
        case '+':
        {
            int x, y;
            cin >> x >> y;
            cout << x + y << endl;
            break;
        }
        case '-':
        {
            int x, y;
            cin >> x >> y;
            cout << x - y << endl;
            break;
        }
        case '*':
        {
            int x, y;
            cin >> x >> y;
            cout << x * y << endl;
            break;
        }
        case '/':
        {
            int x, y;
            cin >> x >> y;
            cout << x / y << endl;
            break;
        }
        case '%':
        {
            int x, y;
            cin >> x >> y;
            cout << x % y << endl;
            break;
        }
        default:
            break;
        }
    }
}

