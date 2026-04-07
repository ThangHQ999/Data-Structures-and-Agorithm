#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9 + 7;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n, m;
        cin>> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        vector<vector<int>> dp(n, vector<int>(m, INF));
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                cin>> a[i][j];
            }
        }
        dp[0][0] = a[0][0];
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (i + 1 < n) {
                    dp[i+1][j] = min(dp[i+1][j], dp[i][j] + a[i+1][j]);
                }
                if (j + 1 < m) {
                    dp[i][j+1] = min(dp[i][j+1], dp[i][j] + a[i][j+1]);
                }
                if (i+1 <n && j + 1 < m) {
                    dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j] + a[i+1][j+1]);
                }
            }
        }
        cout<< dp[n-1][m-1] << endl;
    }
    
    return 0;
}