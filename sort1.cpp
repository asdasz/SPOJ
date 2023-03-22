#include <iostream>
#include <list>
#include <math.h>

using namespace std;

class Punkt
{
public:
    Punkt(string n, double px, double py) :nazwa(n), x(px), y(py), odleglosc(sqrt(x* x + y * y)) {}
    string nazwa;
    double x;
    double y;
    double odleglosc;
};

bool operator<(Punkt& P1, Punkt& P2)
{
    return P1.odleglosc < P2.odleglosc;
}

ostream& operator<< (ostream& os, Punkt& a)
{
    os << a.nazwa << " " << a.x << " " << a.y << endl;
    return os;
}

int main()
{
    list <Punkt> Lista;
    list <Punkt>::iterator itr;
    itr = Lista.begin();

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        for (int i = 0; i < n; i++)
        {
            string nazwa; cin >> nazwa;
            double x; cin >> x;
            double y; cin >> y;
            Punkt MojPunkt(nazwa, x, y);
            Lista.push_back(MojPunkt);
        }
        Lista.sort();
        for (itr = Lista.begin(); itr != Lista.end(); ++itr)
            cout << *itr;
        Lista.clear();
        cout << endl;
    }
    return 0;
}