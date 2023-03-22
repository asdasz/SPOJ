#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

        string zdanie;
        getline(cin, zdanie);
        int dlugosc = zdanie.length();

        for (int i = 0; i < dlugosc; i++)
        {
            for ((zdanie[i] == char(32)); (zdanie[i] == char(32)); i++) {}
            if (zdanie[i] != char(32))
            {

                if (i < dlugosc && i>0)
                {
                    if (zdanie[i - 1] == char(32) && char(zdanie[i] > 96) && char(zdanie[i] < 123))
                        cout << char(zdanie[i] - 32);
                    else
                        cout << zdanie[i];
                }
                else
                    cout << zdanie[i];
            }
        
    }
    return 0;
}