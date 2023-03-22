#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ile; cin >> ile;
    while (ile--)
    {
        int suma = 0;
        int roz; cin >> roz;                            //Tablica będzie oznaką koloru łączenia 2 odcinków
        char** tablica = new char* [roz];               //tworzenie tablicy 2D i wpisanie wszędzie "0"
        for (int i = 0; i < roz; i++)
            tablica[i] = new char[roz];
        for (int i = 0; i < roz; i++)
            for (int j = i; j < roz; j++)
                tablica[i][j] = '0';

        int odcinki; cin >> odcinki;
        int x, y;
        while (odcinki--)
        {
            cin >> x >> y;                              //wpisanie do tablicy "1" jako odcinków czerwonych
            tablica[x - 1][y - 1] = '1';
        }

        for (int i = 0; i < roz - 2; i++)       
            for (int j = i + 1; j < roz - 1; j++)       //Przeszukanie tablicy 2D, sprawdza czy dowolne 3 punkty są łączone odcinkami tego samego koloru
                for (int k = j + 1; k < roz; k++)                
                    if (tablica[i][j] == tablica[i][k] && tablica[i][k] == tablica[j][k])
                        suma++;
                
        cout << suma << endl;
    }
    return 0;
}