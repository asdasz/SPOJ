#include <iostream>

using namespace std;

int main()
{
    int z; cin >> z;
    while (z--)
    {
        int system;
        string liczba;
        cin >> system >> liczba;
        long long int wynik=0, dodaj=0, potega_systemu=1;
        for (int i = liczba.size() - 1; i >= 0; i--)
        {
            if (liczba[i] >= '0' && liczba[i] <= '9')
            {
                dodaj = liczba[i] - 48;

            }
           // else
           //     dodaj = liczba[i]-55;
            
            wynik += dodaj * potega_systemu;
            wynik %= 1010101;
            potega_systemu *= system;
            potega_systemu %= 1010101;
        }
        cout << wynik << endl;
    }
    return 0;
}


/*
#include <iostream>
#include <string>
using namespace std;
int main()
{
    char liczba[100]; // tablica na liczbe (może być np. system szesnastkowy gdzie wystepuja litery oprocz cyfr)
    int p = 1, wynik = 0, system, x;
    cout << "Podaj system w jakim zapisana jest liczba <2,16>: ";
    cin >> system;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << "Liczba " << liczba << " w systemie dziesietnym wynosi ";
    for (int i = strlen(liczba) - 1; i >= 0; i--) // zaczynamy od konca tablicy i poruszamy sie do przodu - do indeksu 0
    {
        if (liczba[i] >= '0' && liczba[i] <= '9') // jezeli cyfra
            x = liczba[i] - '0'; // to odejmujemy kod zera - zamieniamy kod cyfry na cyfre
        else // jezeli litera - musi byc duza
            x = liczba[i] - 55; // to odejmujemy 55 np. A(65) - 55 = 10
        wynik += x * p; // do wyniku dodajemy otrzymana wartosc pomnozana przez podstawe systemu do odpowiedniej potegi
        p *= system; // ustawiamy p na odpowiednia potege systemu
    }
    cout << wynik << endl;
    return 0;
}
*/