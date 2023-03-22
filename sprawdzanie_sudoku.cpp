#include <iostream>

using namespace std;

int main()
{
    int ile; cin >> ile;
    while (ile--)
    {
        int same = 0;
        int tab[9][9], najw = 1, najm = 9;
        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
            {
                cin >> tab[i][j];
                if (tab[i][j] < najm)
                    najm = tab[i][j];
                if (tab[i][j] > najw)
                    najw = tab[i][j];
            }

        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
            {
                for (int k = j + 1; k < 9; k++) //sprawdza czy w wierszu są te same liczby
                    if (tab[i][j] == tab[i][k])
                        same++;

                for (int k = i + 1; k < 9; k++) //sprawdza czy w kolumnie są te same liczby
                    if (tab[i][j] == tab[k][j])
                        same++;
            }



        for (int a = 0; a < 3; a++) //sprawdza czy w kwadracie 3x3 są te same liczby        
            for (int b = 0; b < 3; b++)           
                for (int i = 0; i < 3; i++)               
                    for (int j = 0; j < 3; j++)                    
                        for (int k = 0; k < 3; k++)                        
                            for (int l = 0; l < 3; l++)                            
                                if (tab[3 * a + i][3 * b + j] == tab[3 * a + k][3 * b + l] && i!=k &&j!=l)
                                    same++;
                            
                       
        if (najw != 9 || najm != 1 || same != 0)
            cout << "NIE" << endl;
        else
            cout << "TAK" << endl;


    }
    return 0;
}
