#include <iostream>
#include <stack>

using namespace std;
int counter = 1;

void find_min(int* tab, int min_index, int max_index)
{

    stack<int> stos;
    stos.push(tab[0]);
    for (int i = min_index + 1; i < max_index; i++)
    {
        counter++;
        if (tab[i] < tab[i - 1])
        {
            while (!stos.empty() && stos.top() > tab[i])
            {
                stos.pop();
            }
            if (!stos.empty())
                if (stos.top() == tab[i])
                    counter--;
                else {
                    stos.push(tab[i]);
                }
            else
            {
                //counter--;
                stos.push(tab[i]);
            }
            /*for (int j = i-1; j >= 0 && tab[i]<=tab[j]; j--)
            {
                if(tab[i]==tab[j])
                {
                    counter--; break;
                }
            }*/
        }
        else {
            stos.push(tab[i]);
        }

    }
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ile;
    cin >> ile;
    int gowno;
    int* tab = new int[ile];
    int repeat = 0;
    int rn;
    cin >> gowno >> tab[0];
    for (int i = 1; i < ile - repeat; i++) {
        cin >> gowno >> rn;
        if (rn == tab[i - 1]) {
            repeat++;
            i--;
        }
        else {
            tab[i] = rn;
        }
    }

    find_min(tab, 0, ile - repeat);

    cout << counter;

    return 0;
}