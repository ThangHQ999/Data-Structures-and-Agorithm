#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin>> a[i];
    }
    int cnt = 0;
    for (int i=0; i<n-1; i++) {
        int v_min = min(a[i], a[i+1]);
        int v_max = max(a[i], a[i+1]);
        while (v_min*2 < v_max)
        {
            v_min*=2;
            cnt++;
        }
    }
    cout<< cnt << endl;
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