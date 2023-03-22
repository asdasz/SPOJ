#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int ile1, ile2;
    cin >> ile1 >> ile2;
    char tab1[8][8], tab2[8][8];

    string* tablica1 = new string[ile1];
    string* tablica2 = new string[ile2];





    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            tab1[i][j] = 48;
            tab2[i][j] = 48;
            //cout << tab1[i][j];
        }
        //cout << endl;
    }
    char figura, litera, pole;
    for (int i = 0; i < ile1; i++)
    {
        cin >> figura >> litera >> pole;
        tablica1[i] += figura;
        tablica1[i] += litera;
        tablica1[i] += pole;
 //       cout << tablica1[i];
        litera = litera-49;
        pole = 104 - pole;

      
        int literawcyfre, polewcyfre;
        literawcyfre = litera-48;
        polewcyfre = pole - 48;

        tab1[polewcyfre][literawcyfre] = figura;
    }

    for (int i = 0; i < ile2; i++)
    {
        cin >> figura >> litera >> pole;
        tablica2[i] += figura;
        tablica2[i] += litera;
        tablica2[i] += pole;
        litera = litera - 49;
        pole = 104 - pole;

        int literawcyfre, polewcyfre;
        literawcyfre = litera - 48;
        polewcyfre = pole - 48;

        tab2[polewcyfre][literawcyfre] = figura;
    }

    sort(tablica1, tablica1 + ile1);
    sort(tablica2, tablica2 + ile2);



    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << tab2[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < ile2; i++)
        cout << tablica2[i][0] << " " << tablica2[i][1] << tablica2[i][2] << endl;

    cout << endl;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << tab1[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < ile1; i++)
        cout << tablica1[i][0] << " " << tablica1[i][1] << tablica1[i][2] << endl;
    return 0;
}
