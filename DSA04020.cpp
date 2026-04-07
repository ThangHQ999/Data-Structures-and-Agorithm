#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n, k;
        cin>> n >> k;
        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        int pos = lower_bound(a.begin(), a.end(), k) - a.begin();
        if (pos == n || a[pos] != k) cout << "NO";
        else cout << pos + 1;
        cout<< endl;
    }
    
    return 0;
}