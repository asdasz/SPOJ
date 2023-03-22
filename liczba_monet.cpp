
#include <iostream>

using namespace std;

int main()
{
    float hajj;
    cin >> hajj;
    hajj *= 100;
    int hajs = hajj;
    int monety = 0;
    while (hajs != 0)
    {
        for (hajs >= 500; hajs >= 500; hajs -= 500)
            monety++;


        if (hajs >= 200 && hajs < 500)
        {
            monety++;
            hajs -= 200;
        }   

        if (hajs >= 100 && hajs < 200)
        {
            monety++;
            hajs -= 100;
        }  

        if (hajs >= 50 && hajs < 100)
        {
            monety++;
            hajs -= 50;
        }    

        if (hajs >= 20 && hajs < 50)
        {
            monety++;
            hajs -= 20;
        }

        if (hajs >= 10 && hajs < 20)
        {
            monety++;
            hajs -= 10;
        }    

        if (hajs >= 5 && hajs < 10)
        {
            monety++;
            hajs -= 5;
        }

        if (hajs >= 2 && hajs < 5)
        {
            monety++;
            hajs -= 2;
        }  

        if (hajs ==1)
        {
            monety++;
            hajs -= 1;
        }   

    }

    cout << monety << endl;
}

