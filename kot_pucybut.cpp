#include <iostream>

using namespace std;

int main()
{
    int z; cin >> z;
    while (z--)
    {
        long long int wiek1, pole1, wiek2, pole2;
        cin >> wiek1 >> pole1 >> wiek2 >> pole2;

        if (wiek1 > wiek2)
            if (pole1 < pole2)
                if ((pole2 - pole1) % 3 == 1)
                    cout << 0 << endl;
                else
                    cout << 1 << endl;

            else
                if ((pole1 - pole2) % 3 == 1)
                    cout << 0 << endl;
                else
                    cout << 1 << endl;

        else

            if (pole1 > pole2)
                if ((pole1 - pole2) % 3 == 1)
                    cout << 1 << endl;
                else
                    cout << 0 << endl;

            else
                if ((pole2 - pole1) % 3 == 1)
                    cout << 1 << endl;
                else
                    cout << 0 << endl;
            

    }
    return 0;
}

