#include <iostream>
#include <algorithm>

using namespace std;

int NWD(int a, int b)
{
    while (a != b)
        if (a > b)
            a -= b;
        else
            b -= a;
    return a;
}


int main()
{
    
    int ile, liczba;
    
    cin >> ile;
    int* tab = new int[ile];
    for (int i=0; i<ile; i++)   
        cin >> tab[i];
    
    sort(tab, tab+ile);

    for (int i = 0; i < ile; i++)
        cout << tab[i] << endl;

}
