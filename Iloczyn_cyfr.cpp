#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ile; cin >> ile;

    long long int liczba;
    int dwojki, trojki, piatki, siodemki, szostki;

    while (ile--)
    {
        cin >> liczba;
        if (liczba == 1)
        {
            cout << 1 << "\n";
            continue;
        }
        if (liczba == 0)
        {
            cout << "10\n";
            continue;
        }
        dwojki = 0;
        trojki = 0;
        piatki = 0;
        szostki = 0;
        siodemki = 0;


        while (liczba % 2 == 0)
        {
            liczba /= 2;
            dwojki++;
        }
        while (liczba % 3 == 0)
        {
            liczba /= 3;
            trojki++;
        }
        while (liczba % 5 == 0)
        {
            liczba /= 5;
            piatki++;
        }
        while (liczba % 7 == 0)
        {
            liczba /= 7;
            siodemki++;
        }
        if (liczba != 1)
            cout << "NIE" << endl;
        else
        {
            if (dwojki % 3 != 0 && trojki % 2 == 1)
            {
                szostki++;
                dwojki--;
                trojki--;
            }

            if (dwojki % 3 == 1)
            {
                dwojki--;
                cout << 2;
            }
            if (trojki % 2 == 1)
            {
                trojki--;
                cout << 3;
            }
            if (dwojki % 3 == 2)
            {
                dwojki -= 2;
                cout << 4;
            }
            while (piatki--)
                cout << 5;
            if (szostki == 1)
                cout << 6;
            while (siodemki--)
                cout << 7;
            while (dwojki > 0)
            {
                dwojki -= 3;
                cout << 8;
            }
            while (trojki > 0)
            {
                trojki -= 2;
                cout << 9;
            }
            cout << endl;
        }


    }

    return 0;
}

