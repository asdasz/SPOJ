#include <iostream>

using namespace std;

int main()
{
    int ile; cin >> ile;
    while (ile--)
    {
        int liczba_godzin, maxpoprawnych = 0, ktoremanajwiecejpoprawnych;
        cin >> liczba_godzin;
        int* tab = new int[liczba_godzin];

        for (int i = 0; i < liczba_godzin; i++)
            cin >> tab[i];

        for (int i = 0; i < liczba_godzin; i++)
        {
            int bufor = tab[0], ilepoprawnych = 0;
            for(int j=0; j<liczba_godzin; j++)
                if (tab[j] == j + 1)
                    ilepoprawnych++;
            if (maxpoprawnych < ilepoprawnych)
            {
                maxpoprawnych = ilepoprawnych;
                ktoremanajwiecejpoprawnych = i;
            }

            for (int j = 0; j < liczba_godzin; j++)
            {
                
                if (j + 1 < liczba_godzin)
                    tab[j] = tab[j + 1];
                else
                    tab[j] = bufor;
            }
        }

        for (int i = 0; i<liczba_godzin; i++)
        {
            if (i + ktoremanajwiecejpoprawnych >= liczba_godzin)
                cout << tab[i + ktoremanajwiecejpoprawnych - liczba_godzin] << " ";
            else
                cout << tab[i + ktoremanajwiecejpoprawnych] << " ";


        }
        cout << endl;

    }
    return 0;
}

