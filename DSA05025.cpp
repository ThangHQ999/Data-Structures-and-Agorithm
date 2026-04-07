#include <bits/stdc++.h>
using namespace std;
long long dp[51];

void solve() {
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 4; i <= 50; i++) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
}

int main() {
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    solve();
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        cout<< dp[n] << endl;
    }
    
    return 0;
}