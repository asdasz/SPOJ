#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ile; cin >> ile;
    while (ile--)
    {
        string jeden, dwa;
        int dljeden, dldwa;
        cin >> jeden >> dwa;
        dljeden = jeden.size();
        dldwa = dwa.size();

        int j = 0;
        for (int i = 0; i < dljeden; i++)
        {
            if (dwa[j] == jeden[i])
                j++;

            if (j == dldwa)break;

        }
        if (j == dldwa)
            cout << "Tak" << endl;
        else 
            cout << "Nie" << endl;
    }
}
