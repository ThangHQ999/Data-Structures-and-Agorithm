#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n, m;
        cin>> n >> m;
        int a[n][m];
        int dp[n][m] = {0};
        int maxSq = 0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                cin>> a[i][j];
                if (a[i][j] == 1) {
                    if (i == 0 || j== 0) {
                        dp[i][j] = 1;
                    } else {
                        dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
                    }
                    maxSq = max(maxSq, dp[i][j]);
                }
            }
        }
        cout<< maxSq << endl;
    }
    
    return 0;
}