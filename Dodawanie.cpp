#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ile; cin >> ile;
    while (ile--)
    {
        string liczba1, liczba2;
        cin >> liczba1 >> liczba2;

        int dlugosc1 = liczba1.length();
        int dlugosc2 = liczba2.length();

        int* tab1 = new int[dlugosc1];
        int* tab2 = new int[dlugosc2];

        for (int i = 0; i < dlugosc1; i++)
            tab1[i] = liczba1[i]-48;
        for (int i = 0; i < dlugosc2; i++)
            tab2[i] = liczba2[i]-48;

        if (dlugosc2 > dlugosc1)
        {
            int q2 = dlugosc2 - 1;
            for ( int j = dlugosc1 - 1; j >= 0; q2--, j--)
            {
                    tab2[q2] += tab1[j];
                    if (tab2[q2] >= 10 && q2!=0)
                    {
                        tab2[q2] -= 10;
                        tab2[q2 - 1]++;
                    }
            }
            for (int i = 0; i < dlugosc2; i++)
                cout << tab2[i];

        }
        else
        {
            int q1 = dlugosc1 - 1;
            for (int i = dlugosc2 - 1; i >= 0; i--, q1--)
            {
                tab1[q1] += tab2[i];
                if (tab1[q1] >= 10 && q1 != 0)
                {
                    tab1[q1] -= 10;
                    tab1[q1 - 1]++;
                }
            }
            for (int i = 0; i < dlugosc1; i++)
                cout << tab1[i];
        }


        cout << endl;
        delete[]tab2;
        delete[]tab1;
    }
    return 0;
}
