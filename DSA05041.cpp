#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        string s;
        cin>> s;
        string t = s;
        int n = s.length();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
        reverse(t.begin(), t.end());
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                if (s[i-1] == t[j-1]) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        cout<< n - dp[n][n] << endl;
    }
    
    return 0;
}