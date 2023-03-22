#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ile; cin >> ile;
    while (ile--)
    {
        int suma = 0, parz=0, niep=0;
        string liczba;
        cin >> liczba;
        int dlugosc = liczba.length();
        for (int i = 0; i < dlugosc; i+=2)        
            parz += liczba[i] - 48;

        for (int i = 1; i < dlugosc; i+=2)      
            niep += liczba[i] - 48;

        suma = parz + niep;

        if (suma % 6 == 0)
            cout << "TAK ";
        else
            cout << "NIE ";

        if((parz-niep)%8==0)
            cout << "TAK ";
        else
            cout << "NIE ";

        if (dlugosc >= 4)
        {
            if (liczba[dlugosc - 3] + liczba[dlugosc - 2] + liczba[dlugosc - 1] == 144)
                cout << "TAK " << endl;
            else
                cout << "NIE " << endl;
        }
        else if (dlugosc == 1 && liczba[dlugosc - 1] - 48 == 0)
            cout << "TAK" << endl;
        else
        cout << "NIE" << endl;



    }
}

