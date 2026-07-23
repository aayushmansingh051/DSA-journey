#include<iostream>
#include<vector>
#include<queue>
#include<list>
using namespace std;
class Graph{
    list<int>*l;
    int v;
    public:
    Graph(int v){
        this->v=v;
     l=new list<int>[v];
    }
    void addEdge(int u,int v){
        l[u].push_back(v);
         l[v].push_back(u);
    }
    void printgraph(){
        for(int u=0;u<v;u++){
            list<int>neighbour=l[u];
            cout<<u<<"->";
        for(int V:neighbour){
            cout<<V<<" ";
        }
        cout<<endl;
        }
    }
    void dfshelper(int u,vector<bool>&vis){
        vis[u]=true;
         cout<<u<<" ";
         list<int>neighbour=l[u];
         for(int V:neighbour){
            if(!vis[V]){
                dfshelper(V,vis);
            }
         }
        }
        void dfs(){
             vector<bool>vis(7,false);
             cout << "DFS Traversal: ";
             dfshelper(0,vis);
        }
    };
    
    int main() {
    Graph graph(5);  // graph with 5 vertices

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);

    graph.printgraph();
    graph.dfs();   // DFS traversal
}