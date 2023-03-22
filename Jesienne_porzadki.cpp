#include <iostream>

using namespace std;

int main()
{
    int ile; cin >> ile;
    int ilee = ile;
    int suma_a=0, suma_b=0;
    int srednia;
    int licz;
    while (ile--)
    {
        int a, b;
        cin >> a >> b;
        suma_a += a;
        if (b >= 0)
            suma_b += b;
        else 
            suma_b -= b;
    }

    srednia = (suma_a-1) / ilee;
    return 0;
}

