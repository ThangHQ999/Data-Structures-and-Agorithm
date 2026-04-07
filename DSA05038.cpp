#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<long long, long long> a, pair<long long, long long> b) {
    return a.first < a.second;
}
int main() {
    int n;
    cin>> n;
    vector<pair<long long, long long>> a(n);
    vector<long long> dp(n, 1);
    long long res = 1;
    for (int i=0; i<n; i++) {
        cin>> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end());
    for (int i=1; i<n; i++) {
        for (int j=0; j<i; j++) {
            if (a[i].first > a[j].first && a[i].second > a[j].second) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        res = max(res, dp[i]);
    }
    cout<< res << endl;
    return 0;
}