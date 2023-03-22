#include <iostream>

using namespace std;

struct Edge {
    int src, dest, weight;
};

struct Graph {
    int V, E;
    Edge* edge;
    int counter;

    void addEdge(int s, int d, int w) {
        this->edge[counter].src = s;
        this->edge[counter].dest = d;
        this->edge[counter].weight = w;
        this->counter++;
    }
};

Graph createGraph(int V, int E) {
    Graph graph;
    graph.V = V;
    graph.E = E;
    graph.counter = 0;

    graph.edge = new Edge[E];

    return graph;
}

int minKey(int key[], bool mstSet[], int V)
{
    int min = INT_MAX, min_index = 0;

    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < min)
            min = key[v], min_index = v;

    cout << min_index << endl;

    return min_index;
}

void printMST(int* costs, int* parents, int v)
{
    cout << "\t Cost \t Parent" << endl;
    for (int i = 0; i < v; i++) {
        cout << i << "\t" << costs[i] << "\t" << parents[i] << endl;
    }
}

void Prim(Graph graph) {
    int v = graph.V;

    int* parents = new int[v];
    int* costs = new int[v];

    bool* checked = new bool[v];
    Edge* results = new Edge[v];
    for (int q = 0; q < v; q++) {
        parents[q] = -1;
        costs[q] = INT_MAX;
        checked[q] = false;
    }
    costs[0] = 0;

    for (int q = 0; q < v; q++) {
        int u = minKey(costs, checked, v);
        checked[u] = true;

        for (int w = 0; w < graph.E - 1; w++) {
            if (graph.edge[w].src == u) {
                if (costs[graph.edge[w].dest] > (costs[u] + graph.edge[w].weight)) {
                    parents[graph.edge[w].dest] = u;
                    costs[graph.edge[w].dest] = costs[u] + graph.edge[w].weight;
                }
            }
            else if (graph.edge[w].dest == u) {
                if (costs[graph.edge[w].src] > (costs[u] + graph.edge[w].weight)) {
                    parents[graph.edge[w].src] = u;
                    costs[graph.edge[w].src] = costs[u] + graph.edge[w].weight;
                }
            }
        }
    }

    printMST(costs, parents, v);

}

int main()
{
    int V = 6, E = 11;
    Graph graph = createGraph(V, E);

    graph.addEdge(0, 1, 6);
    graph.addEdge(0, 2, 9);
    graph.addEdge(0, 4, 7);
    graph.addEdge(1, 2, 1);
    graph.addEdge(1, 4, 6);
    graph.addEdge(1, 5, 10);
    graph.addEdge(2, 3, 15);
    graph.addEdge(3, 4, 6);
    graph.addEdge(3, 5, 2);
    graph.addEdge(4, 5, 3);
    graph.addEdge(5, 1, 7);

    Prim(graph);

    return 0;
}