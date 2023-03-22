#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    vector<int> liczby;
    int x; cin >> x;
    double suma=0, srednia;
    for (int i = 0; i < x; i++)
    {
        int nowa; cin >> nowa;
        liczby.push_back(nowa);
        suma += nowa;
    }

    srednia = suma / x;
    int najblizsza_sredniej = liczby[0];
    double odl;
    for (int i = 0; i < x; i++)
    {
        if (liczby[i] > srednia)
        {
            odl = liczby[i] - srednia;
            if (odl <= abs(srednia - najblizsza_sredniej))
                najblizsza_sredniej = liczby[i];
        }
        else
        {
            odl = srednia - liczby[i];
            if (odl < abs(srednia - najblizsza_sredniej))
                najblizsza_sredniej = liczby[i];
        }

    }

    cout << najblizsza_sredniej << endl;
    return 0;
}
