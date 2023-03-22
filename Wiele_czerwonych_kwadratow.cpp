#include <iostream>

using namespace std;

int main()
{
    int ax, ay, bx, by;
    while (cin >> ax >> ay >> bx >> by)
    {
        long long int czerwone = 0;
        
        for (; by > ay; by--)
        {
            int szer = bx - ax;
            if (by >= bx)
            {
                if (by %2==0)
                    czerwone += szer;
                //cout << czerwone << endl;
            }

            else
            {
                if (by % 2 == 0)
                {
                    if (by - ax > 0)
                    {
                        czerwone += by - ax;                      
                        //cout << czerwone << endl;
                        szer -= by - ax;
                    }
                    czerwone += (szer +1 - bx%2) / 2;
                    //cout << czerwone << endl;
                }

                //do zrobienia
                else
                {
                    int ilemaksymalniedodac = 0;
                    int iledodac = 0;
                    if (bx % 2 == 0)
                    {
                        iledodac = (bx - by + 1) / 2;
                        ilemaksymalniedodac = (bx - ax + 1) / 2;
                    }
                    else
                    {
                        iledodac = (bx - by) / 2;
                        ilemaksymalniedodac = (bx - ax ) / 2;
                    }

                    if (iledodac > ilemaksymalniedodac)
                        iledodac = ilemaksymalniedodac;
                    czerwone += iledodac;

                }
            }
        }
        cout << czerwone << endl;
    }

    return 0;
}