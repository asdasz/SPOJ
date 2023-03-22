#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ilechlopakow = 0, iledziewczyn = 0, ile=0;

    for (int i = 0; i < 3; i++)
    {
        int x; cin >> x;
        ile += x;
    }
    string imie;
    for (int i = 0; i < ile; i++)
    {
        cin >> imie;
        int z = imie.size();
        if (imie[z - 1] == 'a')
            iledziewczyn++;
        else
            ilechlopakow++;
    }
    if (ilechlopakow > iledziewczyn)
        cout << iledziewczyn << endl;
    else
        cout << ilechlopakow << endl;
}
