#include <iostream>

using namespace std;

long long int nadziesietny(int system, string lb, long long int xd)
{
    long long int dodaj, potega_systemu = 1;
    for (int i = lb.size() - 1; i >= 0; i--)
    {
        if (lb[i] >= '0' && lb[i] <= '9')
        {
            dodaj = lb[i] - 48;

        }
        else
            dodaj = lb[i] - 55;

        xd += dodaj * potega_systemu;
        potega_systemu *= system;
    }
    return xd;
}


void nanowy(long long int liczba, int system)
{
    if (liczba == 0) // jezeli liczba wynosi 0 to konczymy - mamy juz wynik
        return;
    int wynik = liczba % system; // obliczamy kolejna liczbe/litere do wyswietlenia
    liczba /= system; // zmniejszamy liczbe
    nanowy(liczba, system); // wywolujemy funkcje rekurencyjnie aby wyswietlac 'od konca'
    if (wynik < 10) // jezeli wynik mniejszy od 10 to wyswietlamy go
        cout << wynik;
    else // jezeli wiekszy to zamieniamy na odpowiedni kod ASCII
    {
        char litera = wynik + 55;
        cout << litera;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int z; cin >> z;
    while (z--)
    {
        string liczba;
        int zjakiego, najaki;
        
        cin >> liczba >> zjakiego >> najaki;
        long long int nowaliczba = 0, wynik=0;

        
        if(zjakiego!=10)
            nowaliczba = nadziesietny(zjakiego, liczba, nowaliczba);   
        else
            for (int i = liczba.size() - 1; i >= 0; i--)
            {
                nowaliczba += (liczba[i]-48)* pow(10, liczba.size() - 1 - i);
            }

        if (najaki != 10)
            nanowy(nowaliczba, najaki);
        else
            cout << nowaliczba;
        cout << endl;
    }
    return 0;
}



/*
#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    long long num, r, s, real_value, remainder;
    string n;
    string answer;
    string temp;

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> n >> r >> s;

        string answer;
        long long sum = 0;
        int power = 0;
        for (int i = n.length() - 1; i >= 0; i--)
        {
            if (n[i] >= 65 && n[i] <= 90)
            {
                real_value = static_cast<int>(n[i]) - 55;
            }
            else
            {
                real_value = static_cast<int>(n[i]) - 48;
            }

            sum = static_cast<int>(sum + real_value * pow(r * 1.0, power));
            //cout << sum << endl;
            power++;
        }

        while (sum != 0)
        {
            remainder = sum % s;

            sum = sum / s;

            if (remainder < 10)
            {
                temp = static_cast<char>(remainder + 48);

            }
            else
            {
                temp = static_cast<char>(remainder + 55);
            }

            answer = answer + temp;
        }

        for (int i = answer.length() - 1; i >= 0; i--)
        {
            cout << answer[i];
        }
        cout << endl;
    }

    return 0;
}

*/