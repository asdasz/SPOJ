#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int q; cin >> q;
    while (q--)
    {
        long long int d, osoby;
        cin >> d >> osoby;
        long double pi = 3.1415926535897932384626;

       
        if (osoby % 2 == 0)
            cout << fixed << setprecision(3) << d * pi / osoby << " " << osoby / 2 << endl;
        else
            cout << fixed << setprecision(3) << d * pi / osoby/2 << " " << osoby << endl;
    }
    return 0;
}
