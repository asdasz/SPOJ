#include <iostream>
#include <string>

using namespace std;

int main()
{
    string tekst, bufor;
    while (getline(cin, tekst))
    {
        int dlugosc = tekst.size();
        if (dlugosc % 2 == 1)
            for (int i = 0; i < dlugosc - 1; i += 2)
            {
                bufor = tekst[i];
                tekst[i] = tekst[i + 1];
                tekst[i + 1] = bufor[0];
            }
        else
            for (int i = 0; i < dlugosc; i += 2)
            {
                bufor = tekst[i];
                tekst[i] = tekst[i + 1];
                tekst[i + 1] = bufor[0];
            }
        for (int i = 0; i < dlugosc; i++)
            cout << tekst[i];
 //       if (dlugosc % 2 == 1)
 //           cout << tekst[dlugosc - 1];
        cout << endl;

    }



    return 0;
}
