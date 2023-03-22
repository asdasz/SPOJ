#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ile; cin >> ile;
    while (ile--)
    {
        string haslo1, haslo2;
        cin >> haslo1 >> haslo2;
        int dlugosc = haslo1.length();
        int check = 0;

        for (int i = 0; i < dlugosc; i++)
        {
            check = 0;
            for (int q = 0; q < dlugosc; q++)
                if (i + q < dlugosc)
                {
                    if (haslo1[q] != haslo2[q + i])
                        break;
                    else
                        check++;
                }
                else
                {
                    if (haslo1[q] != haslo2[q + i - dlugosc])
                        break;
                    else check++;
                }
            if (check == dlugosc)
                break;
        }
  //      cout << check << " " << dlugosc << endl;
        if (check == dlugosc)
            cout << "yes" << endl;
        else
            cout << "no" << endl;


    }
}

