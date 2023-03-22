#include <iostream>

using namespace std;
 
int main()
{
    long long int suma_wszystkich = 0, liczby = 0;
    long long int suma_przedzialu = 0;
    while (cin>>liczby)
    {
        suma_przedzialu += liczby;

        if (liczby == 0)
        {
            cout << suma_przedzialu << endl;
            suma_wszystkich += suma_przedzialu;
            suma_przedzialu = 0;          
        }
        
    }

    cout << suma_wszystkich << endl;

    return 0;
}
