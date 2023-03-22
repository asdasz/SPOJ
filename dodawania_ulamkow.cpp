#include <iostream>
#include <math.h>

using namespace std;

unsigned long long int NWD(unsigned long long int a, unsigned long long int b)
{
    unsigned long long int pom;

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
    while (true)
    {
        string s1, s2;
        cin >> s1 >> s2;
        unsigned long long int l1 = 0, l2 = 0, m1 = 0, m2 = 0, nwd;

        for (int i = 0; s1[i] != '/'; i++)
        {
            l1 += s1[i] - 48;
            if (s1[i + 1] != '/')
                l1 *= 10;
        }

        for (int i = 0; s2[i] != '/'; i++)
        {
            l2 += s2[i] - 48;
            if (s2[i + 1] != '/')
                l2 *= 10;
        }
        bool c = false;
        for (int i = 0; i < s1.size(); i++) {

            if (c == true)
            {
                m1 += (s1[i] - 48) * pow(10, s1.size() - i - 1);
            }

            if (s1[i] == '/')
                c = true;
        }
        c = false;
        for (int i = 0; i < s2.size(); i++) {

            if (c == true)
            {
                m2 += (s2[i] - 48) * pow(10, s2.size() - i - 1);
            }

            if (s2[i] == '/')
                c = true;
        }
        cout << l1 << "/" << m1 << " + " << l2 << "/" << m2 << " = ";
        nwd = NWD(l1, m1);
        l1 /= nwd;
        m1 /= nwd;

        nwd = NWD(l2, m2);
        l2 /= nwd;
        m2 /= nwd;

        nwd = NWD(m1, m2);
        m1 /= nwd;
        //cout << l1 << " " << m1 << " " << l2 << " " << m2 << endl;
        unsigned long long int licznik = 0, mianownik = 0;
        mianownik = m1 * m2;
        m2 /= nwd;
        licznik = l1 * m2 + l2 * m1;
        nwd = NWD(licznik, mianownik);
        licznik /= nwd;
        mianownik /= nwd;
        cout << licznik << "/" << mianownik << endl;
    }
    return 0;
}

