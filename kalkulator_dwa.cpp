#include <iostream>

using namespace std;

int main()
{
    char znak;
    int a, b;
    int rej[10];
    while (cin >> znak >> a >> b)
    {
        if (znak == 'z') rej[a] = b;
        else if (znak == '+') cout << rej[a] + rej[b];
        else if (znak == '-') cout << rej[a] - rej[b];
        else if (znak == '*') cout << rej[a] * rej[b];
        else if (znak == '/') cout << rej[a] / rej[b];
        else if (znak == '%') cout << rej[a] % rej[b];
        cout << endl;
    }
    return 0;
}