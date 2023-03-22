#include <iostream>
using namespace std;

int main() {

	int ile, a, b;
	cin >> ile;
	for (int i = 0; i < ile; i++)
	{
		cin >> a >> b;
		while (a != b)
		{
			if (a > b)
				a -= b;
			else if (b > a)
				b -= a;
		}
		cout << a + b << endl;
	}



	return 0;
}