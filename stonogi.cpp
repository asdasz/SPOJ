#include <iostream>

using namespace std;

int main()
{
    int ile; cin >> ile;
    while (ile--)
    {
        int przod_x1, przod_y1, tyl_x1, tyl_y1, predkosc1;
        int przod_x2, przod_y2, tyl_x2, tyl_y2, predkosc2;
        cin >> przod_x1 >> przod_y1 >> tyl_x1 >> tyl_y1 >> predkosc1;
        cin >> przod_x2 >> przod_y2 >> tyl_x2 >> tyl_y2 >> predkosc2;
        //równolegle wzdluz osi x
        if (przod_x1 == tyl_x1 && przod_x2 == tyl_x2)
        {
            if (przod_x1 != przod_x2)
                cout << "NIE" << endl;
            //oba idą w prawo
            else if (przod_x1 - tyl_x1 > 0 && przod_x2 - tyl_x2 > 0)
            {
                if (przod_x1 > przod_y1 && predkosc1 >= predkosc2)
                    cout << "NIE" << endl;
                else if (przod_x1 > przod_y1 && predkosc1 < predkosc2)
                    cout << "TAK" << endl;
                else if (przod_x1 < przod_y1 && predkosc1 > predkosc2)
                    cout << "TAK" << endl;
                else
                    cout << "NIE" << endl;
            }
            //oba idą w lewo
            else if (przod_x1 - tyl_x1 < 0 && przod_x2 - tyl_x2 < 0)
            {
                if (przod_x1 > przod_y1 && predkosc1 > predkosc2)
                    cout << "TAK" << endl;
                else if (przod_x1 > przod_y1 && predkosc1 <= predkosc2)
                    cout << "NIE" << endl;
                else if (przod_x1 < przod_y1 && predkosc1 >= predkosc2)
                    cout << "NIE" << endl;
                else
                    cout << "TAK" << endl;
            }
            //jedno w prawo drugie w lewo
            else if (((przod_x1 - tyl_x1 > 0 && przod_x2 - tyl_x2 < 0) && przod_x1 <= przod_x2) || przod_x1 - tyl_x1 < 0 && przod_x2 - tyl_x2>0 && przod_x1 >= przod_x2)
                cout << "TAK" << endl;


            else
                cout << "NIE" << endl;


        }


        //rownolegle wzdluz osi y
        else if (przod_y1 == tyl_y1 && przod_y2 == tyl_y2)
        {
            if (przod_x1 != przod_x2)
                cout << "NIE" << endl;

            else if (przod_y1 - tyl_y1 > 0 && przod_y2 - tyl_y2 > 0)
            {
                if (przod_y1 > przod_x1 && predkosc1 >= predkosc2)
                    cout << "NIE" << endl;
                else if (przod_y1 > przod_x1 && predkosc1 < predkosc2)
                    cout << "TAK" << endl;
                else if (przod_y1 < przod_x1 && predkosc1 > predkosc2)
                    cout << "TAK" << endl;
                else
                    cout << "NIE" << endl;
            }
            //oba idą w lewo
            else if (przod_y1 - tyl_y1 < 0 && przod_y2 - tyl_y2 < 0)
            {
                if (przod_y1 > przod_x1 && predkosc1 > predkosc2)
                    cout << "TAK" << endl;
                else if (przod_y1 > przod_x1 && predkosc1 <= predkosc2)
                    cout << "NIE" << endl;
                else if (przod_y1 < przod_x1 && predkosc1 >= predkosc2)
                    cout << "NIE" << endl;
                else
                    cout << "TAK" << endl;
            }
        }
//__________________________________________________________________________________//
        //prostopadle 1-pion 2-poziom

        else if (przod_x1 == tyl_x1 && przod_y2 == tyl_y2) {}

        
        












    }
    return 0;
}

