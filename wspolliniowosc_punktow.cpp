#include <iostream>

using namespace std;

int main()
{
 /* 
    int ile;
    cin >> ile;
    while (ile--)
    {
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        if (x1 == x2 || x2 == x3 || x1 == x3)
            if (x1 == x2 && x1 == x3)
                cout << "TAK" << endl;
            else
                if ((x1 == x2 && y1 == y2) || (x1 == x3 && y1 == y3) || (x2 == x3 && y2 == y3))
                    cout << "TAK" << endl;
                else
                    cout << "NIE" << endl;
        

        else
        {
            double a12, a13, a23;

            a12 = (y2 - y1) / (x2 - x1);
            a13 = (y3 - y1) / (x3 - x1);
            a23 = (y3 - y2) / (x3 - x2);
            cout << a12 << " " << a13 << " " << a23 << " ";
            if (a12 == a13 && a12 == a23)
                cout << "TAK" << endl;
            else
                cout << "NIE" << endl;
        }
    }
    return 0;
    */


    int x=1, y=2;
    double z;
    z = x / y;
    cout << z;
    return 0;
}
