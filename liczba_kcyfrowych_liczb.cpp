#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int ile; cin >> ile;
	while (ile--)
	{
		long long int a, b, suma;
		cin >> a >> b;
		if (a != 1)
			suma = pow(b, a - 1) * (b - 1);
		else
			suma = pow(b, a);
		cout << suma << endl;



	}




	return 0;
}

