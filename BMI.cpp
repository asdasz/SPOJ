#include <iostream>

using namespace std;

int main()
{
	int i = 0, j = 0, k = 0;
	int ile; cin >> ile;
	string* nied = new string[ile];
	string* norm = new string[ile];
	string* nadw = new string[ile];


	while (ile--)
	{
		string kto;
		double masa, wzrost, bmi;
		cin >> kto >> masa >> wzrost;

		bmi = masa / wzrost / wzrost*10000;
	//	cout << bmi << endl;
		if (bmi < 18.5)
		{
			nied[i] = kto;
			i++;
		}

		else if (bmi >= 18.5 && bmi < 25)
		{
			norm[j] = kto;
			j++;
		}

		else
		{
			nadw[k] = kto;
			k++;
		}
	}
	cout << "niedowaga" << endl;
	if (i != 0)
	{
//		cout << "niedowaga" << endl;
		for (int q = 0; q < i; q++)
		{
			cout << nied[q] << endl;
		}
	}
	cout << endl;
	cout << "wartosc prawidlowa" << endl;
	if (j != 0)
	{
//		cout << "wartosc prawidlowa" << endl;
		for (int q = 0; q < j; q++)
		{
			cout << norm[q] << endl;
		}
	}
	cout << endl;
	cout << "nadwaga" << endl;
	if (k != 0)
	{
//		cout << "nadwaga" << endl;
		for (int q = 0; q < k; q++)
		{
			cout << nadw[q] << endl;
		}
	}



	delete[]nied;
	delete[]norm;
	delete[]nadw;

	return 0;
}

