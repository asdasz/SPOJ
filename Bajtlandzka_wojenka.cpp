#include <iostream>
#include <algorithm>

int main()
{
    int tab[27], tab2[26];
    tab[26] = 100;
    for (int i = 0; i < 26; i++)
        std::cin >> tab[i];
    std::sort(tab, tab+26);
    
    int x = 0;
    int b = 0;
    for (int i = 1; i <= 52; i++)
        if (i < tab[x])
        {
            tab2[b] = i;
            b++;
        }
        else
            x++;
    int win = 0;
    /*for (int i = 0; i < 26; i++)
        std::cout << tab[i] << "\t" << tab2[i] << std::endl;*/

    for (int i = 0; i < 26; i++)   
        if (tab[i] > tab2[win])
            win++;
    std::cout << win << std::endl;

    


}
