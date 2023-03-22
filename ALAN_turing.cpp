#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ile; cin >> ile;
    string tekst;
    while (ile--)
    {
        int odejmij, dlugosc;
        char znak;
        string instrukcja;
        cin >> instrukcja;
        
        if (instrukcja == "DODAJ")
        {
            cin >> znak;
            tekst.push_back(znak);
        }
        else if (instrukcja == "USUN")
        {
            cin >> odejmij;
            dlugosc = tekst.length();
            if (odejmij > dlugosc)
                tekst.clear();
            else
                for (int i = 0; i < odejmij; i++)
                    tekst.pop_back();
        }
        else if (instrukcja=="ZAMIEN")
        {
            cin >> znak;
            dlugosc = tekst.length();
            if (dlugosc != 0)
            {               
                tekst.pop_back();
                tekst.push_back(znak);
            }
        }
    }
    cout << tekst << endl;
    return 0;
}