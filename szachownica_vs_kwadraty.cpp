#include <iostream>
using namespace std;

int main()
{
    int tests; cin >> tests;
    long long int number, amount;
    while (tests--)
    {
        cin >> number;
        amount = (number * number * number * 2 + 3 * number * number + number) / 6;
        cout << amount << endl;
    }
    return 0;
}
