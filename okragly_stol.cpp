#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
    vector<string> ludzie_przy_stole;

    ludzie_przy_stole.push_back({ "Ania" });
    ludzie_przy_stole.push_back({ "Andrzej" });
    ludzie_przy_stole.push_back({ "Monika" });
    ludzie_przy_stole.push_back({ "Michal" });

    int ile; cin >> ile;

    while (ile--)
    {
        string pierwszaosoba, drugaosoba, nowaosoba;
        cin >> pierwszaosoba >> drugaosoba;
        int nowekrzesla;
        cin >> nowekrzesla;

        int miejsce=0;

        for (int i = 0; strcmp(ludzie_przy_stole[i].c_str(), pierwszaosoba.c_str())!=0; i++)
            miejsce = i+1;
        vector<string> noweimiona;

        for (int i = 0; i < nowekrzesla; i++)
        {
            string ktos;
            cin >> ktos;
            noweimiona.push_back(ktos);
        }
        ludzie_przy_stole.insert(ludzie_przy_stole.begin() + miejsce+1, noweimiona.begin(), noweimiona.end());
        noweimiona.clear();
    }

    for (int i = 0; i < ludzie_przy_stole.size(); i++)
        cout << ludzie_przy_stole[i] << endl;


    return 0;
}