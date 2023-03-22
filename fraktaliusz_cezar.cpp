#include <iostream>

using namespace std;

int main()
{
    int q; cin >> q;
    while (q--)
    {
        string czy_fraktal;
        cin >> czy_fraktal;


        if (czy_fraktal.size() == 7)
            for (int i = 0; i < 27; i++)
            {
                if (czy_fraktal == "FRAKTAL")
                {
                    cout << "tak\n";
                    break;
                }
                else
                    for (int j = 0; j < 7; j++)
                    {
                        czy_fraktal[j] += 1;
                        //cout << czy_fraktal[j];
                        if (czy_fraktal[j] == 90)
                            czy_fraktal[j] -= 26;
                    }
                if (i == 26)
                {
                    cout << "nie\n";
                    break;
                }
            }

        else if (czy_fraktal.size() < 7)
            cout << "nie\n";
    }
}