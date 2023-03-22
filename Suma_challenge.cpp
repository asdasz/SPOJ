/*#include <iostream>
using namespace std;

int main()
{

	for (int i = 0; i < 10; i++)
	{
		int x;
		cin >> x;
		cout << (1 + x) * x / 2 << endl;
	}

	return 0;
}*/

#include <iostream>
int main() {
	int ile = 10;
	while (ile--)
	{
		int x;
		std::cin >> x;
		std::cout <<(x*x+x)/2 << std::endl;
	}
}