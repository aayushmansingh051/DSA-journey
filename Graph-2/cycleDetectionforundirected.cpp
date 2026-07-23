#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph {
    list<int>* l;
    int v;

public:
    Graph(int v) {
        this->v = v;
        l = new list<int>[v];
    }

    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void printgraph() {
        for (int u = 0; u < v; u++) {
            cout << u << " -> ";
            for (int x : l[u]) {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    bool undirCycleHelper(int src, int par, vector<bool>& vis) {
        vis[src] = true;

        for (int neigh : l[src]) {
            if (!vis[neigh]) {
                if (undirCycleHelper(neigh, src, vis))
                    return true;
            }
            else if (neigh != par) {
                return true;
            }
        }

        return false;
    }

    bool isCycleundir() {
        vector<bool> vis(v, false);

        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
               return (undirCycleHelper(i, -1, vis));
                   
            }
        }

        return false;
    }
};

int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(1, 2);
    g.addEdge(3, 4);

    cout << "Adjacency List:\n";
    g.printgraph();

    if (g.isCycleundir())
        cout << "\nCycle detected!" << endl;
    else
        cout << "\nNo cycle." << endl;

    return 0;
}