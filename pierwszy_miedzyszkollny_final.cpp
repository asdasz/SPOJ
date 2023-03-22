#include <iostream>

int main()
{
	int tab[8], suma=0;
	for (int i = 0; i < 8; i++)
	{
		std::cin >> tab[i];
		if (i % 2 == 0)
			suma += tab[i];
		else
			suma -= tab[i];
	}
	std::cout << suma << "\n";
}