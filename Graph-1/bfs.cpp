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
    void bfs(){    //T.C=(V+E)
        queue<int>q;
        vector<bool>vis(v,false);
        q.push(0);
         vis[0]=true;
         cout<<"BFS travel is: ";
         while(q.size()>0){
            int u=q.front();
            q.pop();
            cout<<u;
         
         //checking the visited nodes
         list<int>neighour=l[u];
         for(int V:neighour){
         if(!vis[V]){
            vis[V]=true;
            q.push(V);
         }
    }
}
    cout<<endl;

}
};
int main() {
    Graph graph(5);  // graph with 5 vertices

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);

    graph.printgraph();
    graph.bfs();

    return 0;
}       