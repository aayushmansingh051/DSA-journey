#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void dfs(int row, int col,
             vector<vector<int>>& image,
             vector<vector<bool>>& vis,
             int n, int m,
             int oldcolour, int newcolour) {
        
        vis[row][col] = true;
        image[row][col] = newcolour;

        // up
        if (row - 1 >= 0 && !vis[row - 1][col] && image[row - 1][col] == oldcolour) {
            dfs(row - 1, col, image, vis, n, m, oldcolour, newcolour);
        }
        // down
        if (row + 1 < n && !vis[row + 1][col] && image[row + 1][col] == oldcolour) {
            dfs(row + 1, col, image, vis, n, m, oldcolour, newcolour);
        }
        // left
        if (col - 1 >= 0 && !vis[row][col - 1] && image[row][col - 1] == oldcolour) {
            dfs(row, col - 1, image, vis, n, m, oldcolour, newcolour);
        }
        // right
        if (col + 1 < m && !vis[row][col + 1] && image[row][col + 1] == oldcolour) {
            dfs(row, col + 1, image, vis, n, m, oldcolour, newcolour);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolour) {
        int n = image.size();
        int m = image[0].size();
        int oldcolour = image[sr][sc];

        vector<vector<bool>> vis(n, vector<bool>(m, false));

        if (oldcolour != newcolour) { // avoid infinite recursion
            dfs(sr, sc, image, vis, n, m, oldcolour, newcolour);
        }
        return image;
    }
};
