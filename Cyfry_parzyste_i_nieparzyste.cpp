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
    long long int wyn;
    int ile; cin >> ile;
    while (ile--)
    {
        string x;
        cin >> x;

        wyn = power_modulo_fast(5, x.size() - 1, 1000000007);

        if (x[0] == 'p' && x.size()==1)
        {
            wyn = 5;
        }
        else if (x[0] == 'p')
        {
            wyn *= 4;
            wyn %= 1000000007;
        
        }
        else
        {
            wyn *= 5;
            wyn %= 1000000007;
        }
        cout << wyn << endl;
    }
}