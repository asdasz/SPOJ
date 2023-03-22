#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int ile; cin >> ile;
    while (ile--)
    {
        double dystans, s;
        string czas;
        cin >> dystans;
        cin >> czas;
        s = (czas[0] - 48) * 36000 + (czas[1] - 48) * 3600 + (czas[3] - 48) * 600 + (czas[4] - 48) * 60 + (czas[6] - 48) * 10 + czas[7] - 48;

        double v1 = round(s / (dystans/1000));
        int min = 0;
        while (v1 >= 60)
        {
            v1 -= 60;
            min++;
        }
        cout << min << ":";
        if (v1 < 10)
            cout << 0;
        cout << v1 << endl;
    }
}