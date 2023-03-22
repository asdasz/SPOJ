#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    string tekst;
    cin >> tekst;

    for (int i = 0; i < tekst.size() - 2; i++)
    {
        if (tekst[i] == 's' && tekst[i + 1] == 't' && tekst[i + 2] == 'o')
        {
            cout << "TAK" << endl;
            break;
        }

        if (i == tekst.size() - 3)
            cout << "NIE" << endl;

    }
    return 0;
}

