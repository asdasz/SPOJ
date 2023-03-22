kmn#include <iostream>

using namespace std;

int konwertuj_w_arabskie(string x)
{
	int a = 0;
	int dlugosc = x.length();

	for (int i = 0; i < dlugosc; i++)
	{
		if (x[i] == 'M')
			a += 1000;

		if (x[i] == 'D')
			a += 500;

		if (x[i] == 'L')
			a += 50;
		if (x[i] == 'V')
			a += 5;
//_________________________________________________________________________//
		if (x[i] == 'C' && (x[i + 1] == 'D' || x[i + 1] == 'M'))
			a -= 100;
		if (x[i] == 'C' && (x[i + 1] != 'D' && x[i + 1] != 'M'))
			a += 100;

		if (x[i] == 'X' && (x[i + 1] == 'L' || x[i + 1] == 'C'))
			a -= 10;
		if (x[i] == 'X' && (x[i + 1] != 'L' && x[i + 1] != 'C'))
			a += 10;

		if (x[i] == 'I' && (x[i + 1] == 'V' || x[i + 1] == 'X'))
			a -= 1;
		if (x[i] == 'I' && (x[i + 1] != 'V' && x[i + 1] != 'X'))
			a += 1;


	}
	//cout << a << endl;
	return a;
}

void wypisz_w_rzymskich(int y)
{
	for (; y >= 1000; y-=1000)
		cout << "M";

	for (; y >= 100;)
	{
		switch (y / 100)
		{
		case 9:			cout << "CM";			break;
		case 4:			cout << "CD";			break;
		case 8:			cout << "D";
		case 3:			cout << "C";
		case 2:			cout << "C";
		case 1:			cout << "C";			break;
		case 7:			cout << "DCC";			break;
		case 6:			cout << "DC";			break;
		case 5:			cout << "D";			break;
		}
		y -= (y / 100) * 100;
	}

	for (; y >=10;)
	{
		switch (y / 10)
		{
		case 9:			cout << "XC";			break;
		case 4:			cout << "XL";			break;
		case 8:			cout << "L";
		case 3:			cout << "X";
		case 2:			cout << "X";
		case 1:			cout << "X";			break;
		case 7:			cout << "LXX";			break;
		case 6:			cout << "LX";			break;
		case 5:			cout << "L";			break;
		}
		y -= (y / 10) * 10;
	}

	for (; y >= 1;)
	{
		switch (y)
		{
		case 9:			cout << "IX";			break;
		case 4:			cout << "IV";			break;
		case 8:			cout << "V";
		case 3:			cout << "I";
		case 2:			cout << "I";
		case 1:			cout << "I";			break;
		case 7:			cout << "VII";			break;
		case 6:			cout << "VI";			break;
		case 5:			cout << "V";			break;
		}
		y -= y;
	}
	cout << endl;
}

int main()
{
	string X, D;
	while (cin >> X >> D)
		wypisz_w_rzymskich(konwertuj_w_arabskie(X)+konwertuj_w_arabskie(D));
	return 0;
}
