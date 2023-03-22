#include <iostream>

using namespace std;

int main()
{
    int x; cin >> x;
    int hh, mm;
    string godzina;
    while (x--)
    {
        cin >> godzina;
        hh = godzina[0] * 10 + godzina[1] - 528;
        mm = godzina[3] * 10 + godzina[4] - 528;

        if (hh == 0)
            mm = 59;
        do
        {
            mm++;
            if (mm >= 60)
            {
                mm -= 60; hh++;
            }
            if (hh >= 24)
                hh = 1;
        } while (mm % hh != 0);

        if (hh < 10)
            cout << 0;
        cout << hh << ":";
        if (mm < 10)
            cout << 0;
        cout << mm << "\n";
    }
}
