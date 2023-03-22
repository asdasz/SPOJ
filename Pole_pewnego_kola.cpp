#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{   
        double r, d;
        cin >> r >> d;
        double promien;
        double pi = 3.141592654;
        double S;

        promien = sqrt(r * r - d * d / 4);
        S = pi * promien * promien;
        S *= 100;
        S = round(S);
        S /= 100;
        cout << setprecision(25) << S << endl;
   
    return 0;
}

