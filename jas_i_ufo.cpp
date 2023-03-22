#include <iostream>


using namespace std;
int main()
{
    int q; cin >> q;
    while (q--)
    {
        string pole;
        int ile; cin >> ile;
        int dziura = 0, najw=0;
        for (int i = 0; i < ile; i++)
        {
            cin >> pole;
            dziura = 0;
            for (int j = 0; j < pole.size(); j++)
            {
                if (pole[j] == '.')
                    dziura++;
                if (najw < dziura)
                    najw = dziura;
                if (pole[j] == '#')
                    dziura = 0;



            }


        }
        cout << najw * najw << endl;

    }
}

