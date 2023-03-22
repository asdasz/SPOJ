#include <iostream>

using namespace std;

int main()
{
    string godzina;
    cin >> godzina;
    int hh, mm;
    hh = (godzina[0] - 48) * 10 + godzina[1] - 48;
    mm = (godzina[3] - 48) * 10 + godzina[4] - 48;
    int przerwa;
    if (hh < 10)
        cout << "0";

    cout << hh << ":";
    if (mm < 10)
        cout << "0";
    cout<<mm;



    mm += 45;
    if (mm >= 60)
    {
        mm -= 60;
        hh++;
    }
    if (hh >= 24)
        hh -= 24;



    cout << ",";
    if (hh < 10)
        cout << "0";

    cout << hh << ":";
    if (mm < 10)
        cout << "0";
    cout << mm;




    while (cin >> przerwa)
    {

        mm += przerwa;
        if (mm >= 60)
        {
            mm -= 60;
            hh++;
        }
        if (hh >= 24)
            hh -= 24;




        cout << ",";

        if (hh < 10)
            cout << "0";

        cout << hh << ":";
        if (mm < 10)
            cout << "0";
        cout << mm;





        mm += 45;
        if (mm >= 60)
        {
            mm -= 60;
            hh++;
        }
        if (hh >= 24)
            hh -= 24;




        cout << ",";
        if (hh < 10)
            cout << "0";

        cout << hh << ":";
        if (mm < 10)
            cout << "0";
        cout << mm;



    }
}

