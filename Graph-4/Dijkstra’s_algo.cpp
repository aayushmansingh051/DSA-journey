#include <iostream>
#include <queue>
#include <vector>
#include <climits>
using namespace std;

class Edge {
public:
    int v;
    int wt;
    Edge(int v, int wt) {
        this->v = v;
        this->wt = wt;
    }
};

void dijkstra(int src, vector<vector<Edge>> &graph, int V) {
    // Min-heap: (distance, vertex)
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> dist(V, INT_MAX);

    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        int u = pq.top().second;//vertex
        int d = pq.top().first;//dist
        pq.pop();

        // Skip if we already found a better path
        if (d > dist[u]) continue;

        // Relaxation step
        for (auto edge : graph[u]) {
            int v = edge.v;
            int wt = edge.wt;

            if (dist[v] > dist[u] + wt){
                dist[v] = dist[u] + wt;
                pq.push({ dist[v], v });
            }
        }
    }

    // Print shortest distances
    cout << "Shortest distances from source " << src << ":\n";
    for (int i = 0; i < V; i++) {
        if (dist[i] == INT_MAX)
            cout << i << " -> INF\n";
        else
            cout << i << " -> " << dist[i] << "\n";
    }
}

int main() {
    int V = 5;
    vector<vector<Edge>> graph(V);

    // Example graph
    graph[0].push_back(Edge(1, 2));
    graph[0].push_back(Edge(4, 1));
    graph[1].push_back(Edge(2, 3));
    graph[2].push_back(Edge(3, 6));
    graph[4].push_back(Edge(2, 2));
    graph[4].push_back(Edge(3, 4));

    dijkstra(0, graph, V);

    return 0;
}
