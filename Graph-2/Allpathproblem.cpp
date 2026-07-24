#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;

class Graph {
    int v;
    list<int>* l;
    bool isundir;

public:
    Graph(int v, bool isundir = true) { // default directed
        this->v = v;
        l = new list<int>[v];
        this->isundir = isundir;
    }

    void addedge(int u, int v) {
        l[u].push_back(v);   // only u → v
        if (isundir) {       // if undirected, also add v → u
            l[v].push_back(u);
        }
    }

    void pathhelper(int src, int dest, vector<bool>& vis, string path) {
        path += to_string(src) + " ";

        if (src == dest) {
            cout << path << endl;
            return;
        }

        vis[src] = true;

        for (int neigh : l[src]) {
            if (!vis[neigh]) {
                pathhelper(neigh, dest, vis, path);
            }
        }

        vis[src] = false; // backtrack
    }

    void pathprint(int src, int dest) {
        vector<bool> vis(v, false);
        pathhelper(src, dest, vis, "");
    }
};

int main() {
    Graph g(7, false); // directed graph with 7 nodes (0–6)

    g.addedge(0, 3);
    g.addedge(5, 0);
    g.addedge(5, 2);
    g.addedge(2, 3);
    g.addedge(3, 1);
    g.addedge(4, 1);
    g.addedge(4, 0);

    cout << "All paths from 5 to 1:\n";
    g.pathprint(5, 1);

    return 0;
}
