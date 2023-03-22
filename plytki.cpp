#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int ile; cin >> ile;
	while (ile--)
	{
		int x, y;
		cin >> x >> y;
		for (int i = 0; i < x; i++)
			cout << "W";
		cout << "\n";
		for (int i = 0; i < y - 2; i++)
		{
			for (int j = 0; j < x; j++)
				cout << "B";
			cout << "\n";
		}
		cout << "W";
		for (int j = 0; j < x-1; j++)
			cout << "B";
		cout << "\n";
	}



	return 0;
}