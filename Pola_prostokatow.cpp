#include <iostream>

using namespace std;



//int licz_pole(Punkt p, Punkt q);

class Punkt
{
protected:
    int x, y;

public:
    friend ostream& operator <<(ostream& ekran, Punkt& p1);
    friend int licz_pole(Punkt a, Punkt b);
    Punkt()
    {
        x = 0; y = 0;
    }

    Punkt(int a, int b) 
    { 
        x = a;
        y = b;
    }
    ~Punkt() {}
};

class Prostokat
{
    Punkt a, b, c, d;

public:
    friend ostream& operator <<(ostream& ekran, Prostokat& p1);
    Prostokat(Punkt aa, Punkt bb, Punkt cc, Punkt dd)
    {
        a = aa;
        b = bb;
        c = cc;
        d = dd;
    }
    ~Prostokat() {};
    
};

ostream& operator<<(ostream& ekran, Prostokat& p)
{
    cout << p.a << p.b << p.c << p.d << endl;
    return ekran;
}
ostream& operator<<(ostream& ekran, Punkt& a)
{
    cout <<"("<< a.x << "." << a.y <<")"<< endl;
    return ekran;
}


int licz_pole(Punkt a, Punkt b)
{
    if ((b.x - a.x) * (b.y - a.y) < 0)
        return (-1) * (b.x - a.x) * (b.y - a.y);
    else
        return (b.x - a.x) * (b.y - a.y);
}

int main()
{
    int k[4], m[4];
    int pole;
    for (int i = 0; i < 4; i++)
        cin >> k[i];
    for (int i = 0; i < 4; i++)
        cin >> m[i];

    Punkt p1(k[0], k[1]), p2(k[0], k[3]), p3(k[2], k[3]), p4(k[2], k[1]);
    Punkt z1(m[0], m[1]), z2(m[0], m[3]), z3(m[2], m[3]), z4(m[2], m[1]);

    Prostokat a1(p1, p2, p3, p4), a2(z1, z2, z3, z4);
    //cout << a1 << a2;
    




    if (k[0] >= m[2] || k[2] <= m[0] || k[1] >= m[3] || k[3] <= m[1])
        pole = licz_pole(p1, p3) + licz_pole(z1, z3);

    else if (k[0] <= m[0] <= k[2] <= m[2] && m[1] <= k[1] <= m[3] <= k[3])
        pole = licz_pole(p1, p3) + licz_pole(z1, z3) - licz_pole(p2, z4);

    else if (m[0] <= k[0] <= m[2] <= k[2] && k[1] <= m[1] <= k[3] <= m[3])
        pole = licz_pole(p1, p3) + licz_pole(z1, z3) - licz_pole(p4, z2);

    else if (m[0] <= k[0] <= m[2] <= k[2] && k[1] <= m[1] <= k[3] <= m[3])
        pole = licz_pole(p1, p3) + licz_pole(z1, z3) - licz_pole(p4, z2);
        
    // i inne warunki

    cout << pole;
    return 0;
}
