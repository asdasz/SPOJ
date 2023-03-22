#include <iostream>

using namespace std;

int main()
{
    int ile; cin >> ile;
    while (ile--)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        char znak[501];
        long long int liczba[501];
        int j = 0;
        for (int i = 0; znak[i - 1] != '='; i++)
        {
            cin >> liczba[i] >> znak[i];
        }
        int ileniep = 0;

        for (int i = 0;; i++)
        {
            if (znak[i] == '*')
            {
                if (liczba[i] % 2 == 0)
                    liczba[i + 1] *= 2;
            }

            else if (znak[i] == '+' || znak[i] == '-')
                if (liczba[i] % 2 == 1)
                    ileniep++;
                else {}
            else if (liczba[i] % 2 == 1 && znak[i] == '=')
            {
                ileniep++;
                break;
            }
            else
                break;
            //________________________________________           
        }
        
        if (ileniep % 2 == 0)
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }   
}