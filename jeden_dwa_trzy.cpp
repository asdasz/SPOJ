#include <iostream>
#include <math.h>

using namespace std;

int power_modulo_fast(long long int podstawa, long long int wykladnik, long long int przez_ile)
{
    int i;
    long long int wynik = 1;
    long long int x = podstawa % przez_ile;

    for (i = 1; i <= wykladnik; i <<= 1)
    {
        x %= przez_ile;
        if ((wykladnik & i) != 0) //b & 1 jest rownowazne czemus takiemu b % 2 == 1,
        {
            wynik *= x;
            wynik %= przez_ile;
        }
        x *= x;
    }

    return wynik;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x; cin >> x;
    while (x--)
    {
        long long int a, wynik; cin >> a;
        if (a % 2 == 1)        
            wynik = (3 * power_modulo_fast(2, (a - 1) / 2, 101010101)) % 101010101;
        else
            wynik = (2 * power_modulo_fast(2, a / 2, 101010101)) % 101010101;
        cout << wynik << "\n";
    }
    return 0;
}