#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int rozmiar, pierwszy_wyraz = 1, roznica_w_pionie = 1 , k, aktualna;
    cin >> rozmiar;
    if (rozmiar == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    while (pierwszy_wyraz <= rozmiar)
    {
        pierwszy_wyraz += roznica_w_pionie;
        roznica_w_pionie++;
    }

    roznica_w_pionie--;
    pierwszy_wyraz -= roznica_w_pionie;
    cout << pierwszy_wyraz << endl;

    while (true)
    {
        roznica_w_pionie--;
        pierwszy_wyraz -= roznica_w_pionie;
        k = roznica_w_pionie + 1;
        aktualna = pierwszy_wyraz;

        while (aktualna <= rozmiar)
        {
            cout << aktualna << " ";
            aktualna += k;
            k++;
        }
        cout << endl;
        if (pierwszy_wyraz == 1)
            break;
    }
    return 0;
}
