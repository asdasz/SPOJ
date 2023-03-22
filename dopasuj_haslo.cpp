#include <iostream>
#include <string>

using namespace std;

int main()
{
	int ile; cin >> ile;
	string a, b;
	while (ile--)
	{
		cin >> a >> b;
		if (a.size() != b.size())
			cout << "error" << endl;
		else
		{
			for (int i = 0; i < a.size(); i++)
			{
				if (b[i] != '*' && b[i] != a[i])
				{
					cout << "error" << endl;
					break;
				}
				if (i + 1 == a.size())
				{
					cout << "ok" << endl;
				}
			}
		}

	}


	return 0;
}