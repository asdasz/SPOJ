#include <iostream>

using namespace std;


int main()
{
    int tests, sum=0; cin >> tests;
    string number;
    while (tests--)
    {
        sum = 0;
        cin >> number;
        if (number[number.size() - 1] != '0')
        {
            cout << "Nie" << endl;
            continue;
        }
        else
        {
            for (int i = 1; i < number.size(); i++)
            {
                if (number[number.size() - 1 - i] == '1')
                {
                    if (i % 4 == 1)
                        sum += 2;
                    else if (i % 4 == 2)
                        sum += 4;
                    else if (i % 4 == 3)
                        sum += 3;
                    else
                        sum += 1;
                }
                else continue;
            }
            if (sum % 5 == 0)
                cout << "Tak" << endl;
            else
                cout << "Nie" << endl;
        }
    }
    return 0;
}

