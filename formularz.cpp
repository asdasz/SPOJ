#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

bool sprawdz(string a)
{
    int dl = a.length();
    dl = dl - 1;
    if (int(a[0]) > 64 && int(a[0]) < 91)
    {
        int x = 0;
        for (int i = 1; i < dl; i++)
        {
            if (int(a[i]) > 96 && int(a[i]) < 123) x++;
            else x = 0;
        }
        if (x == dl - 1) return true;
        else return false;
    }
    else return false;
}
bool data1(string data)
{
    string rok, miesiac, dzien;
    int dl = data.length();
    if (data[4] != '-' || data[7] != '-') return false;
    else
    {
        if (dl != 10) return false;
        else
        {
            for (int i = 0; i < 4; i++)
            {
                rok[i] = data[i];
            }
            for (int i = 0; i < 2; i++)
            {
                miesiac[i] = data[5 + i];
                if (int(miesiac[i]) < 47 || int(miesiac[i]) > 57) return false;
            }
            for (int i = 0; i < 2; i++)
            {
                dzien[i] = data[8 + i];
                if (int(dzien[i]) < 47 || int(dzien[i]) > 57) return false;
            }

            int x = atoi(rok.c_str());
            int y = atoi(miesiac.c_str());
            int z = atoi(dzien.c_str());
            if (x <= 2000 && x >= 1900 && y <= 12 && y >= 1 && z <= 31 && z > 0) return true;
            else return false;

        }
    }



}

int main()
{
    string a, b, data, z;

    while (cin >> z >> a >> z >> b >> z >> z >> data)
    {
        int dl = a.length();
        if (sprawdz(a) && dl <= 11)
        {
            dl = b.length();
            if (sprawdz(b) && dl <= 21)
            {
                if (data1(data)) cout << "3\n";
                else cout << "2\n";
            }
            else cout << "1\n";
        }
        else cout << "0\n";


    }


    return 0;
}