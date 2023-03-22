#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ile;
    cin >> ile;
    while (ile--)
    {
        int dl;
        string napis1, napis2;
        cin >> napis1;
        cin >> napis2;
        int dl1 = napis1.length();
        int dl2 = napis2.length();

        if (dl1 > dl2)
            dl = dl2;
        else
            dl = dl1;
        for (int q = 0; q < dl; q++)
        {
            cout << napis1[q] << napis2[q];
        }
        cout << endl;
    }
    return 0;
}