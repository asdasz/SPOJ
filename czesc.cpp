#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    int ile; 
    cin >> ile;

    int liczba;
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0;
    for (int z = 0; z < ile; z++)
    {
        cin >> liczba;
        switch (liczba)
        {
        case 1: a++; break;
        case 2: b++; break;
        case 3: c++; break;
        case 4: d++; break;
        case 5: e++; break;
        case 6: f++; break;
        case 7: g++; break;
        case 8: h++; break;
        case 9: i++; break;
        case 10: j++; break;
        }
    }
        int doteraz = 0;
        int suma = 0;

        doteraz += a;
        if (doteraz > 1 && a!= 0)
            suma += doteraz;
        doteraz += b;
        if (doteraz > 1&& b != 0)
            suma += doteraz;
        doteraz += c;
        if (doteraz > 1 && c != 0)
            suma += doteraz;
        doteraz += d;
        if (doteraz > 1 &&d != 0)
            suma += doteraz;
        doteraz += e;
        if (doteraz > 1 && e != 0)
            suma += doteraz;
        doteraz += f;
        if (doteraz > 1 && f != 0)
            suma += doteraz;
        doteraz += g;
        if (doteraz > 1 && g != 0)
            suma += doteraz;
        doteraz += h;
        if (doteraz > 1 && h != 0)
            suma += doteraz;
        doteraz += i;
        if (doteraz > 1 && i != 0)
            suma += doteraz;
        doteraz += j;

    

    cout << suma << endl;




    return 0;
}

