#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	string a, b;
	cin >> a >> b;

	int x, y;
	x = abs(a[0] - b[0]);
	y = abs(a[1] - b[1]);

	if ((x == 1 && y == 2) || (x == 2 && y == 1))
		cout << "TAK" << endl;
	else
		cout << "NIE" << endl;

	return 0;
}
