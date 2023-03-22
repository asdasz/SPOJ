#include <iostream>
using namespace std;

int main()
{
	int ile;
	cin >> ile;
	for (int i = 0; i < ile; i++)
	{
		int a, b, aa, bb;
		cin >> a >> b;
		aa = a;
		bb = b;
		for (; aa != bb;)
		{
			if (aa < bb)
				aa += a;
			else
				bb += b;
		}


		cout << aa << endl;
	}



	return 0;
}