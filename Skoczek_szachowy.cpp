#include <iostream>

using namespace std;

int main()
{
    int testy; cin >> testy;
    long long int skoki;
    while (testy--)
    {
        cin >> skoki;
        long long int kwadrat = (4 * skoki + 1) * (4 * skoki + 1) / 2;
        if (skoki % 2 == 0)
        {
            long long int odejmij = skoki * skoki;
            if (skoki == 2) odejmij += 4;
            cout << kwadrat - odejmij + 1 << endl;
        }
        else
        {
            long long int odejmij = (skoki / 2) * (skoki / 2) * 8;
            if (skoki == 1) odejmij += 4;
            else if (skoki > 4)
            {
                //5 --> 1 7--->3 9--->6
                odejmij -= 8 * (skoki/2 -1) * (skoki/2) / 2;
            }
            cout << odejmij << endl;
            cout << kwadrat - odejmij << endl;
        }
    }
}
//8 24 48 80, 120
//1,3,6,10


//#include <iostream>
//
//using namespace std;
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    int t, n;
//
//    cin >> t;
//    while (t--) {
//        cin >> n;
//
//        if (n == 1) cout << 8 << endl;
//        else if (n == 2) cout << 33 << endl;
//        else {
//            int sum = 0, x = n / 2;
//            sum += 4 * n * n + 3 * n + 1;
//            if (n % 2 == 0) sum += 2 * n * n + n;
//            else sum += 2 * ((x + 1) * (2 * n + 1) - n);
//
//            sum += 4 * (n - x) * x;
//            cout << sum << endl;
//        }
//    }
//}