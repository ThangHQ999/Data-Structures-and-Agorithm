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
        int maxMask = (1 << n);
        int dp[maxMask] = {0};
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                cin>> a[i][j];
            }
        }
        for (int mask = 0; mask < maxMask; mask++) {
            int row = __builtin_popcount(mask);
            for (int j=0; j<n; j++) {
                if (!((mask >> j) & 1)) {
                    int nextMask = mask | (1 << j);
                    dp[nextMask] = max(dp[nextMask], dp[mask] + a[row][j]);
                }
            }
        }
        cout<< dp[maxMask - 1] << endl;
    }
    
    return 0;
}