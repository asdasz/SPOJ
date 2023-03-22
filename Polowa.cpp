#include <iostream>
#include <string>

using namespace std;

int main()
{
	int ile;
	cin >> ile;
	while (ile--)
	{
		int i = 1;
		string slowo;
		cin >> slowo;
		int dlugosc;
		dlugosc = slowo.length();
		for (i; i <= dlugosc; i++) {}
		for (int j = 0; j <= i / 2-1; j++)
			cout << slowo[j];
		cout << endl;


	}
}
