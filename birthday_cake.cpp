#include <iostream>
#include <math.h>
using namespace std;
int main()
{
        double ludzie, i;
        cin >> ludzie;
        double ciecia;
        ludzie++;
        if (ludzie == 0)
        {
            ciecia = 0;
        }
        else
        {
            for (i = 0; pow(i + 1, 3) < ludzie; i++) {}
            if (ludzie <= pow(i + 1, 3) && ludzie > (pow(i + 1, 3) - pow(i + 1, 2)))
                ciecia = 3 * i;
            else if (ludzie > pow(i, 3) && ludzie <= (pow(i, 3) + pow(i, 2)))
                ciecia = 3 * i - 2;
            else
                ciecia = 3 * i - 1;
        }
        cout << ciecia << endl;

    return 0;
}
