#include <iostream>
#include <math.h>

int main()
{
    int ile, liczba; 
    std::cin >> ile;
    while (ile--)
    {
        std::cin >> liczba;
        for (int i = pow(2, 23);; i/=2)
            if (liczba >= i)
               { liczba -= i; break; }
        std::cout << 1 + liczba * 2 << std::endl;
    }
    return 0;
}