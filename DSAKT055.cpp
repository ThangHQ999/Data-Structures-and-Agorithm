#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n, v;
        cin>> n >> v;
        vector<int> a(n), c(n);
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        for (int i=0; i<n; i++) {
            cin>> c[i];
        }
        int res = -1;
        vector<int> dp(v+1, 0);
        for (int i=0; i<n; i++) {
            for (int j=v; j>=a[i]; j--) {
                dp[j] = max(dp[j], dp[j-a[i]] + c[i]);
            }
        }
        cout<< dp[v] << endl;
    }
    
    return 0;
}