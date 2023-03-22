#include <iostream>
#include <string>

using namespace std;

int main()
{
    string tekst;
    cin >> tekst;
    int dl = tekst.size();
    int ile = 0;
    int k=0, o=0, t=0;
    for (int i = 0; i < dl; i++)
    {
        if (k == o && k == t)
            if (tekst[i] == 'k')
                k++;
            else {}
        else if (k - 1 == o && o == t)
            if (tekst[i] == 'o')
                o++;
            else {}
        else if (k - 1 == t && o - 1 == t)
        {
            if (tekst[i] == 't')
            {
                t++;
                ile++;
            }
            else {}
        }
    }
    if (ile == 0)
        cout << "NIE" << endl;
    else
        cout << ile << endl;
}