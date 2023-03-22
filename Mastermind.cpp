#include <iostream>

using namespace std;

int main()
{
    int moje[4] = { 1,1,1,1 };
    int sedzia[4];
    do
    {
        cout << moje[0] << " " << moje[1] << " " << moje[2] << " " << moje[3] << endl;

        for (int i = 0; i < 4; i++)
        {
            cin >> sedzia[i];
            if (sedzia[i] == 1)
                continue;
            else
                moje[i]++;
        }
    } while (sedzia[0] + sedzia[1] + sedzia[2] + sedzia[3] != 4);



    return 0;
}