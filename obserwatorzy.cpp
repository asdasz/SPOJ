#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int osoby;
    cin >> osoby;
    int* tab = new int[osoby];

    int zapytania;


    for (int i = 0; i < osoby; i++)
    {
        cin >> tab[i];
    }

    cin >> zapytania;
    int zaslania;
    while (zapytania--)
    {
        cin >> zaslania;
        int a = tab[zaslania - 1];

        for (int i = zaslania-1; i < osoby; i++)
        {
            if (tab[i] > a)
            {
                cout << tab[i] << endl;
                break;
            }
            if(i+1==osoby)
                cout<<"nie ma"<<endl;
        }


    }

    return 0;
}