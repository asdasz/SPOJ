#include <iostream>

using namespace std;

int main()
{
    int liczby[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> liczby[i];
        switch (liczby[i])
        {
        case 0:                 cout << "0"; break;
        case 1:                 cout << "1"; break;
        case 10:                cout << "2"; break;
        case 11:                cout << "3"; break;
        case 100:               cout << "4"; break;
        case 101:               cout << "5"; break;
        case 110:               cout << "6"; break;
        case 111:               cout << "7"; break;
        case 1000:              cout << "8"; break;
        case 1001:              cout << "9"; break;
        }
        if (i == 1)
            cout << ":";
    }
    cout << endl;
    return 0;
}
