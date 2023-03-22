#include <iostream>
using namespace std;

int main()
{
    string w1, w2;
    cin >> w1 >> w2;
    if (w1[0] == w2[0] || w1[1] == w2[1])
        cout << "TAK\n";
    else
        cout << "NIE\n";
    return 0;
}

