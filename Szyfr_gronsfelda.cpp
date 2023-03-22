#include <iostream>
#include <sstream>

using namespace std;
void Szyfr(string& s, int liczba, string& w, int& po)
{
    int dl = s.length();
    int ch;
    int p;
    ostringstream ss;
    ss << liczba;
    string a = ss.str();
    int dla = a.length();
    if (w == "SZYFRUJ")
    {
        for (int i = 0; i < dl; i++)
        {
            p = ((i + po) % dla);
            ch = (s[i] + a[p] - 'A' - '0') % 26 + 'A';
            cout << char(ch);
        }
        po = p + 1;
        cout << endl;
    }
    else if (w == "DESZYFRUJ")
    {
        for (int i = 0; i < dl; i++)
        {
            p = ((i + po) % dla);
            ch = (s[i] - a[p] + 'A' + '0') % 26 + 'A';
            cout << char(ch);
        }
        po = p + 1;
        cout << endl;
    }
}

int main()
{
    string nap, wybor;
    string liczba;
    int a;
    cin >> wybor;
    cin >> a;
    int po = 0;
    while (cin >> nap) Szyfr(nap, a, wybor, po);
    return 0;
}