#include <iostream>

using namespace std;

bool sprawdzacz(int a, int b, string war)
{
    if (war == "1")
        if (a > b)return true;
        else return false;

    else if (war == "2")
        if (b > a)return true;
        else return false;

    else if (war == "0")
        if (b == a)return true;
        else return false;

    else if (war == "10")
        if (b == a || a > b)return true;
        else return false;

    else if (war == "02")
        if (b > a || a == b)return true;
        else return false;

    else
        if (b > a || a > b)return true;
        else return false;

}


int main()
{
    int ile; cin >> ile;
    while (ile--)
    {
        int mecze; cin >> mecze;
        string nic;
        string* druzyny = new string[mecze * 2];
        string* rezultat = new string[mecze];
        int* g = new int[mecze * 2];
        for (int i = 0; i < 2 * mecze; i++)g[i] = 0;
        for (int i = 0; i < mecze; i++)
        {
            cin >> druzyny[2 * i] >> nic >> druzyny[2 * i + 1] >> rezultat[i];
        }

        int gole; cin >> gole;
        string* zdobywca = new string[gole];
        for (int i = 0; i < gole; i++)cin >> zdobywca[i];
        for (int i = 0; i < gole; i++)
        {
            for(int j=0; j<2*mecze; j++)
                if (zdobywca[i] == druzyny[j])
                {
                    g[j]++;
                    break;
                }
        }
        int suma = 0;
        for (int i = 0; i < mecze; i++)
        {
            int x = sprawdzacz(g[2 * i], g[2 * i + 1], rezultat[i]);
            suma += x;
        }
        if (suma == mecze)
            cout << "TAK" << endl;
        else
            cout << "NIE " << suma << "/" << mecze << endl;
        delete[]g;
        delete[]zdobywca;
        delete[]rezultat;
        delete[]druzyny;
    }
}


