/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string napis;
    while ( getline(cin, napis))
    {
        string litery;
        for (int i = 0; napis[i] != ' '; i++)
        {
            litery += napis[i];
        }

        int dlugosc = litery.size();
        int j = dlugosc + 1;

        for (int i = 0; i < dlugosc; i++)
        {
            cout << litery[i];

            for (; napis[j] != ' '; j++)
            {
                
                cout << napis[j];
                if (j +1 == napis.size())
                    break;

            }
            if(j+1!=napis.size())
            cout << " ";
            j++;


        }
        
        cout << endl;

    }

}
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string encrypted, decrypted;
	while (getline(cin, encrypted))
	{
		int j = 0;
		int n = 0;
		if (encrypted.size() == 1)
		{
			encrypted += ' ';
			cout << encrypted << endl;
			encrypted.clear();
			continue;
		}
		while (encrypted[n] != ' ')
		{
			n++;
			j++;
		}
		for (int i = 0, t = 0; i < n; i++)
		{
			decrypted += encrypted[i];
			t++;
			if ((encrypted[j] == ' ') && (encrypted[j + 1] == ' ') && (j < encrypted.length() - 1))
			{
				decrypted += ' ';
				t++;
				j++;
				continue;
			}
			else if (encrypted[j] == ' ') { j++; }
			while ((encrypted[j] != ' ') && (j < encrypted.length()))
			{
				decrypted += encrypted[j];
				t++;
				j++;
			}
			decrypted += ' ';
		}
		cout << decrypted << endl;
		decrypted.clear();
	}
	return 0;
}