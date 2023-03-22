#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    string czas, dzien, nauka;
    cin >> czas >> dzien >> nauka;
    int h, m, s, dni = 0, noweh=0, nowem=0;

    h = 10 * (czas[0] - 48) + czas[1] - 48;
    m = 10 * (czas[3] - 48) + czas[4] - 48;
    s = 10 * (czas[6] - 48) + czas[7] - 48;

    unsigned long long int time=0, pelne_dni;
    
    for (int i = nauka.size() - 2; i >= 0; i--)
        time += (nauka[i] - 48) * pow(10, nauka.size() - 2 - i);
    if (time > 604800)
        cout << "NIE\n";
    else
        cout << "TAK\n";

    time %= 604800;

    dni += time / 86400;
    time -= dni * 86400;

    noweh += time / 3600;
    time -= noweh * 3600;
    h += noweh;

    nowem += time / 60;
    time -= nowem * 60;
    m += nowem;

    s += time;

    if (s >= 60)
    {
        s -= 60;
        m++;
    }
    if (m >= 60)
    {
        m -= 60;
        h++;
    }
    if (h >= 24)
    {
        h -= 24;
        dni++;
    }

    string tab[7];
    tab[0] = "poniedzialek";
    tab[1] = "wtorek";
    tab[2] = "sroda";
    tab[3] = "czwartek";
    tab[4] = "piatek";
    tab[5] = "sobota";
    tab[6] = "niedziela";
    int ktory = 0;
    for (int i = 0; i < 7; i++)
    {
        if (tab[i] == dzien)
            ktory = i;
    }
    ktory += dni;
    ktory %= 7;


    if (h < 10)
        cout << 0;
    cout << h << ":";
    if (m < 10)
        cout << 0;
    cout << m << ":";
    if (s < 10)
        cout << 0;
    cout << s << " " << tab[ktory] << "\n";
    return 0;
}

