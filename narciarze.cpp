#include <iostream>
#include <string>

using namespace std;

int main()
{
    string form;

    while (getline(cin, form))
    {
        for(int i=0;;i++)
            cout<<form[i]<<endl;
    }
    return 0;
}
