#include <iostream>
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
    long long int liczba, potega, modulo;
    while (cin >> liczba >> potega >> modulo)
    {
        if (liczba == 0 && potega == 0 && modulo == 0)
            return 0;
        cout << power_modulo_fast(liczba, potega, modulo) << endl;
    }
}

