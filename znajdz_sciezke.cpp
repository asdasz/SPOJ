#include <iostream>

using namespace std;

int main()
{
    int dl, x;
    string a, b;
    int testy; cin >> testy;
    while (testy--)
    {
        x = 0;
        cin >> dl;
        cin >> a >> b;
        for (int i = 0; i < dl; i++)
        {
            if (a[i] == '#' && b[i] == '#')
            {
                x+=2; break;
            }
            else if (a[i] == '#' && b[i - 1] == '#')
            {
                x++;
                i++;                
            }
            else if (b[i] == '#' && a[i - 1] == '#')
            {
                x++;
                i++;
            }

            if (a[i] == '#' && b[i] == '#')
            {
                x += 2; break;
            }
            if (i >= 4)
                if (a[i] == '#' && a[i - 1] == '#' && b[i - 2] == '#' && b[i - 3] == '#')
                {
                    x+=2;
                    break;
                }
                else
                    if (b[i] == '#' && b[i - 1] == '#' && a[i - 2] == '#' && a[i - 3] == '#')
                    {
                        x+=2;
                        break;
                    }
        }
        if (x  < 2)
            cout << "TAK\n";
        else
            cout << "NIE\n";

    }
}
