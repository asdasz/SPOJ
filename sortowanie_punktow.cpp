#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{   
    int x; cin >> x;
    string tab[1002];
    int i = 0;
    while (getline(cin, tab[i]) &&i<x) i++;
    sort(tab, tab + i+1);
    for (int j = 0; j <= i; j++)
        cout << tab[j] << endl;    
}