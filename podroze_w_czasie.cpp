#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int x, ilebudynkow; cin >> ilebudynkow;
	x = ilebudynkow;
	vector<int> budynek;

	vector<vector<int> >cechy;
	while (ilebudynkow--)
	{
		for (int i = 0; i < 4; i++)
		{
			int x; cin >> x;
			budynek.push_back(x);
		}
		cechy.push_back(budynek);
		budynek.clear();
	}



	/* usuwanie rzedu
	for (int i = 0; i < cechy.size(); i++)
	{
		if (i == 1)
		{
			cechy.erase(cechy.begin() + i);
		}
	}
	*/

	//wypisz

	/*for (int i = 0; i < cechy.size(); i++)
	{
		for (int j = 0; j < 4; j++)
			cout << cechy[i][j] << " ";
		cout << "\n";
	}*/

	int ileatakow; cin >> ileatakow;
	while (ileatakow--)
	{
		int ludzie = 0;
		int x, y, r;
		cin >> x >> y >> r;

		for (int i = 0; i < cechy.size(); i++)
		{
			if ((cechy[i][0] - x) * (cechy[i][0] - x) + ((cechy[i][1] - y) * (cechy[i][1] - y)) <= r * r)
			{
				cout << cechy[i][2] << " ";
				ludzie += cechy[i][3];
				cechy.erase(cechy.begin() + i);
				i--;
			}
		}
		if (ludzie != 0)
			cout << endl << ludzie << endl;
		else
			cout << "NULL\n";
	}


}
