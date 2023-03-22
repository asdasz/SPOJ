#include <iostream>

using namespace std;

int main()
{
    int ile;
    cin >> ile;
    while (ile--)
    {
        int liczba, licznik=0;
        cin >> liczba;
        for(;liczba!=1;)
        { 
            if (liczba % 2 == 1)
            {
                liczba = liczba * 3 + 1;
                licznik++;
            }
            else
            {
                liczba /= 2;
                licznik++;
            }
        }
        cout << licznik << endl;
    }
    return 0;
}