#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	double x1, y1, r1, x2, y2, r2;
	double odleglosc, l;
	cin >> n;
	cout.setf(ios::fixed);
	cout.precision(2);
	while(n--)
	{
		cin >> x1; cin >> y1; cin >> r1;
		cin >> x2; cin >> y2; cin >> r2;
		odleglosc = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
		if (r1 + r2 <= odleglosc) //okregi rozlaczne/styczne
			l = 0;
		else if (odleglosc > abs(r1 - r2) && odleglosc < r1 + r2)//okregi przecinaja sie
			l = r1 + r2 - odleglosc;
		else if (odleglosc <= abs(r1 - r2)) //jeden w drugim
		{
			if (r1 < r2)
				l = 2 * r1;
			else
				l = 2 * r2;
		}
		cout << l << endl;
	}
	return 0;
}