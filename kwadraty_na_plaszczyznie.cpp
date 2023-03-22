#include <iostream>

using namespace std;

int main()
{
    long long int wynik, kwadrat;
    int testy; cin >> testy;
    while (testy--)
    {
        cin >> kwadrat;
        wynik = kwadrat * (kwadrat + 1);
        wynik %= 6000042;
        wynik *= (2 * kwadrat + 1);
        wynik %= 6000042;
        wynik /= 6;

        cout << wynik << endl;
    }
}