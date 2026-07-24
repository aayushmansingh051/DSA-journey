#include <iostream>
#include<queue>
#include <vector>
#include <list>
using namespace std;

class Graph {
    list<int>* l;   // adjacency list
    int v;          // number of vertices
    bool isundir;   // directed or undirected
public:
    Graph(int v, bool isundir = false) {
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
    bool isBipartite(){
        queue<int>q;
        vector<bool>vis(v,false);
        vector<int>color(v,-1);
        q.push(0);
        color[0]=0;
        while(q.size()>0){
            int curr=q.front();
            q.pop();
            list<int>neigh=l[curr];
            for(int V:neigh){
                if(!vis[V]){
                    vis[V]=true;
                    color[V]=!color[curr];
                    q.push(V);
                }else{
                    if(color[V]==color[curr]){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
int main() {
    Graph g(4, true); // directed graph
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3); // cycle here

    if (g.isCycleDir()) {
        cout << "Cycle detected!" << endl;
    } else {
        cout << "No cycle." << endl;
    }

    if (g.isBipartite()) {
        cout << "Graph is Bipartite." << endl;
    } else {
        cout << "Graph is NOT Bipartite." << endl;
    }
}
