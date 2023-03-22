#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int V, E;
	int wmax = 0; // V - liczba wierzcholkow, E - liczba krawedzi
	cout << "Liczba wierzcholkow: ";
	cin >> V;
	cout << "Liczba krawedzi: ";
	cin >> E;

	int** macierz_sasiedztwa= new int*[V];
	for (int i = 0; i < V; i++)
	{
		macierz_sasiedztwa[V] = new int[V];
	}

	for (int i = 0; i < V; i++)
		for (int j = 0; j < V; j++)
		{
			macierz_sasiedztwa[i][j] = 0;
		}


	vector<int>* ZA = new vector<int>[V + 1];    // mozna tez wykorzystac liste, nie ma to roznicy

	for (int i = 1; i <= E; i++)       // wprowadz wierzcholki i krawedzie
	{
		int a, b;
		cout << "Krawedz " << i << ": ";
		cin >> a >> b;

		macierz_sasiedztwa[a - 1][b - 1] = 1;
		macierz_sasiedztwa[b - 1][a - 1] = 1;

		ZA[a].push_back(b);
		ZA[b].push_back(a);
	}


	for (int i = 0; i < V; i++)
	{
		for (int j = 0; j < V; j++) cout << macierz_sasiedztwa[i][j] << " ";
		cout << endl;
	}



	for (int i = 1; i <= V; i++)     // wypisujemy graf
	{
		cout << endl << "Sasiedzi wierzcholka " << i << ": ";
		for (vector<int>::iterator it = ZA[i].begin(); it != ZA[i].end(); ++it) cout << *it << ", ";
	}

	delete[]ZA;     // zwalniamy pamiec
}
