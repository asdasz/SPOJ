#include <iostream>
#include <math.h>
//#include <bits/stdc++.h>



int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int x; std::cin >> x; 
    while (x--)
    {
        long long int liczba;
        std::cin >> liczba;
        int ilezer = 0;
        
        for (int i = 1; i < 14; i++)        
            ilezer += liczba / pow(5, i);
        std::cout << ilezer << "\n";
    }
}
