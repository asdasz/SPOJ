#include <iostream>
#include <vector>
using namespace std;

class brylka
{
public:
    int lenght;
    vector<int>polaczenia;
    brylka() { lenght = 1; }
};

int main()
{
    int a, b, edges, tests, len;
    cin >> tests;
    while (tests--)
    {
        len = 0;
        cin >> edges; 
        brylka *br = new brylka[edges];
        for(int i = 0; i<edges-1; i++)
        {
            cin >> a >> b;
            //swaping
            if (b > a)
            {
                int bufor = a;
                a = b;
                b = bufor;
            } 
            br[b].polaczenia.push_back(a);
        }

        for (int i = edges - 1; i >= 0; i--)
        {
            for (int j = 0; j < br[i].polaczenia.size(); j++)
            {
                br[i].lenght++;
                br[i].lenght += br[br[i].polaczenia[j]].lenght;
                //cout << "lacze z " << br[i].polaczenia[j] << endl;
                //cout << " o dlug " << br[br[i].polaczenia[j]].lenght << endl;
            }
            len += br[i].lenght;
        }
        cout << len << endl;
        delete[]br;
    }
}