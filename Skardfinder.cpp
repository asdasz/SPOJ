#include <iostream>

using namespace std;

int main()
{
	int zestaw;
	cin >> zestaw;
	while (zestaw--)
	{
		long long int ile, kierunek, dl, dlo=0, szero=0;
		long long int NS, EW;
		cin >> ile;
		int* tab = new int[ile];
		for (int i = 0; i < ile; i++)
		{
			cin >> kierunek;
			cin >> dl;
			switch (kierunek)
			{
			case 0:
			case 1:
				if (kierunek == 0)
					dlo += dl;
				else
					dlo -= dl;
				break;


			case 2:
			case 3:
				if (kierunek == 2)
					szero -= dl;
				else
					szero += dl;
				break;
			}
		}
		if(szero ==0 && dlo ==0)
			cout<<"studnia"<<endl;
		else
		{
			if (dlo > 0)
				cout << "0 " << dlo << endl;
			else if (dlo < 0)
				cout << "1 " << (-1) * dlo << endl;
			if (szero > 0)
				cout << "3 " << szero << endl;
			else if(szero < 0)
				cout << "2 " << (-1) * szero << endl;
		}
	}
	return 0;
}