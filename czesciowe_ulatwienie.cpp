#include <iostream>
#include <math.h>
using namespace std;


bool czy_podzielna(int n[20])
{
    for (int i = 0; i < 20; i++)
    {
        if (n[i] % 2 != 0)
            return false;       
    }
    return true;
}

int main()
{
    int ile; cin >> ile; 
    while (ile--)
    {
        int linijki;
        cin >> linijki;
        int *znaki = new int[linijki];

        for (int i = 0; i < linijki; i++)
        {
            cin >> znaki[i];
        }


        int tab[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };

        for (int i = 0; i < linijki; i++)
        {
            
            if (znaki[i] >= 524288)
            {
                znaki[i] -= 524288;
                tab[19]++;
            }
            if (znaki[i] >= 262144)
            {
                znaki[i] -= 262144;
                tab[18]++;
            }
            if (znaki[i] >= 131072)
            {
                znaki[i] -= 131072;
                tab[17]++;
            }
            if (znaki[i] >= 65536)
            {
                znaki[i] -= 65536;
                tab[16]++;
            }
            if (znaki[i] >= 32768)
            {
                znaki[i] -= 32768;
                tab[15]++;
            }
            if (znaki[i] >= 16384)
            {
                znaki[i] -= 16384;
                tab[14]++;
            }
            if (znaki[i] >= 8192)
            {
                znaki[i] -= 8192;
                tab[13]++;
            }
            if (znaki[i] >= 4096)
            {
                znaki[i] -= 4096;
                tab[12]++;
            }
            if (znaki[i] >= 2048)
            {
                znaki[i] -= 2048;
                tab[11]++;
            }
            if (znaki[i] >= 1024)
            {
                znaki[i] -= 1024;
                tab[10]++;
            }
            if (znaki[i] >= 512)
            {
                znaki[i] -= 512;
                tab[9]++;
            }
            if (znaki[i] >= 256)
            {
                znaki[i] -= 256;
                tab[8]++;
            }
            if (znaki[i] >= 128)
            {
                znaki[i] -= 128;
                tab[7]++;
            }
            if (znaki[i] >= 64)
            {
                znaki[i] -= 64;
                tab[6]++;
            }
            if (znaki[i] >= 32)
            {
                znaki[i] -= 32;
                tab[5]++;
            }
            if (znaki[i] >= 16)
            {
                znaki[i] -= 16;
                tab[4]++;
            }
            if (znaki[i] >= 8)
            {
                znaki[i] -= 8;
                tab[3]++;
            }
            if (znaki[i] >= 4)
            {
                znaki[i] -= 4;
                tab[2]++;
            }
            if (znaki[i] >= 2)
            {
                znaki[i] -= 2;
                tab[1]++;
            }
            if (znaki[i] >= 1)
            {
                znaki[i] -= 1;
                tab[0]++;
            }
        }

        if(czy_podzielna(tab)==true)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}