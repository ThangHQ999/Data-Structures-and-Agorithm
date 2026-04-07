#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        string s;
        cin>> s;
        int n = s.length();
        int res = 1;
        bool dp[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                dp[i][j] = false;
            }
        }
        for (int i=0; i<n; i++) dp[i][i] = true;
        for (int len = 2; len<=n; len++) {
            for (int i=0; i<=n-len; i++) {
                int j = i+len-1;
                if (len == 2) {
                    if (s[i] == s[j]) dp[i][j] = true;
                } else {
                    if (s[i] == s[j] && dp[i+1][j-1]) {
                        dp[i][j] = true;
                    }
                }
                if (dp[i][j]) res = max(res, len);
            }
        }
        cout<< res << endl;
    }
    
    return 0;
}