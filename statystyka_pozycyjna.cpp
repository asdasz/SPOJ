#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    vector<int> pomiary;
    int ktory;
    while (cin >> ktory)
    {
        if (cin.peek() == '\n')
        {
            cout << "-" << endl;           
        }

        else
        {
            int x;
            for (;;)
            {
                cin >> x;
                pomiary.push_back(x);
                if (cin.peek() == '\n') break;
            }
            
            sort(pomiary.begin(), pomiary.end());


            //for (int i = 0; i < pomiary.size(); i++)
            //    cout << pomiary[i] << " ";
            //cout << endl;
            for (int i = 1; i < pomiary.size(); i++)
            {
                if (pomiary[i] == pomiary[i - 1])
                {
                    pomiary.erase(pomiary.begin() +i -1);
                    i--;
                }
            }
            //for (int i = 0; i < pomiary.size(); i++)
            //    cout << pomiary[i] << " ";
            //cout << endl;
            
            if (ktory > pomiary.size())
                cout << "-\n";
            else
                cout << pomiary[pomiary.size() - (ktory)] << endl;
            pomiary.clear();
        }
    }
}