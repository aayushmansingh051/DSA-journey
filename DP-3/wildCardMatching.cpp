// jai shree ganesh
// Wildcard Matching using Dynamic Programming
// Author: Aayushman Singh

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isMatch(string t, string p) {
        int n = t.size();
        int m = p.size();

        // dp[i][j] = true if first i chars of text match first j chars of pattern
        vector<vector<int>> dp(n+1, vector<int>(m+1, false));

        // empty text matches empty pattern
        dp[0][0] = true;

        // initialization: empty text vs pattern
        for (int j = 1; j <= m; j++) {
            if (p[j-1] == '*') {
                dp[0][j] = dp[0][j-1];  // '*' can match empty sequence
            } else {
                dp[0][j] = false;       // any other char cannot match empty text
            }
        }

        // fill dp table
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (t[i-1] == p[j-1] || p[j-1] == '?') {
                    // exact match or '?' matches single char
                    dp[i][j] = dp[i-1][j-1];
                } else if (p[j-1] == '*') {
                    // '*' can match empty (dp[i][j-1]) or one/more chars (dp[i-1][j])
                    dp[i][j] = (dp[i-1][j] || dp[i][j-1]);
                } else {
                    dp[i][j] = false;
                }
            }
        }

        return dp[n][m];
    }
};

// Example usage
int main() {
    Solution sol;
    string text = "abcde";
    string pattern = "a*?e";

    cout << (sol.isMatch(text, pattern) ? "Match" : "No Match") << endl;
    return 0;
}
