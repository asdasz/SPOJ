#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;


    while (t--)
    {
        int a, b;
        cin >> a >> b;

        vector<bool> numbers(b - a + 1, true);

        int ile = b - a + 1;

        for (int i = 2; i <= b && ile != 0; i++)
        {
            if (b / i < i)
                break;
            for (int j = i * i; j <= b; j += i)
            {
                if (j < a)
                    j = ((a / j) * j);
                while (j < a)
                    j += i;
                if (j > a && j - i < a && !numbers[j - a])
                    continue;

                if (numbers[j - a])
                    ile--;

                numbers[j - a] = false;
            }
        }

        for (int i = 0; i < b - a + 1; i++)
            if (numbers[i])
                cout << i + a << "\n";
    }
}