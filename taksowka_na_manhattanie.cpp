#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ile; cin >> ile;
    int* tab1 = new int[ile];
    int* tab2 = new int[ile];
    long long int mx, dx, my, dy;
    cin >> tab1[0] >> tab2[0];
    mx = tab1[0];
    dx = tab1[0];
    my = tab2[0];
    dy = tab2[0];
    for (int i = 1; i < ile; i++)
    {
        cin >> tab1[i] >> tab2[i];
        if (tab1[i] < mx)
            mx = tab1[i];
        if (tab1[i] > dx)
            dx = tab1[i];
        if (tab2[i] < my)
            my = tab2[i];
        if (tab2[i] > dy)
            dy = tab2[i];
    }

    //cout << mx << " " << dx << " " << my << " " << dy << endl;
    long long int najwodl = 0;

    long long int ldnaj, pgnaj, lgnaj, pdnaj;
    ldnaj = tab1[0] - mx + tab2[0] - my;
    lgnaj = tab1[0] - mx - tab2[0] + dy;
    pdnaj = dx - tab1[0] + tab2[0] - my;
    pgnaj = dx - tab1[0] + dy - tab2[0];

    for (int i = 1; i < ile; i++)
    {
        if(tab1[i] - mx + tab2[i] - my < ldnaj)
            ldnaj = tab1[i] - mx + tab2[i] - my;
        if(tab1[i] - mx - tab2[i] + dy <lgnaj)
            lgnaj = tab1[i] - mx - tab2[i] + dy;
        if(dx - tab1[i] + tab2[i] - my<pdnaj)
            pdnaj = dx - tab1[i] + tab2[i] - my;
        if(dx - tab1[i] + dy - tab2[i]<pgnaj)
            pgnaj = dx - tab1[i] + dy - tab2[i];
    }
    //cout << ldnaj << " " << lgnaj << " " << pgnaj << " " << pdnaj << endl;
    if (ldnaj + pgnaj < lgnaj + pdnaj)
        najwodl = dy + dx - my - mx - (ldnaj + pgnaj);
    else
        najwodl = dy + dx - my - mx - (lgnaj + pdnaj);
    cout << najwodl << endl;
}




















/*
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int ile; cin >> ile;
    int* tab1 = new int[ile];
    int* tab2 = new int[ile];
    int roznica, najw_roznica = 0;
    for (int i = 0; i < ile; i++)
        cin >> tab1[i] >> tab2[i];

    for (int k = 0; k < ile - 1; k++)
    {
        for (int i = 0; i + k < ile - 1; i++)
        {
            for (int j = 1; j + k < ile; j++)
            {
                roznica = 0;
                if (tab1[k + i] >= tab1[k + j])
                    roznica += tab1[k + i] - tab1[k + j];
                else
                    roznica += tab1[k + j] - tab1[k + i];

                if (tab2[k + i] >= tab2[k + j])
                    roznica += tab2[k + i] - tab2[k + j];
                else
                    roznica += tab2[k + j] - tab2[k + i];
                if (najw_roznica < roznica)
                    najw_roznica = roznica;

            }
        }
    }

    cout << najw_roznica << endl;


    delete[] tab1;
    delete[] tab2;

}
*/