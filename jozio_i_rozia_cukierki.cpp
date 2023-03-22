#include <iostream>

using namespace std;

long long int NWD(long long int a, long long int b)
{
    long long int pom;

    while (b != 0)
    {
        pom = b;
        b = a % b;
        a = pom;
    }

    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testy; cin >> testy;

    long long int cuksy, kamyki, dodatkowo, nwd;
    while (testy--)
    {
        cin >> cuksy >> kamyki >> dodatkowo;     
        nwd = NWD(cuksy, cuksy+kamyki);
        cout << cuksy/nwd << "/" << (cuksy+kamyki) / nwd << "\n";
    }
    return 0;
}