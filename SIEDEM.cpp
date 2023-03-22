#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ile; cin >> ile;
    while (ile--)
    {
        string liczba;
        cin >> liczba;
        int dl = liczba.size();
        int zera = 0;
        for (int i = dl - 1; i >= 0; i--)
        {
            if (liczba[i] == '0')
                zera++;
            else
                break;
        }
        cout << zera << endl;
    }
}