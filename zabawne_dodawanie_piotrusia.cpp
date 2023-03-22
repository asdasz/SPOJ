#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ile, obl;
    cin >> ile;


    for (int i = 0; i < ile; i++)
    {
        obl = 0;
        int n;
        cin >> n;

        int jednosci = n % 10;
        int dziesiatki = n / 10 % 10;
        int setki = n / 100 % 10;
        int tysiace = n / 1000 % 10;
        int dt = n / 10000 % 10;

        while ((tysiace == 0 && setki == 0 && dziesiatki != 0 && dziesiatki != jednosci) ||
            (tysiace == 0 && setki != jednosci && setki != 0) ||
            (dt == 0 && tysiace != 0 && (tysiace != jednosci || setki != dziesiatki)) ||
            ((dt != jednosci || dziesiatki != tysiace) && dt != 0))
        {
            obl++;
            if (tysiace == 0 && setki == 0 && dt == 0)
                n += 10 * jednosci + dziesiatki;
            else if (tysiace == 0 && setki != 0 && dt == 0)
                n += 100 * jednosci + 10 * dziesiatki + setki;
            else if (tysiace != 0 && dt == 0)
                n += 1000 * jednosci + 100 * dziesiatki + 10 * setki + tysiace;
            else if (dt != 0)
                n += 10000 * jednosci + 1000 * dziesiatki + 100 * setki + 10 * tysiace + dt;
            jednosci = n % 10;
            dziesiatki = n / 10 % 10;
            setki = n / 100 % 10;
            tysiace = n / 1000 % 10;
            dt = n / 10000 % 10;
        }
        cout << n << " " << obl << endl;
    }

    return 0;
}
