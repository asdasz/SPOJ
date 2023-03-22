#include <iostream>

using namespace std;

int main()
{
    
        int a, b;
        cin >> a >> b;
        cout << "f(x)=";
        if (a == 0 && b == 0)
            cout << 0 << endl;
        else if (a == 0)
            cout << b << endl;
        else if (b == 0)
            if (a != 1 && a!=(-1))


                cout << a << "x" << endl;
            else if(a==1)
                cout << "x" << endl;
            else
                cout << "-x" << endl;
        else
            if (b > 0)
                if (a != 1 && a != (-1))


                    cout << a << "x+" << b << endl;
                else if(a==1)
                    cout << "x+" << b << endl;
                else
                    cout << "-x+" << b << endl;
            else
                if (a != 1 && a != (-1))


                    cout << a << "x" << b << endl;
                else if(a==1)
                    cout << "x" << b << endl;
                else
                    cout << "-x" << b << endl;

    
}

