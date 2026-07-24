#include <iostream>
#include <stack>
#include <list>
#include <vector>
using namespace std;

class Graph {
    list<int>* l;
    int v;
    bool isundir;

public:
    Graph(int v, bool isundir = false) { // directed graph by default
        this->v = v;
        l = new list<int>[v];
        this->isundir = isundir;
    }

    void addedge(int u, int v) {
        l[u].push_back(v);
        if (isundir) {
            l[v].push_back(u);
        }
    }

    void topologicalhelper(int src, vector<bool>& vis, stack<int>& s) {
        vis[src] = true;
        for (int neigh : l[src]) {
            if (!vis[neigh]) {
                topologicalhelper(neigh, vis, s);
            }
        }
        s.push(src); // push after visiting all neighbors
    }

    void topologicalsort() {
        vector<bool> vis(v, false);
        stack<int> s;

        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                topologicalhelper(i, vis, s);
            }
        }

        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }
};

int main() {
    Graph g(6, false); // 6 nodes, directed graph

    g.addedge(5, 0);
    g.addedge(5, 2);
    g.addedge(4, 0);
    g.addedge(4, 1);
    g.addedge(2, 3);
    g.addedge(3, 1);

    cout << "Topological Sort: ";
    g.topologicalsort();

    return 0;
}
