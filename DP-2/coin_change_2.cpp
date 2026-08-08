#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n + 1, vector<int>(amount + 1, 0));

        // base case: one way to make sum 0
        for (int i = 0; i <= n; i++) {
            dp[i][0] = 1;
        }

        // base case: with 0 coins, positive amounts are impossible
        for (int j = 1; j <= amount; j++) {
            dp[0][j] = 0;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= amount; j++) {
                if (coins[i - 1] <= j) {
                    // include coin (same row, unlimited use) + exclude coin (previous row)
                    dp[i][j] = dp[i][j - coins[i - 1]] + dp[i - 1][j];
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        return dp[n][amount];
    }
};

int main() {
    Solution sol;
    vector<int> coins = {1, 2, 5};
    int amount = 5;

    cout << sol.change(amount, coins) << endl; // Output: 4
    return 0;
}
