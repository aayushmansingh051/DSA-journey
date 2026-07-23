#include <iostream>
#include <list>
using namespace std;

class Graph {
    int v;              // number of vertices
    list<int>* l;       // adjacency list

public:
    Graph(int v) {
        this->v = v;
        //arr=new int(v)
        l = new list<int>[v];
    }

    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);  // undirected graph
    }

    void printGraph() {
        for (int u = 0; u < v; u++) {
            cout << u << " -> ";    
            for (int node : l[u]) {
                cout << node << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph graph(5);  // graph with 5 vertices

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);

    graph.printGraph();

    return 0;
}
