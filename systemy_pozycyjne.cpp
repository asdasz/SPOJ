#include <iostream>

using namespace std;

void convert_eleven(int x);

void convert_sixteen(int x);

int main()
{
    int ileee; cin >> ileee;
    while (ileee--)
    {
        int liczba;
        cin >> liczba;
        convert_sixteen(liczba);
        convert_eleven(liczba);
    }
    return 0;
}

void convert_eleven(int x)
{
    int ile;
    char tab[10];

    for (ile = 0; x != 0; ile++)
    {
        if (x % 11 == 10)       
            tab[ile] = char(65);
        else
            tab[ile] = char(x%11+48);
        x -= x % 11;
        x /= 11;
    }

    for (ile-1; ile > 0; ile--)
        cout << tab[ile-1];
    cout << endl;
}


void convert_sixteen(int x)
{
    int ile;
    char tab[10];

    for (ile = 0; x != 0; ile++)
    {
        if (x % 16 == 10)
            tab[ile] = char(65);
        else if(x % 16 == 11)
            tab[ile] = char(66);

        else if (x % 16 == 12)
            tab[ile] = char(67);

        else if (x % 16 == 13)
            tab[ile] = char(68);

        else if (x % 16 == 14)
            tab[ile] = char(69);

        else if (x % 16 == 15)
            tab[ile] = char(70);

        else
            tab[ile] = char(x % 16 + 48);

        x -= x % 16;
        x /= 16;
    }

    for (ile - 1; ile > 0; ile--)
        cout << tab[ile - 1];
    cout << " ";
}