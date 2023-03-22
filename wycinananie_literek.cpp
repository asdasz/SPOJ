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
        dlugosc = slowo.length();
        for (int i = 0; i < dlugosc; i++)
            if (slowo[i] == znak)
                slowo.erase(slowo.begin() + i);
        cout << slowo << endl;
    }



}
