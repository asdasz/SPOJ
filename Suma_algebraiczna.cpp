#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ile; cin >> ile;
    ile++;
    string dzialanie;
    while (ile--)
    {
        getline(cin, dzialanie);

        for (int i = 0; i < dzialanie.size(); i++)
        {
            if (dzialanie[i] != '|')
                cout << dzialanie[i];
            else
            {
                if (i == 0)
                    dzialanie[i] = '(';
                else if (dzialanie[i - 1] == '+' || dzialanie[i - 1] == '-' || dzialanie[i - 1] == '(')
                    dzialanie[i] = '(';
                else
                    dzialanie[i] = ')';
                cout << dzialanie[i];
            }
        }
        cout << endl;
    }
}

