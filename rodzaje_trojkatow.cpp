#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    double tab[3];
    while (cin >> tab[0] >> tab[1] >> tab[2])
    {
        sort(tab, tab + 3);
        if (tab[0] + tab[1] <= tab[2])
            cout << "brak" << endl;
        else if (tab[0] * tab[0] + tab[1] * tab[1] > tab[2] * tab[2])
            cout << "ostrokatny" << endl;
        else if (tab[0] * tab[0] + tab[1] * tab[1] == tab[2] * tab[2])
            cout << "prostokatny" << endl;
        else
            cout << "rozwartokatny" << endl;
    }
}