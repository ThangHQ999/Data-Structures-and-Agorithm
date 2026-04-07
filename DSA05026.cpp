#include <bits/stdc++.h>
using namespace std;
int main() {
    int c, n;
    cin>> c >> n;
    vector<int> w(n);
    vector<int> dp(c+1, 0);
    dp[0] = 1;
    for (int i=0; i<n; i++) {
        cin>> w[i];
    }
    int res = -1;
    for (int i=0; i<n; i++) {
        for (int j=c; j>=w[i]; j--) {
            if (dp[j - w[i]] == 1) {
                dp[j] = 1;
                res = max(res, j);
            }
        }
    }
    cout<< res << endl;
    return 0;
}