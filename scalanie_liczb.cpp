#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    string jeden, dwa, trzy, cztery, wynik, awynik;
    cin >> jeden >> dwa >> trzy >> cztery;
    wynik = jeden + dwa;
    awynik = trzy + cztery;
    int dl1, dl2;
    dl1 = wynik.size();
    dl2 = awynik.size();
    long long int a=0, b=0, c=0;
    for (int i = 1; i <= dl1; i++)
    {
        a += (wynik[dl1 - i]-48) * pow(10, i - 1);
    }
    for (int i = 1; i <= dl2; i++)
    {
        a += (awynik[dl2 - i]-48) * pow(10, i - 1);
    }
    c = a + b;
    cout << c << endl;
}