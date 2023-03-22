#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int ia, ib;
    string txt;
    int ile; cin >> ile;
    while (ile--)
    {
        ia = 0; ib = 0;
        int koza = 0;
        int ilee; cin >> ilee;
        for (int i = 0; i < ilee; i++)
        {

            cin >> txt;
            if (txt == "AI")
                ia++;
            else if (txt == "BI")
                ib++;
            else if (txt == "AO")
                ib--;
            else
                ia--;



            if (ia < 0 || ib < 0)
            {
                koza++;
            }
            if (i + 1 == ilee)
            {
                if (koza != 0)
                    cout << "ERROR" << endl;
                else
                    cout << ia + ib << endl;
            }
                

        }
    }

    return 0;
}

