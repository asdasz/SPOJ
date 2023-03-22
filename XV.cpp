#include <iostream>
#include <string>

using namespace std;

int main()
{
    string liczba;
    while (cin >> liczba)
    {
        if (liczba == "0")
            return 0;

        int dlugosc = liczba.length();

        int* tab = new int[dlugosc];
        int suma = 0;
        for (int i = 0; i < dlugosc; i++)
        {
            tab[i] = liczba[i] - 48;
            suma += tab[i];
        }

        if (suma % 3 == 0 && tab[dlugosc - 1] % 5 == 0)
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    return 0;
}