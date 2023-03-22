#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ile; cin >> ile; 

    int numer;
    string wiadomosc;
    int zawodnicy[100];
    for (int i = 0; i < 100; i++) zawodnicy[i] = 0;
    while (ile--)
    {
        cin >> numer >> wiadomosc;
        if (wiadomosc == "bede" || wiadomosc == "ja" || wiadomosc == "gram")
            zawodnicy[numer - 1] = 1;
        else if (wiadomosc == "odpadam" || wiadomosc == "rezygnuje")
            zawodnicy[numer - 1] = 0;
    }
    int suma = 0;
    for (int i = 0; i < 100; i++) suma+=zawodnicy[i];

    if (suma < 10)
        cout << "Nie gramy :( Jest nas tylko " << suma;
    else
        cout << "Gramy! Bedzie nas " << suma;

    return 0;
}

