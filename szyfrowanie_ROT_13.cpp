#include <iostream>
#include <string>

using namespace std;

int main()
{
    string slowa;
    while (getline(cin, slowa))
    {
        for (int i = 0; i < slowa.size(); i++)
        {
            if (slowa[i] >= 48 && slowa[i] <= 52)
                slowa[i] = slowa[i] + 5;
            else if (slowa[i] >= 53 && slowa[i] <= 57)
                slowa[i] = slowa[i] - 5;
            else if (slowa[i] >= 65 && slowa[i] <= 77)
                slowa[i] = slowa[i] + 13;
            else if (slowa[i] >= 78 && slowa[i] <= 90)
                slowa[i] = slowa[i] - 13;
            else if (slowa[i] >= 97 && slowa[i] <= 109)
                slowa[i] = slowa[i] + 13;
            else if (slowa[i] >= 110 && slowa[i] <= 122)
                slowa[i] = slowa[i] - 13;
        }


        cout << slowa << endl;

    }
}
