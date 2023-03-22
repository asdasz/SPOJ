#include <iostream>

using namespace std;
int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    int poprawne = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i] && a[i] == c[i]) {}
        else if (a[i] == b[i] || a[i] == c[i]) { poprawne++; }
        else if (b[i] != c[i]) { poprawne++; }
        else { poprawne += 2; }         
    }
    cout << poprawne << "\n";
    return 0;
}
