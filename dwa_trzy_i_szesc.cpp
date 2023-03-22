/*
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
            cout << "a";
        if (i % 3 == 0)
            cout << "b";
    }
    return 0;
}
*/
//_________________________________________________________________// hard

#include <iostream>
#include <string>

using namespace std;

bool czy_wystepuje(string tekst, string tabl, int dlug)
{
    int punkty = 0;
    if ((tekst[dlug - 2] == 'a' && tekst[dlug - 1] == 'a') || (tekst[0] == 'b' && tekst[2] == 'b'))
        return false;

        for (int i = 0; i < dlug; i++)
            if (tekst[i] == tabl[i])
                punkty++;
        if (punkty == dlug)
            return true;
        else
            punkty = 0;

        for (int i = 1; i < dlug + 1; i++)
            if (tekst[i - 1] == tabl[i])
                punkty++;
    if (punkty == dlug)
        return true;
    else
        punkty = 0;

    for (int i = 2; i < dlug + 2; i++)
        if (tekst[i - 2] == tabl[i])
            punkty++;
    if (punkty == dlug)
        return true;
    else
        punkty = 0;

    for (int i = 3; i < dlug + 3; i++)
        if (tekst[i - 3] == tabl[i])
            punkty++;
    if (punkty == dlug)
        return true;
    else
        punkty = 0;

    for (int i = 4; i < dlug + 4; i++)
        if (tekst[i - 4] == tabl[i])
            punkty++;
    if (punkty == dlug)
        return true;
    else
        return false;
}

int main()
{
    int ile; cin >> ile;

    while (ile--)
    {
        string wynik="abaab";
        string tab = "abaab";

        for (int i = 0; i < 201; i++)
        {
            tab = tab+wynik;
        }

        //cout << tab;


        string znaki;
        cin >> znaki;

        int dlugosc = znaki.length();


        bool czy_wystepuje(string znaki, string tab, int dlugosc);

        if (czy_wystepuje(znaki, tab, dlugosc) == false)
            cout << "nie" << endl;
        else
            cout << "tak" << endl;


    }
    return 0;
}