#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double a, b, c, wynik;
	cin >> a >> b >> c;
	wynik = a / b * c;
	cout << fixed << setprecision(2) << wynik << "\n";
	return 0;
}