#include <bits/stdc++.h>
using namespace std;
int n, k, a[100000], x[100000] = {0};

void hienthi() {
    for (int i=1; i<=k; i++) {
        cout<< a[x[i]] << " ";
    }
    cout<< endl;
}

void Try(int i) {
    for (int j=x[i-1]+1; j<=n-k+i; j++) {
        x[i] = j;
        if (i == k) hienthi();
        else Try(i+1);
    }
}

void solve() {
    cin>> n >> k;
    for (int i=1; i<=n; i++) {
        cin>> a[i];
    }
    sort(a+1, a+n+1);
    Try(1);
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