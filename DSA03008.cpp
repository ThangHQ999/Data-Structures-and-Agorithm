#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) {
        return a.first > b.first;
    }
    return a.second < b.second;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        vector<int> startTime(n), endTime(n);
        vector<pair<int, int>> a;
        for (int i=0; i<n; i++) {
            int x;
            cin>> x;
            startTime[i] = x;
        }
        for (int i=0; i<n; i++) {
            int x;
            cin>> x;
            endTime[i] = x;
        }
        for (int i=0; i<n; i++) {
            a.push_back({startTime[i], endTime[i]});
        }
        sort(a.begin(), a.end(), cmp);
        int ans = 1;
        int now = a[0].second;
        for (int i=1; i<n; i++) {
            if (a[i].first >= now) {
                now = a[i].second;
                ans++;
            }
        }
        cout<< ans << endl;
    }
    
    return 0;
}