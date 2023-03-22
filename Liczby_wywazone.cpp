#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ile;
    cin >> ile;
    while (ile--)
    {
        string liczba;
        int nowaliczba = 0;
        // int dlugosca = liczba.length();
        cin >> liczba;
        int dlugosc = liczba.length();
        if (dlugosc == 1)
        {
            if (liczba == "1")
                cout << "2";
            else if (liczba == "2" || liczba == "3" || liczba == "4" || liczba == "5")
                cout << "6";
            else
                cout << "10";
        }
        else
        {
            int* tab = new int[dlugosc];

            for (int i = 0; i < dlugosc; i++)
                tab[i] = liczba[i] - 48;
            nowaliczba = 10 * tab[dlugosc - 2] + tab[dlugosc - 1];

            if (nowaliczba % 4 == 0)
                nowaliczba += 2;
            else if (nowaliczba % 4 == 1)
                nowaliczba++;
            else if (nowaliczba % 4 == 2)
                nowaliczba += 4;
            else
                nowaliczba += 3;
            //        cout<<nowaliczba<<endl;
            tab[dlugosc - 1] = nowaliczba % 10;
            tab[dlugosc - 2] = nowaliczba / 10;

            for (int i = dlugosc - 1; i >= 0; i--)
            {
                if (tab[i] == 10 && i != 0)
                {
                    tab[i] -= 10;
                    tab[i - 1]++;
                }
            }
            for (int i = 0; i < dlugosc; i++)
                cout << tab[i];
            delete[]tab;
        }
        cout << endl;

    }



    return 0;
}
