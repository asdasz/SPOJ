#include <iostream>

using namespace std;



int main()
{
    int ile, a=0, b=0, c=0, d=0, e=0, f=0, g=0;
    cin >> ile;
    string dzien;
    for (int i = 0; i < ile; i++)
    {
        cin >> dzien;
        if (dzien == "pon")
            a++;       
        else if (dzien == "wt")
            b++;
        else if (dzien == "sr")
            c++;
        else if (dzien == "czw")
            d++;
        else if (dzien == "pt")
            e++;
        else if (dzien == "sob")
            f++;
        else if (dzien == "niedz")
            g++;
    }

    int naj = 0;
    if (naj < a)
        naj = a;
    if (naj < b)
        naj = b;
    if (naj < c)
        naj = c;
    if (naj < d)
        naj = d;
    if (naj < e)
        naj = e;
    if (naj < f)
        naj = f;
    if (naj < g)
        naj = g;
    cout << naj << " " << a + b + c + d + e + f + g << endl;
//    cout << a << b << c << d << e << f << g;
    


    return 0;
}
