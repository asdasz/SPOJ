#include <iostream>

using namespace std;

int main()
{
    int testy;
    cin >> testy; //testy = 5
    long long int a, b, pole;
    long long int wynik;
    while (testy--)
    {
        wynik = 0;
        cin >> a >> b;
        pole = a * b;
        if (a != 1 && b != 1)
        {
            wynik += (a - 2) * (b - 2) * (pole - 9);
            wynik += 4 * (pole - 4);
            wynik += (pole - 6) * (a + b - 4) * 2;
        }

        else
        {
            if (b == 1)
            {
                int c = a;
                a = b;
                b = c;
            }
            // a == 1

            if (b != 1 || b != 2)
            {
                wynik += 2 * (b - 2);
                wynik += (b - 2) * (b - 3);
            }
        }
        cout << wynik << endl;
    }
    return 0;
}

