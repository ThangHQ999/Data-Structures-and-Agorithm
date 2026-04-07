#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>> n;
    vector<int> a(n, 0);
    vector<int> d(n+1, 0);
    int maxLen = 0;
    for (int i=0; i<n; i++) {
        cin>> a[i];
        d[a[i]] = d[a[i]-1] + 1;
        maxLen = max(maxLen, d[a[i]]);
    }
    cout<< n - maxLen << endl;
    return 0;
}