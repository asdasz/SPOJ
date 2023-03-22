#include <iostream>
#include <string>

using namespace std;

int main()
{
    string wschod, zachod, godzina;
    cin >> wschod >> zachod >> godzina;
    

        int g1 = 1000 * (wschod[0] - 48) + 100 * (wschod[1] - 48) + 10 * (wschod[3] - 48) + wschod[4] - 48;
        int g2 = 1000 * (zachod[0] - 48) + 100 * (zachod[1] - 48) + 10 * (zachod[3] - 48) + zachod[4] - 48;
        int g3 = 1000 * (godzina[0] - 48) + 100 * (godzina[1] - 48) + 10 * (godzina[3] - 48) + godzina[4] - 48;

        if (g3 >= g2 || g3 < g1)
            cout << "noc" << endl;
        else
            cout << "dzien" << endl;
    
    return 0;
}