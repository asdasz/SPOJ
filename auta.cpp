#include <iostream>

using namespace std;

int main()
{
    int ile=0, szybszy=0, wolniejszy=0;
    cin >> ile;
    int ktory;
    double* v = new double[ile];
    double* odl = new double[ile];
    double* czas = new double[ile];


    for (int i = 0; i < ile; i++)
    {
        cin >> odl[i] >> v[i];
        czas[i] = odl[i] / v[i];
    }
    cin >> ktory;



    for (int i = 0; i < ile; i++)
    {
        if (i == ile - 1 && ktory-1==ile)
            break;
        else if (i == ktory-1)
            i++;

        if (odl[ktory - 1] > odl[i] && czas[ktory - 1] < czas[i])
            szybszy++;
        if (odl[ktory - 1] < odl[i] && czas[ktory - 1] > czas[i])
            wolniejszy++;

    }


    cout << szybszy << " " << wolniejszy << endl;

    return 0;
}