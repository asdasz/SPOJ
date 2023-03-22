#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char znak;
    string slowo;
    int dlugosc;
    while (cin >> znak >> slowo)
    {
        dlugosc = slowo.size();
        int ile = 0;

        for (int i = 0; i < dlugosc-ile; i++)
            if (slowo[i] == znak)
            {
                slowo.erase(slowo.begin() + i);
                ile++;
                i--;
            }

        cout << slowo << endl;
    }
}