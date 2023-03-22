#include <iostream>
using namespace std;

int main()
{
	int ile, C, L;
	cin >> ile;
	for (int i = 0; i < ile; i++)
	{
		cin >> L >> C;
		if (L != 1)
		{
			if (C % (L - 1) == 0)
				cout << "NIE" << endl;

			else
				cout << "TAK" << endl;
		}
		else
			cout << "TAK" << endl;
	}
	return 0;
}