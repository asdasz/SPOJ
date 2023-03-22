#include <iostream>
using namespace std;

int main()
{
    char x;
    int punkty = 0, ilewypisanych = 0;

    while (cin >> x)
    {
        if (x == '+')
            punkty++;
        else
            punkty--;
    }
    
    if (punkty >= 3)
        for (; punkty >= 3; punkty -= 3)
            cout << "5 ";
    else if (punkty <= -3)
        for (; punkty <= -3; punkty += 3)
            cout << "1 ";
    else
        cout << "BRAK ";
    cout << endl;

    return 0;
}

