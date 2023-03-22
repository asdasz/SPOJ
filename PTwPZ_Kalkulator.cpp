#include <iostream>
#include <string>
using namespace std;
int main()
{
    int ile;
    cin >> ile;
    while (ile--)
    {
        string dzialanie;
        cin >> dzialanie;
        int dlugosc = dzialanie.length();
        int* tab = new int((dlugosc - 1) / 2);


        int suma = dzialanie[0]-48;


        for (int i = 1; i <dlugosc; i++)
        {
            if (dzialanie[i] == '+')
            {
                i++;
                suma += (dzialanie[i]-48);
            }
            else
            {
                i++;
                suma -= (dzialanie[i]-48);
            }
        }
        cout << suma << endl;
    }
    return 0;
}