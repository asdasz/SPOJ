#include <iostream>
using namespace std;

int main()
{

	int ile;
	cin >> ile;

	for (int i = 0; i < ile; i++)
	{
		int najwi, pier, drug;
		cin >> najwi >> pier >> drug;

		for (int j = 1; j * pier < najwi; j++)
		{
			if (j * pier % drug == 0) {}
			else { cout << j * pier << endl; }
		}
	}

	return 0;
}