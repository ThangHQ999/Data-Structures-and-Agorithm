#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
        cin>> n;
        int a[n];
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        for (int i=1; i<n; i++) {
            if (a[i-1] >= a[i]) {
                cout<< 0 << endl;
                return;
            }
        }
    cout<< 1 << endl;
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