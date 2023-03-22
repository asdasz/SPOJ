#include <iostream>

using namespace std;



int main()
{
    double xwspolrzedna, ywspolrzedna, promien;
    cin >> xwspolrzedna >> ywspolrzedna >> promien;

    int rzuty; cin >> rzuty;
    int ludzie; cin >> ludzie;

    string pierwsza_osoba;
    int rzuty_pierwszej_osoby=0;

    for (int i = 0; i < ludzie; i++)
    {
        string imie;
        cin >> imie;
        int trafienia = 0;
        for (int q = 0; q < rzuty; q++)
        {           
            double x, y;
            cin >> x >> y;
            if ((x - xwspolrzedna) * (x - xwspolrzedna) + (y - ywspolrzedna) * (y - ywspolrzedna) <= promien * promien)
                trafienia++;
        }
        if (trafienia > rzuty_pierwszej_osoby)
        {
            rzuty_pierwszej_osoby = trafienia;
            pierwsza_osoba = imie;
        }

    }

    cout << pierwsza_osoba << " " << rzuty_pierwszej_osoby << endl;



    return 0;
}
