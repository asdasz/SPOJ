#include <iostream>

using namespace std;

int main()
{
    int ile;
    cin >> ile;
    while (ile--)
    {
        int obzartuchy, ciastkanapudlo, lacznie=0, pudelka=0;
        cin >> obzartuchy >> ciastkanapudlo;
        int doba = 86400;
        int* zjedzone = new int[obzartuchy];
        int* czas = new int[obzartuchy];
        for (int i = 0; i < obzartuchy; i++)
        {
            cin >> czas[i];
            zjedzone[i] = doba / czas[i];
            lacznie += zjedzone[i];
        }
        for (pudelka; lacznie > pudelka * ciastkanapudlo; pudelka++) {}
        cout << pudelka << endl;
        delete []czas;
        delete []zjedzone;
    }
    return 0;
}