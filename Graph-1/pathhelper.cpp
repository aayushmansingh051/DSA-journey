#include <iostream>
#include <list>
#include<vector>
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
    bool pathhelper(int src,int dest,vector<bool>&vis){
         if(src==dest){
            return true;
         }
         vis[src]=true;
         list<int>neighbour=l[src];
         for(int V:neighbour){
         if(!vis[V]){
         if(pathhelper(V,dest,vis)){
            return true;
         }
        }
         }
         return false;
         }
            bool haspath(int src,int dest){
            vector<bool>vis(v,false);
            return pathhelper(src,dest,vis);
    
}
};

int main() {
    Graph graph(5);  // graph with 5 vertices

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);

    graph.printGraph();

      cout << "Path between 0 and 4? " 
         << (graph.haspath(0, 4) ? "Yes" : "No") << endl;

    cout << "Path between 3 and 4? " 
         << (graph.haspath(3, 4) ? "Yes" : "No") << endl;

    return 0;
}
