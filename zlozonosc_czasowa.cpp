#include <iostream>

using namespace std;

int main()
{
    int ile; cin >> ile;
    string txt;
    int licznik = 0, maks = 0;
    while (ile--)
    {
        cin >> txt;
        if (txt == "for")
            licznik++;
        else if (txt == "end")
            licznik--;

        if (maks < licznik)
            maks = licznik;
    }
    cout << "O(";
    if (maks == 0)
        cout << "1";
    else if (maks == 1)
        cout << "n";
    else
        cout << "n^" << maks;
    cout << ")";

    return 0;
}
