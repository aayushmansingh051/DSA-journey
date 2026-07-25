#include <bits/stdc++.h>
using namespace std;
// cycle hai toh false nahi toh cycle ke liye check karo 
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

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int V = numCourses;
        vector<bool> vis(V, false), rec(V, false);

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                if (isCycle(i, vis, rec, prerequisites)) return false; // cycle → cannot finish
            }
        }

        return true; // no cycle → can finish all courses
    }
};

// Example usage
int main() {
    Solution sol;
    int numCourses = 2;
    vector<vector<int>> prerequisites = {{1,0}}; // course 1 depends on 0

    bool result = sol.canFinish(numCourses, prerequisites);

    if (result) {
        cout << "All courses can be finished." << endl;
    } else {
        cout << "Cycle detected, cannot finish all courses." << endl;
    }
    return 0;
}
