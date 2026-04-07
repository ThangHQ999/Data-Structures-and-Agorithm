#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        int a[n][n];
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                cin>> a[i][j];
            }
        }
        vector<vector<int>> dp(n, vector<int>(n, 1e4));
        for (int i=0; i<n; i++) {
            dp[i][i] = a[i][i];
        }
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (i != j && !vs[j]) {
                    dp[i][j] = min(dp[i][j], dp[i]);
                }
            }
        }
    }
    
    return 0;
}