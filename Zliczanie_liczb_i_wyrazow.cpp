#include <iostream>
#include <string>

using namespace std;

int main()
{
    string zdanie;
    int slowa, liczby, dlugosc, spacje;
    while (getline(cin, zdanie))
    {
        slowa = 0;        liczby = 0;        spacje = 0;
        dlugosc = zdanie.length();
        char *tab = new char[dlugosc];
        for (int i = 0; i < dlugosc; i++)
        {
            tab[i] = zdanie[i];
            if (tab[i] == ' ')
                spacje++;
        }        
        for (int i = 0; i < dlugosc; i++)
        {
            if (tab[i] > 47 && tab[i] < 58)
                liczby++;
            else
                slowa++;
            while (tab[i] != ' ' && i+1!=dlugosc)
                i++;
        }
        cout  << liczby << " " << slowa << endl;
    }
}

