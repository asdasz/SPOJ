#include <iostream>



int main()
{
    int x=0, y, count=0;

    for (;;)
    {
        y = x;
        std::cin >> x;
        if (x == 42)
        {
            if (x == 42 && y != 42)
                count++;
            else
                count = 0;
        }
        
        std::cout << x << std::endl;
        if (count == 3)
            break;
    }
    return 0;
}

/*#include <iostream>

using namespace std;

int main()
{
    int x, y, count = 0;
    cin >> y;
    cout << y << endl;
    for (;;)
    {
        cin >> x;
        if (x == 42 && y != 42)
        {
            count++;
        }
        cout << x << endl;
        y = x;
        if (count == 3)
        {
            break;
        }
    }
    return 0;
}*/