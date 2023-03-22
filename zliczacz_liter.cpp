#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int znaki[256];

void liczenie(string napis)
{
    for (int i = 0; i < napis.length(); i++)
    {
        if (napis[i] != ' ')
        {
            znaki[int(napis[i])]++; // rzutowanie na typ int ilosci pojedynczych znakow
        }
    }
}

int main()
{
    int ile;
    cin >> ile;
    cin.ignore(); // usuwanie znaki \n z bufora
    while (ile--)
    {
        string napis;
        getline(cin, napis);
        liczenie(napis);
    }
    for (int i = 97; i <= 122; i++) //ascii
    {
        if (znaki[i] != 0)
        {
            cout << char(i) << " " << znaki[i] << endl; // rzutowanie na char liter
        }
    }
    for (int i = 65; i <= 90; i++) //ascii
    {
        if (znaki[i] != 0)
        {
            cout << char(i) << " " << znaki[i] << endl;
        }
    }
    return 0;
}