#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int rzedy; cin >> rzedy;

        string podlogi[12];
        string spacje[12];
        podlogi[0] = "_";
        spacje[0] = " ";
        for (int i = 1; i <12; i++)
        {
            podlogi[i] += podlogi[i - 1] + podlogi[i - 1] + podlogi[i - 1];
            spacje[i] += spacje[i - 1] + spacje[i - 1] + spacje[i - 1];
            //cout << podlogi[i] << endl;
        }

        string wlasciwe = podlogi[rzedy - 1];
        int dlugosc = wlasciwe.size();

        cout << wlasciwe << endl;

        for (int i = 1; i < rzedy; i++) //dla rzędu
        {
            int z = pow(3, i);
            for (int j = 0; j < z; j++) // kolejno 3, 9 ,27...
            {
                int dlfragmentu = dlugosc / z;
                if(j%2==1)
                    for (int k = 0; k < dlfragmentu; k++)                    
                        wlasciwe[dlfragmentu * j + k] = ' ';
                    
            }
            cout << wlasciwe << endl;
        }
        cout << endl;
    }
    return 0;
}
