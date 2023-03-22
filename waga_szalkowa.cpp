#include <iostream>

using namespace std;

int NWD(long int a, long int b)
{
    while (a != b)
        if (a > b)
            a -= b;
        else
            b -= a;
    return a;
}

int main()
{
    long int odw1 = 0, odw2 = 0, lekarstwo = 0;


    while (cin >> odw1 >> odw2 >> lekarstwo)
    {
        if (odw1 == 0 && odw2 == 0 && lekarstwo == 0)
            break;
        if (lekarstwo % NWD(odw1, odw2) != 0)
        {
            cout << "BRAK" << endl;
        }

        else
        {

            int bufor = 0;
            long int ileodw1 = 0, ileodw2 = 0, ileodw11 = 0, ileodw22 = 0;

            int ziemniak = 1;
            if (odw2 < lekarstwo && odw1 < lekarstwo)
            {
                if (odw1 < odw2)
                {
                    bufor = odw2; odw2 = odw1; odw1 = bufor;
                }

                ileodw1 = lekarstwo / odw1;
                long long int check = ileodw1 * odw1 + ileodw2 * odw2;


                for (; check != lekarstwo && ileodw1 != (-3); ileodw1--)
                {
                    ileodw2 = 0;
                    check = ileodw1 * odw1 + ileodw2 * odw2;
                    for (; check < lekarstwo; ileodw2++)
                    {

                        check = ileodw1 * odw1 + ileodw2 * odw2;
                    }
                }
                if (lekarstwo % odw1 != 0)
                {
                    ileodw1++;
                    ileodw2--;
                    //cout << "zmiana"<<endl;
                }
                //cout << ileodw1 << endl << endl;



                if (ileodw1 >= 0)
                {
                    ziemniak++;
                    if (bufor == 0)
                        cout << ileodw1 << " " << ileodw2 << endl;
                    else
                        cout << ileodw2 << " " << ileodw1 << endl;
                }
            }

            ileodw2 = 0;
            ileodw1 = 0;
            //cout << ziemniak << endl;
            if (ziemniak == 1)
            {
                if (bufor != 0)
                {
                    bufor = odw2; odw2 = odw1; odw1 = bufor;
                }


                while (ileodw1 * odw1 - ileodw2 * odw2 != lekarstwo)
                {
                    if (ileodw1 * odw1 - ileodw2 * odw2 >= lekarstwo)
                        ileodw2++;

                    else
                        ileodw1++;
                }
                while (ileodw22 * odw2 - ileodw11 * odw1 != lekarstwo)
                {
                    if (ileodw22 * odw2 - ileodw11 * odw1 >= lekarstwo)
                        ileodw11++;

                    else
                        ileodw22++;
                }

                if (ileodw1 + ileodw2 < ileodw11 + ileodw22)
                    cout << ileodw1 << " " << ileodw2 << endl;
                else if (ileodw1 + ileodw2 > ileodw11 + ileodw22)
                    cout << ileodw11 << " " << ileodw22 << endl;
                else
                {
                    if (ileodw1 * odw1 + ileodw2 * odw2 > ileodw11 * odw1 + ileodw22 * odw2)
                        cout << ileodw11 << " " << ileodw22 << endl;
                    else
                        cout << ileodw1 << " " << ileodw2 << endl;
                }
            }
        }
    }
    return 0;
}