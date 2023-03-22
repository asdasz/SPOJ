#include <iostream>

using namespace std;

int main()
{
    int wczytana, x;
    while (cin >> wczytana)
    {
        int counter=0;
        int ile; cin >> ile;
        for (int i = 0; i < ile; i++)
        {            
            cin >> x;
            if (x == wczytana)
                counter++;
        }
        cout << counter << endl;
    }
}
