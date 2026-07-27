#include <iostream>
#include <list>
#include <vector>
#include <queue>
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

    void calIndeg(vector<int>& indeg) {
        for (int u = 0; u < v; u++) {
            for (int V : l[u]) {
                indeg[V]++;   // indegree of neighbor increases
            }
        }
    }

    void topological_Sort() {
        vector<int> indeg(v, 0);
        calIndeg(indeg);

        queue<int> q;
        for (int i = 0; i < v; i++) {
            if (indeg[i] == 0) {
                q.push(i);
            }
        }

        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            cout << curr << " ";

            for (int V : l[curr]) {
                indeg[V]--;
                if (indeg[V] == 0) {
                    q.push(V);
                }
            }
        }
        cout << endl;
    }
};

int main() {
    Graph g(6); // 6 vertices
    g.addedge(5, 2);
    g.addedge(5, 0);
    g.addedge(4, 0);
    g.addedge(4, 1);
    g.addedge(2, 3);
    g.addedge(3, 1);

    cout << "Topological Sort (BFS/Kahn’s Algorithm): ";
    g.topological_Sort();

    return 0;
}
