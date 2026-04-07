#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main() {
    int t;
    cin>> t;
    
    while (t--)
    {
        int n;
        cin>> n;
        vector<vector<long long>> dp(n+1, vector<long long>(10, 0));
        for (int i=0; i<10; i++) {
            dp[1][i] = 1;
        }
        for (int i=2; i<=n; i++) {
            for (int j=0; j<10; j++) {
                for (int k=0; k<=j; k++) {
                    dp[i][j] = (dp[i][j] + dp[i-1][k])%mod;
                }
            }
        }
        long long res = 0;
        for (int i=0; i<10; i++) {
            res = (res + dp[n][i])%mod;
        }
        cout<< res << endl;
    }
    
    return 0;
}