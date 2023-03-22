#include <iostream>
#include <math.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int ile, najw;
    cin >> ile >> najw;
    

    for (int i = 2; 4 * i * i + 1 <= najw && ile--; i++)
        cout << 4 * i << " " << 4 * i * i - 1 << " " << 4 * i * i + 1 << endl;

    for (int i = 1; (2 * i + 1) * i + i + 1 <= najw && ile--; i++)
        cout << 2 * i + 1 << " " << (2 * i + 1) * i + i << " " << (2 * i + 1) * i + i + 1 << endl;
    return 0;
}