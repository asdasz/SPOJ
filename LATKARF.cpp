#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;
    int ile; cin >> ile;
    while (ile--)
    {
        cin >> a >> b;
        if (a.size() > b.size())
        {
            for (int i = a.size()-1; i >=0; i--)
            {
                cout << a[i];
            }
            cout << endl;
            continue;
        }
        else if (b.size() > a.size())
        {
            for (int i = b.size() - 1; i >= 0; i--)
            {
                cout << b[i];
            }
            cout << endl;
            continue;
        }

        else
        {
            for (int i = a.size() - 1; i >= 0; i--)
            {
                if (a[i] > b[i])
                {
                    for (int i = a.size() - 1; i >= 0; i--)
                    {
                        cout << a[i];
                    }
                    cout << endl;
                    break;
                }
                else if (a[i] < b[i])
                {
                    for (int i = b.size() - 1; i >= 0; i--)
                    {
                        cout << b[i];
                    }
                    cout << endl;
                    break;
                }
                if (i == 0)
                    cout << a << endl;
            }
        }




    }
    return 0;
}

