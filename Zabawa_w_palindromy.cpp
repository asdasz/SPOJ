#include <iostream>

using namespace std;

bool czy_pierwsza(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

bool czy_palindrom(string liczba)
{
    for (int i = 0; i <= (i < liczba.size() + 1) / 2; i++)
    {
        if (liczba[i] != liczba[liczba.size() - 1 - i])
            return false;
    }
    return true;
}

void increment_y(string* liczba)
{
    int dl = liczba->size();

    for (int i = dl - 1; i >= 0; i--)
    {
        (*liczba)[i]++;

        if ((*liczba)[i] != ':')
            break;
        else if (i != 0)
            (*liczba)[i] -= 10;
        else
        {
            (*liczba)[i] = '1';
            *liczba += '0';
        }
    }
}

void decrement_y(string* liczba)
{
    int dl = liczba->size();

    for (int i = dl - 1; i >= 0; i--)
    {
        (*liczba)[i]--;

        if ((*liczba)[i] != '/' && i != 0)
            break;

        else if (i != 0)       
            (*liczba)[i] += 10;
        
        else if(i==0 && (*liczba)[i]=='0')
                    liczba->erase(0, 1);
        
    }
}

void find_smaller(string liczba)
{
    int dlugosc = liczba.size();
    int zera = 0;
    if (liczba[0] == '1')
        for (int i = 0; i < dlugosc; i++)
        {
            if (liczba[i] == '0')
                zera++;
        }
    if (zera + 1 == dlugosc && dlugosc>1)
    {
        decrement_y(&liczba);
        cout << liczba << endl;
    }
    else
    {
        string a, b, c, reva, revb;
        if (dlugosc % 2 == 1)
            c = liczba[dlugosc / 2];

        for (int i = 0; i < dlugosc / 2; i++)
            a += liczba[i];
        for (int i = a.size(); i >= 0; i--)
            reva += a[i];
        for (int i = (dlugosc + 1) / 2; i < dlugosc; i++)
            b += liczba[i];
        for (int i = b.size(); i >= 0; i--)
            revb += b[i];
        cout << a << c << b << endl << reva << " " << b << endl;
        for (int i = 0; i < a.size(); i++)
        {
            if (reva[i] < b[i])
            {
                cout << "reva<b" << endl;
                cout << a << c << reva << endl;
                break;
            }
            else if(reva[i]>b[i])
                if (dlugosc % 2 == 1 && c[0] != '0')
                {
                    c[0]--;
                    cout << "dlugosc%2==1 && c[0]!='0'";
                    cout << a << c << reva << endl;
                    break;
                }
                else if (dlugosc % 2 == 1 && c[0] == '0')
                {
                    c[0] = '9';
                    decrement_y(&a);
                    for (int i = a.size(); i >= 0; i--)
                        reva += a[i];
                    cout << a << c << reva << endl;
                    break;
                }

        }
    }

}

void find_bigger(string liczba)
{
    int dlugosc = liczba.size();
    string a, b, c;
    if (dlugosc % 2 == 1)
        c = liczba[dlugosc / 2];

    for (int i = (dlugosc / 2 - 1); i >= 0; i--)
        a += liczba[i];
    for (int i = (dlugosc + 1) / 2; i < (dlugosc); i++)
        b += liczba[i];




    cout << a << c << b << endl;
}

int main()
{
    int x;
    string y;
    while (cin >> x >> y)
    {
        if (czy_pierwsza(x) == true)
        {
            increment_y(&y);
            if (czy_palindrom(y) != true)
                find_bigger(y);
            else
                cout << y << endl;
        }
        else
        { 
            decrement_y(&y);
            if (czy_palindrom(y) != true)
                find_smaller(y);
            else
                cout << y << endl;
        }

    }
    return 0;
}