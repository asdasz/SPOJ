#include <iostream>

using namespace std; 

int main()
{
    long long int a, b, pole;
    while (cin >> a >> b)
    {
        if (2*a ==b)
            pole = a * b;
        else if (b  <2* a)
            pole = a * a + (b - a) * (b - a);
        else
            pole = a * a * 2;
        cout << pole << endl;
    }
}

