#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	long long int pr1[3], pr2[3], check = 0;
	cin >> pr1[0] >> pr1[1] >> pr1[2] >> pr2[0] >> pr2[1] >> pr2[2];
	sort(pr1, pr1 + 3);
	sort(pr2, pr2 + 3);

	for (int i = 0; i < 3; i++)
	{
		if (pr1[i] <= pr2[i])
			check++;
	}

	if (check == 3)
		cout << "tak\n";
	else
	{
		check = 0;
		for (int i = 0; i < 3; i++)
		{
			if (pr1[i] >= pr2[i])
				check++;
		}
		if (check == 3)
			cout << "tak\n";
		else
			cout << "nie\n";
	}
	return 0;
}




/*
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


class Prostopadloscian
{
	long long int a = 0, b = 0, c = 0, objetosc, przekatna, xycheck, xzcheck, yzcheck;

public:
	Prostopadloscian(long long int, long long int, long long int);
	~Prostopadloscian();
	void show();
	friend void compare1(Prostopadloscian a1, Prostopadloscian a2, int& xd);
	friend void compare2(Prostopadloscian a1, Prostopadloscian a2, int& xd);
	friend void compare3(Prostopadloscian a1, Prostopadloscian a2, int& xd);
	friend void compare4(Prostopadloscian a1, Prostopadloscian a2, int& xd);
};

Prostopadloscian::Prostopadloscian(long long int aa, long long int bb, long long int cc)
{
	a = aa; b = bb; c = cc;
	przekatna = a * a + b * b + c * c;
	objetosc = a * b * c;
	xycheck = a * a + b * b;
	xzcheck = a * a + c * c;
	yzcheck = b * b + c * c;
}
Prostopadloscian::~Prostopadloscian(){}

void Prostopadloscian::show()
{
	cout << a << " " << b << " " << c << " " << objetosc << " " << przekatna << endl;
}

//test wiekszej objetosci
void compare1(Prostopadloscian x, Prostopadloscian y, int &xd)
{
	//test objętości
	if (x.objetosc > y.objetosc)
		xd++;	
}
//test dlugosci bokow
void compare2(Prostopadloscian x, Prostopadloscian y, int& xd)
{
	if (x.a <= y.a && x.b <= y.b && x.c <= y.c)
		xd++;
}
//test rotacji
void compare3(Prostopadloscian x, Prostopadloscian y, int& xd)
{
	if ((x.a + x.b) * (x.a + x.b) <= y.xycheck && x.c <= y.c)
		xd++;
	else if ((x.a + x.c) * (x.a + x.c) <= y.xzcheck && x.b <= y.b)
		xd++;
	else if ((x.c + x.b) * (x.c + x.b) <= y.yzcheck && x.a <= y.a)
		xd++;
}
//test przekatnej
void compare4(Prostopadloscian x, Prostopadloscian y, int& xd)
{
	if ((x.a + x.b+x.c)* (x.a + x.b + x.c)<=y.przekatna)
		xd++;
}


int main()
{
	long long int pr1[3], pr2[3];
	while (cin >> pr1[0] >> pr1[1] >> pr1[2] >> pr2[0] >> pr2[1] >> pr2[2])
	{

		sort(pr1, pr1 + 3);
		sort(pr2, pr2 + 3);

		//cout << pr1[0] << pr1[1] << pr1[2];
		Prostopadloscian a1(pr1[0], pr1[1], pr1[2]);
		Prostopadloscian a2(pr2[0], pr2[1], pr2[2]);
		int test = 0;
		compare1(a1, a2, *&test);
		if (test == 1)
			cout << "nie\n";
		else
		{
			compare2(a1, a2, *&test);
			if (test == 1)
				cout << "tak\n";
			else
			{
				compare3(a1, a2, *&test);
				if(test==1)
					cout << "tak\n";
				else
				{
					compare4(a1, a2, *&test);
					if (test == 1)
						cout << "tak\n";
					else
						cout << "nie\n";
				}
			}
		}
	}
	return 0;
}
*/