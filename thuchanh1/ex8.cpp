#include <bits/stdc++.h>
using namespace std;

bool check(long long d, int m, int n, vector<int> a) {
    int cnt =1;
    int lastPos = a[0];
    for (int i=1; i<n; 
        i++) {
        if (a[i] - lastPos >= d) {
            cnt++;
            lastPos = a[i];
            if (cnt >= m) return true;
        }
    }

    return cnt >= m;
}

void solve() {
    int n, m;
    cin>> n >> m;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin>> a[i];
    }
    sort(a.begin(), a.end());
    long long low = 0, high = a[n-1] - a[0];
    long long ans = 0;
    while (low <= high)
    {
        long long mid = low + (high - low)/2;
        if (check(mid, m, n, a)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid -1;
        }
    }
    cout<< ans << endl;
}

int main() {
    solve();
    return 0;
}