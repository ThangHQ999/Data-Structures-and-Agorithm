#include <bits/stdc++.h>
using namespace std;

struct Pair {
    int first, second;
};

bool cmp(const Pair &p1, const Pair &p2) {
    if (p1.first == p2.first) return p1.second < p2.second;
    return p1.first < p2.first;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        vector<Pair> a(n);
        vector<int> dp(n, 1);
        for (int i=0; i<n; i++) {
            cin>> a[i].first >> a[i].second;
        }
        sort(a.begin(), a.end(), cmp);
        for (int i=1; i<n; i++) {
            for (int j=0; j<i; j++) {
                if (a[j].second < a[i].first) {
                    dp[i] = max(dp[i], dp[j]+1);
                }
            }
        }
        cout<< *max_element(dp.begin(), dp.end()) << endl;
    }
    
    return 0;
}