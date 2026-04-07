#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n, k;
        cin>> n >> k;
        int a[n];
        for (int i=0; i<n; i++) {
            int x;
            cin>> x;
            a[i] = x%k;
        }
        vector<int> dp(k, -1e9);
        dp[0] = 0;
        for (int i=0; i<n; i++) {
            vector<int> nextDp = dp;
            int rem = a[i];
            for (int r=0; r<k; r++) {
                int prev_r = (r-rem + k)%k;
                if (dp[prev_r] != 1e9) {
                    nextDp[r] = max(nextDp[r], dp[prev_r] + 1);
                }
            }
            dp = nextDp;
        }
        cout<< dp[0] << endl;
    }
    
    return 0;
}