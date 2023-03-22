#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ile; cin >> ile;
    string haslo;
    int liczba, mala, wielka, inne;
    ile++;
    while (ile--)
    {
        liczba = 0; mala = 0; wielka = 0; inne = 0;
        getline(cin, haslo);
        if (haslo.size() < 8)
            continue;

        for (int i = 0; i < haslo.size(); i++)
        {
            if (haslo[i] >= '0' && haslo[i] <= '9')
                liczba++;
            else if (haslo[i] >= 'a' && haslo[i] <= 'z')
                mala++;
            else if (haslo[i] >= 'A' && haslo[i] <= 'Z')
                wielka++;
            else
                inne++;
        }
        if (liczba * mala * wielka * inne != 0)
            cout << haslo << endl;

    }

    return 0;
}

