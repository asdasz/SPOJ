#include <iostream>
#include <vector>

using namespace std;

int main()
{

        int x, y;
        while (cin >> x >> y)
            //cin >> x >> y;
        {



            vector<int> xxx, xx, yy, yyy, suma;

            for (int i = 0; i < x; i++)
            {
                int nowa;  cin >> nowa;
                xxx.push_back(nowa);
            }
            for (int i = x - 1; i >= 0; i--)
            {
                xx.push_back(xxx[i]);
            }

            for (int i = 0; i < y; i++)
            {
                int nowa;  cin >> nowa;
                yyy.push_back(nowa);
            }
            for (int i = y - 1; i >= 0; i--)
            {
                yy.push_back(yyy[i]);
            }

            if (x >= y)
            {
                for (int i = 0; i < x; i++)
                {
                    suma.push_back(xx[i]);
                    if (i < y)
                        suma[i] += yy[i];
                }

            }
            else
            {
                for (int i = 0; i < y; i++)
                {
                    suma.push_back(yy[i]);
                    if (i < x)
                        suma[i] += xx[i];
                }
            }
            //for (int i = suma.size() - 1; i >= 0; i--)
            //    cout << suma[i];
            cout << endl;
            for (int i = 0; i < suma.size(); i++)
            {
                if (i != suma.size() - 1)
                {
                    if (suma[i] >= 2)
                    {
                        suma[i] -= 2;
                        suma[i + 1]++;
                    }
                }
                else if (suma[i] == 2)
                    suma[i] = 10;
                else if (suma[i] == 3)
                    suma[i] == 11;
            }
            for (int i = suma.size() - 1; i >= 0; i--)
                cout << suma[i];
        }
        return 0;
}

