#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph {
    list<int>* l;   // adjacency list
    int v;          // number of vertices
    bool isundir;   // directed or undirected
public:
    Graph(int v, bool isundir = true) {
        this->v = v;
        l = new list<int>[v];
        this->isundir = isundir;
    }

    void addEdge(int u, int v) {
        l[u].push_back(v);
        if (isundir) {
            l[v].push_back(u);
        }
    }

    bool dirCycleHelper(int src, vector<bool>& vis, vector<bool>& recurpath) {
        vis[src] = true;
        recurpath[src] = true;

        for (int V : l[src]) {
            if (!vis[V]) {
                if (dirCycleHelper(V, vis, recurpath)) return true;
            } else if (recurpath[V]) {
                return true; // cycle found
            }
        }

        recurpath[src] = false; // backtrack
        return false;
    }

    bool isCycleDir() {
        vector<bool> vis(v, false);
        vector<bool> recurpath(v, false);

        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                if (dirCycleHelper(i, vis, recurpath)) return true;
            }
        }
        return false;
    }
};

int main() {
    Graph g(4, false); // directed graph
    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(3, 0);
    g.addEdge(2, 3); // cycle here

    if (g.isCycleDir()) {
        cout << "Cycle detected!" << endl;
    } else {
        cout << "No cycle." << endl;
    }
}
