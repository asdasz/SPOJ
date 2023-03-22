#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ile; cin >> ile;
    int ciag = 0, maks = 0;

    long long int liczba1, liczba2;
    if (ile != 0)
    {
        cin >> liczba1;
        ciag++; maks++;
    }
    if (ile >= 2)   
        for (int i = 0; i < ile - 1; i++)
        {
            cin >> liczba2;

                if (ciag % 2 == 1)
                {
                    if (liczba2 - liczba1 == ciag)
                    {
                        ciag++;
                        if (ciag > maks)
                            maks = ciag;
                    }
                    else if (liczba2 - liczba1 == 1)
                        ciag = 2;
                    else
                        ciag = 1;
                }

                else
                {
                    if (liczba1 - liczba2 == ciag)
                    {
                        ciag++;
                        if (ciag > maks)
                            maks = ciag;
                    }
                    else if (liczba2 - liczba1 == 1)
                        ciag = 2;
                    else
                        ciag = 1;
                }

                liczba1 = liczba2;
        }
    
    cout << maks << "\n";
}
