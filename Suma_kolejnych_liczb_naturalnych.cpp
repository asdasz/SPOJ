#include <iostream>

using namespace std;
int main()
{
    int ilosc, liczba;
    while (cin >> ilosc >> liczba)
    {
        if (ilosc % 2 == 1)
            for (int i = 0; i < ilosc; i++)
                cout << liczba / ilosc - (ilosc-1) / 2 + i << " ";

        else
            for (int i = 0; i < ilosc; i++)
                cout << liczba / ilosc - (ilosc - 2) / 2 + i << " ";
        cout << endl;
    }
}