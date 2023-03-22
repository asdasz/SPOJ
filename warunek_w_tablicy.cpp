#include <iostream>

using namespace std;

int main()
{
    int ile; cin >> ile;
    int* tab = new int[ile];

    for (int i = 0; i < ile; i++)
        cin >> tab[i];

    char znak; cin >> znak;
    int od_ile; cin >> od_ile;
    if (znak == '>')
        for (int i = 0; i < ile; i++)
            if (tab[i] > od_ile)
                cout << tab[i] << endl;

    if (znak == '<')
        for (int i = 0; i < ile; i++)
            if (tab[i] < od_ile)
                cout << tab[i] << endl;
    delete[]tab;
    return 0;
}