#include <iostream>
#include <string>

using namespace std;

int main()
{
    string tekst;
    while (cin>>tekst)
    {
        int dlugosc = tekst.length();
        for (int i = dlugosc; i > 0; i--)
        {
            cout << tekst[i-1];
        }
        cout << endl;
    }
    return 0;
}