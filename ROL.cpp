#include <iostream>

using namespace std;

int main()
{
    int zzz;
    cin >> zzz;
    while (zzz--)
    {
        int ile;
        cin >> ile;
        int* tab = new int[ile];
        for (int i = 0; i < ile; i++)
        {
            cin >> tab[i];
        }
        for (int i = 1; i < ile; i++)
        {
            cout << tab[ile] << endl;
        }
        cout << tab[0] << endl;


    }
    return 0;
}
