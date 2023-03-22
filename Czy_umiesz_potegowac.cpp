#include <iostream>

using namespace std;

int main()
{
    int D;
    cin >> D;
    for (int i = 0; i < D; i++)
    {
        int a, b, liczba;
        cin >> a>> b;
        liczba = a % 10;
        
        if (liczba == 1 || liczba == 0 || liczba == 5 || liczba == 6)
            cout << liczba<<endl;
        else if (liczba == 2)
        {
            if (b % 4 == 1)
                cout << 2 <<endl;
            else if (b % 4 == 2)
                cout << 4 << endl;
            else if (b % 4 == 3)
                cout << 8 << endl;
            else if (b % 4 == 0)
                cout << 6 << endl;
        }
        else if (liczba == 3)
        {
            if (b % 4 == 1)
                cout << 3 << endl;
            else if (b % 4 == 2)
                cout << 9 << endl;
            else if (b % 4 == 3)
                cout << 7 << endl;
            else if (b % 4 == 0)
                cout << 1 << endl;
        }
        else if (liczba == 4)
        {
            if (b % 2 == 0)
                cout << 6 << endl;
            else
                cout << 4 << endl;
        }
        else if (liczba == 7)
        {
            if (b % 4 == 1)
                cout << 7 << endl;
            else if (b % 4 == 2 )
                cout << 9 << endl;
            else if (b % 4 == 3)
                cout << 3 << endl;
            else if (b % 4 == 0)
                cout << 1 << endl;
        }
        else if (liczba == 8)
        {
            if (b % 4 == 1)
                cout << 8 << endl;
            else if (b % 4 == 2)
                cout << 4 << endl;
            else if (b % 4 == 3)
                cout << 2 << endl;
            else if (b % 4 == 0)
                cout << 6 << endl;
        }
        
        else if (liczba == 9)
        {
            if (b % 2 == 0)
                cout << 1 << endl;
            else
                cout << 9 << endl;
        }
    }
    return 0;
}
