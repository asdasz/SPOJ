#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int ile; cin >> ile;
    string pesel;
    int pytajniki;
    while (ile--)
    {
        pytajniki = 0;
        cin >> pesel;
        for (int i = 0; i < pesel.size(); i++)
        {
            if (pesel[i] == '?')
                pytajniki++;
        }
        if (pytajniki == 0)
            cout << 0 << endl;
        else
            cout << 1 * pow(10, pytajniki - 1) << endl;
    }
    return 0;
}

