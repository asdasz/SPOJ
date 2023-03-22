#include <iostream>

using namespace std;

int main()
{
    int ile;
    cin >> ile;

    if (ile == 0)
        cout << "0" << endl;
    else if (ile == 1 || ile == 2)
        cout << "NIE" << endl;
    else
    {
        for (int i = 2; i <= ile; i += 2)
            cout << i << " ";
        cout << "0" <<" ";
        if (ile % 2 == 0)
            for (int i = ile - 1; i > 0; i -= 2)
                cout << i << " ";
        else
            for (int i = ile; i > 0; i -= 2)
                cout << i <<" ";
    }
    
    return 0;
}
