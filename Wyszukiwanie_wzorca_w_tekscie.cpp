#include <iostream>
#include <string>
using namespace std;

int KnuttMorrisPratt(string s, string w)
{
	int* PI;
	PI = new int[w.length()];


	for (int i = 0; i < w.length(); i++)
		PI[i] = 0;

	int b = -1;
	PI[0] = -1;


	for (int i = 1; i < w.length(); i++)
	{
		while ((b > -1) && w[b] != w[i - 1]) b = PI[b];
		++b;
		if (i == w.length() || (w[i] != w[b])) PI[i] = b;
		else PI[i] = PI[b];
		//cout << i << " " << PI[i] << endl;
	}

	int pos = -1;
	b = 0;

	for (int i = 0; i < s.length(); i++)
	{
		while ((b > -1) && (w[b] != s[i])) b = PI[b];
		if (++b == w.length())
		{
			while (pos < i - b + 1)
				pos++;
			b = PI[b];
		}
	}

	return pos;
}


int main()
{
	int ile; cin >> ile;
	string pattern, text;
	int usuniete, pos;
	int z;
	while (ile--)
	{
		cin >> z>> pattern >> text;
		for (int i = 0; i < pattern.length(); i++)
			pattern[i] = tolower(pattern[i]);
		for (int i = 0; i < text.length(); i++)
			text[i] = tolower(text[i]);

		usuniete = 0;
		pos = 0;
		while (pos != -1)
		{
			pos = KnuttMorrisPratt (text, pattern);
			if (pos != -1)
			{
				cout << pos + usuniete << endl;
				text.erase(0, pos + 1);
				usuniete += pos + 1;
			}

		}
	}
	return 0;
}
