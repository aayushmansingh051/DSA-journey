#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int longest_increasing_subsequence(vector<int> arr) {
    unordered_set<int> s(arr.begin(), arr.end()); // unique values
    vector<int> arr2(s.begin(), s.end());         // store in array
    sort(arr2.begin(), arr2.end());               // sort array

    int n = arr.size();
    int m = arr2.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(arr[i-1] == arr2[j-1]) {
                dp[i][j] = 1 + dp[i-1][j-1];
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}

int main() {
    vector<int> arr = {3, 10, 2, 1, 20};
    cout << "Length of LIS: " << longest_increasing_subsequence(arr) << endl;
    return 0;
}
