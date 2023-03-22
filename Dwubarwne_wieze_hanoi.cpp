#include <iostream>
using namespace std;

int main()
{
    int x[301];
    for (int i = 0; i < 301; i++)
        x[i] = 0;
    //cout << x[55];

    int ile;
    cin >> ile;

    if (ile < 3)
        cout << ile << endl;
    else
    {
        x[0] = 2;
        for (int i = 0; i < ile - 2; i++)
        {
            for (int j = 0; j < 301 && x[j] != 0; j++)
            {
                x[j] *= 2;
                if (j == 0 && i % 3 != 2) x[j]++;
                /*cout << x[j] << endl;*/
            }
            for (int j = 0; j < 301 && x[j] != 0; j++)
            {
                if (x[j] >= 1000000)
                {
                    x[j + 1]++;
                    x[j] -= 1000000;
                }
            }
        
            //int z = 300;
            //while (x[z] == 0) z--;
            //cout << x[z]; z--;
            //for (; z >= 0; z--)
            //    if (x[z] >= 100000)
            //        cout << x[z];
            //    else
            //        if (x[z] >= 10000)
            //            cout << "0" << x[z];
            //        else
            //            if (x[z] >= 1000)
            //                cout << "00" << x[z];
            //            else
            //                if (x[z] >= 100)
            //                    cout << "000" << x[z];
            //                else
            //                    if (x[z] >= 10)
            //                        cout << "0000" << x[z];
            //cout << endl;
        }

        int i = 300;
        while (x[i] == 0) i--;
        cout << x[i]; i--;
        for (; i >= 0; i--)   
            if(x[i]>=100000)
                cout << x[i];
            else
                if (x[i] >= 10000)
                    cout <<"0" << x[i];
                else
                    if (x[i] >= 1000)
                        cout << "00" << x[i];
                    else
                        if (x[i] >= 100)
                            cout << "000" << x[i];
                        else
                            if (x[i] >= 10)
                                cout << "0000" << x[i];
                            else
        cout << endl;
    }

    return 0;
}
