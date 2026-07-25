#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Cycle detection using DFS + recursion stack
    bool isCycle(int src, vector<bool>& vis, vector<bool>& rec, vector<vector<int>>& graph) {
        vis[src] = true;
        rec[src] = true;

        for (int i = 0; i < graph.size(); i++) {
            int u = graph[i][1]; // prerequisite
            int v = graph[i][0]; // course depending on u
            if (u == src) {
                if (!vis[v]) {
                    if (isCycle(v, vis, rec, graph)) return true;
                } else if (rec[v]) {
                    return true;
                }
            }
        }

        rec[src] = false;
        return false;
    }

    // Topological sort using DFS
    void topologicalSort(int src, vector<bool>& vis2, stack<int>& s, vector<vector<int>>& graph) {
        vis2[src] = true;

        for (int i = 0; i < graph.size(); i++) {
            int u = graph[i][1];
            int v = graph[i][0];
            if (u == src) {
                if (!vis2[v]) {
                    topologicalSort(v, vis2, s, graph);
                }
            }
        }

        s.push(src);
    }

    // Main function: find course order
    vector<int> findOrder(int numCourses, vector<vector<int>>& graph) {
        int V = numCourses;
        vector<bool> vis(V, false), rec(V, false);
        vector<int> ans;

        // Step 1: cycle detection
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                if (isCycle(i, vis, rec, graph)) return {}; // cycle → no valid order
            }
        }

        // Step 2: topological sort
        vector<bool> vis2(V, false);
        stack<int> s;
        for (int i = 0; i < V; i++) {
            if (!vis2[i]) {
                topologicalSort(i, vis2, s, graph);
            }
        }

        // Step 3: collect result
        while (!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }

        return ans;
    }
};

// Example usage
int main() {
    Solution sol;
    int numCourses = 4;
    vector<vector<int>> prerequisites = {{1,0},{2,0},{3,1},{3,2}};

    vector<int> order = sol.findOrder(numCourses, prerequisites);

    if (order.empty()) {
        cout << "No valid order (cycle detected)" << endl;
    } else {
        cout << "Valid course order: ";
        for (int x : order) cout << x << " ";
        cout << endl;
    }
    return 0;
}
