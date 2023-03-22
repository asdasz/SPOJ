//#include "stdafx.h"
#include <iostream>
using namespace std;
long long Newton(int n, int k)
{
	if (n == k) return 1;
	if (k == 0) return 1;
	if (k > n / 2) k = n - k;
	long long  W;

	W = n - k + 1;

	if (k == 0 || k == n)
		W = 1;
	else
		for (int i = 2; i <= k; i++)
		{
			W = W * (n - k + i);
			W = W / i;
		}

	return W;
}
int main()
{
	int tests;
	cin >> tests;
	for (int i = 0; i < tests; i++)
	{
		int a, b;
		cin >> a >> b;
		cout << Newton(a, b) << endl;
	}
	return 0;
}
