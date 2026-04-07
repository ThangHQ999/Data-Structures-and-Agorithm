#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;

void solve() {
    int n, k;
    cin>> n >> k;
    vector<long long> dp(n+1, 0);
    dp[0] = 1;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=k; j++) {
            if (i-j >= 0) {
                dp[i] = (dp[i] + dp[i-j]) % mod;
            } else {
                break;
            }
        }
    }
    cout<< dp[n] << endl;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        solve();

    }
    
    return 0;
}