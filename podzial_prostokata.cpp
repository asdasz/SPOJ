#include <iostream>
#include <math.h>
using namespace std;

unsigned long long int NWD(unsigned long long int a, unsigned long long int b)
{
    while (a != b)
        if (a > b)
            a -= b;
        else
            b -= a;
    return a;
}

bool is_square(unsigned long long int a)
{
    for (unsigned long long int i = 1; i < 35000; i++)
    {
        if (a == i * i)
            return true;
        if (i == 34999)
            return false;
    }



}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ile; cin >> ile;
    unsigned long long int liczba1, liczba2;

    while (ile--)
    {
        cin >> liczba1 >> liczba2;
        unsigned long long int c = (NWD(liczba1, liczba2));
        liczba1 /= c;
        liczba2 /= c;

        if (liczba1 == liczba2)
        {
            cout << "TAK" << endl;
            continue;
        }
        else if (liczba1 > liczba2)
        {

            if (liczba2 * 4 < liczba1)
            {
                cout << "NIE" << endl;
                continue;
            }
        }
        else
        {
            if (liczba1 * 4 < liczba2)
            {
                cout << "NIE" << endl;
                continue;
            }
        }




        if (is_square(liczba1) == true && is_square(liczba2) == true)
        {
            if (abs(sqrt(liczba1) - sqrt(liczba2)) == 1)
            {
                cout << "TAK" << endl;
                continue;
            }
            else 
            {
                cout << "NIE" << endl;
                continue;
            }
        }
        else
        {
            cout << "NIE" << endl;
            continue;
        }



    }
    return 0;
}