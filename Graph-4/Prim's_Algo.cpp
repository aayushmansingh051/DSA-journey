#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

class Graph {
public:
    int V;
    list<pair<int,int>> *l;
    bool undir;

    Graph(int V, bool undir = false) {
        this->V = V;
        this->undir = undir;
        l = new list<pair<int,int>>[V];
    }

    void addEdge(int u, int v, int wt) {
        l[u].push_back(make_pair(v, wt));
        if (undir) {
            l[v].push_back(make_pair(u, wt));
        }
    }

    void primsAlgo(int src) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<bool> mst(V, false);
        pq.push(make_pair(0, src));
        int ans = 0;

        while (!pq.empty()) {
            int u = pq.top().second;
            int wt = pq.top().first;
            pq.pop();

            if (!mst[u]) {
                mst[u] = true;
                ans += wt;

                for (auto n : l[u]) {
                    int v = n.first;
                    int currwt = n.second;
                    if (!mst[v]) {
                        pq.push(make_pair(currwt, v));
                    }
                }
            }
        }
        cout << "FINAL cost of MST = " << ans << endl;
    }
};

int main() {
    Graph g(5, true);
    g.addEdge(0, 1, 2);
    g.addEdge(0, 3, 6);
    g.addEdge(1, 2, 3);
    g.addEdge(1, 3, 8);
    g.addEdge(1, 4, 5);
    g.addEdge(2, 4, 7);
    g.addEdge(3, 4, 9);

    g.primsAlgo(0);
    return 0;
}
