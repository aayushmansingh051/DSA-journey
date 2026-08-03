#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Edge {
public:
    int u, v, wt;
    Edge(int u, int v, int wt) {
        this->u = u;
        this->v = v;
        this->wt = wt;
    }
};

class Graph {
public:
    vector<Edge> edges;
    vector<int> par;
    vector<int> rank;
    int V;

    Graph(int V) {
        this->V = V;
        par.resize(V);
        rank.resize(V, 0);
        for(int i=0; i<V; i++) par[i] = i;
    }

    void addEdge(int u, int v, int wt) {
        edges.push_back(Edge(u, v, wt));
    }

    int find(int x) {
        if(par[x] != x) {
            par[x] = find(par[x]); // path compression
        }
        return par[x];
    }

    void unionByRank(int a, int b) {
        int parA = find(a);
        int parB = find(b);

        if(parA == parB) return;

        if(rank[parA] == rank[parB]) {
            par[parB] = parA;
            rank[parA]++;
        }
        else if(rank[parA] > rank[parB]) {
            par[parB] = parA;
        }
        else {
            par[parA] = parB;
        }
    }

    void Kruskals_Algo() {
        //lambda [](Edge &a, Edge &b) {return a.wt < b.wt;}
        sort(edges.begin(), edges.end(), [](Edge &a, Edge &b) {return a.wt < b.wt;});

        int mincost = 0;
        for(Edge e : edges) {
            int parA = find(e.u);
            int parB = find(e.v);

            if(parA != parB) { // no cycle
                unionByRank(parA, parB);
                mincost += e.wt;
                cout << "Edge included: " << e.u << " - " << e.v 
                     << " (wt=" << e.wt << ")\n";
            }
        }
        cout << "Minimum Cost of MST = " << mincost << endl;
    }
};

int main() {
    Graph g(4);
    g.addEdge(0, 1, 10);
    g.addEdge(0, 2, 6);
    g.addEdge(0, 3, 5);
    g.addEdge(1, 3, 15);
    g.addEdge(2, 3, 4);

    g.Kruskals_Algo();
    return 0;
}
