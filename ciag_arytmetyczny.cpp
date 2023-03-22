#include <iostream>

using namespace std;

int main()
{
    int ile; cin >> ile; 
    while (ile--)
    {
        int size, obecny=1, najw= 0, roznica1=0, roznica2=0;
        
        cin >> size;
        int* tab = new int[size];
        if (size == 1)
        {
            int x; cin >> x;
            cout << 1 << endl;
            continue;
        }

        cin >> tab[0];

        for (int i = 1; i < size; i++)
        {
            cin >> tab[i];        
            roznica1 = tab[i] - tab[i - 1];

            if (roznica1 == roznica2 || i == 1)
                obecny++;
            else
                obecny = 2;

            if (obecny > najw)
                najw = obecny;

            roznica2 = roznica1;
        }

        cout << najw << endl;

    }        
    return 0;
}