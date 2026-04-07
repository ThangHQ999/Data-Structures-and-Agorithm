#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) {
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main() {
        int n;
        cin>> n;
        vector<pair<int, int>> a;
        for (int i=0; i<n; i++) {
            int p, q;
            cin>> p >> q;
            a.push_back({p, q});
        }
        sort(a.begin(), a.end(), cmp);
        int ans = a[0].second;
        int now = a[0].first;
        for (int i=1; i<n; i++) {
            if (a[i].first >= now) {
                now = a[i].first;
                ans+=a[i].second;
            }
        }
        cout<< ans << endl;
    
    return 0;
}