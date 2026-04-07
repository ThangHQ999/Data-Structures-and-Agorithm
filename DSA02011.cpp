#include <bits/stdc++.h>
using namespace std;
int n, s, t[40];
int minVal = 1e9;
void Try(int idx, int curSum, int cnt) {
    if (curSum == s) {
        minVal = min(minVal, cnt);
        return;
    }
    if (idx == n || curSum > s) {
        return;
    }
    Try(idx+1, curSum + t[idx], cnt +1);
    Try(idx+1, curSum, cnt);
}

void solve() {
    cin>> n;
    cin>> s;
    minVal = 1e9;
    for (int i=0; i<n; i++) {
        cin>> t[i];
    }
    Try(0, 0, 0);
    cout<< (minVal == 1e9 ? -1 : minVal) << endl;
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