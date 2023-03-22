#include <iostream>
using namespace std;

void wpisz(int* tablica, int ile);
void wypiszp(int* tablica, int ile);
void wypiszn(int* tablica, int ile);

int main()
{
    int powt;
    cin >> powt;
    while (powt--)
    {
        int ile;
        cin >> ile;
        int* tablica = new int[ile];
        wpisz(tablica, ile);
        wypiszp(tablica, ile);
        wypiszn(tablica, ile);
    }
    return 0;
}

void wpisz(int *tab, int x)
{
    for (int i = 0; i < x; i++)
        cin >> tab[i];
}
void wypiszp(int* tab, int x)
{
    for (int i = 1; i < x; i+=2)
        cout << tab[i] << endl;
}
void wypiszn(int* tab, int x)
{
    for (int i = 0; i < x; i+=2)
        cout << tab[i] << endl;
}