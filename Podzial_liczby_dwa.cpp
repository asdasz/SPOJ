#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    int ile; cin >> ile;
    while (ile--)
    {
        int check = 1;
        long long int suma = 1, x, liczby, n=1;
        cin >> x;


        for (int i = 0; i <= 30; i++)
        {
            if (x == n)
            {
                check--;
                break;
            }
            else
                n *= 2;
        }


        for (int i = 2; (x+1) / 2 >= i&&check==1; i++)
        {
            if ((x + suma) % i == 0)
            {
                liczby = i;
                break;
            }


            suma += i;
        }
        if (check == 0)
            cout <<x<< " = BRAK" << endl;
        else
        {
            cout << x << " = ";
            for (int i = liczby; i != 0; i--)
            {
                if (i != 1)
                    cout << (x + suma) / liczby - i + 1 << " + ";
                else
                    cout << (x + suma) / liczby - i + 1 << endl;
            }
        }
    }
}

