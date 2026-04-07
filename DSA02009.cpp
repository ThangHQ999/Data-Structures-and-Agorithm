#include <bits/stdc++.h>
using namespace std;
int a[100];
vector<bool> vs;
int n, k, target;

bool Try(int idx, int curSum, int check) {
    if (check == k) return true;
    if (curSum == target) return Try(0, 0, check + 1);
    for (int i=idx; i<n; i++) {
        if (!vs[i] && curSum + a[i] <= target) {
            vs[i] = true;
            if (Try(i+1, curSum + a[i], check)) return true;
            vs[i] = false;
        }
    }
    return false;
}

void solve() {
    int sum = 0;
    cin>> n >> k;
    vs.assign(n+5, false);
    for (int i=0; i<n; i++) {
        cin>> a[i];
        sum += a[i];
    }
    if (sum % k != 0) {
        cout<< 0 << endl;
        return;
    }
    sort(a, a+n, greater<int>());
    target = sum/k;
    cout<< (Try(0, 0, 0) ? 1 : 0 ) << endl;
}
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}