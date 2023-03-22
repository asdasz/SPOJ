#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	fstream plik;
	int nrlinii = 0;
	string linia;


	while (getline(cin, linia))
	{
		nrlinii++;
	}
	cout << nrlinii << endl;

	return 0;
}