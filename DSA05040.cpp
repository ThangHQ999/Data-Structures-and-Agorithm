#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        vector<int> a(n+1), inc(n+1, 1), dec(n+1, 1);
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        inc[0] = 1;
        dec[n-1] = 1;
        for (int i=1; i<n; i++) {
            if (a[i-1] < a[i]) {
                inc[i] += inc[i-1];
            }
        }
        for (int i=n-2; i>=0; i--) {
            if (a[i+1] < a[i]) {
                dec[i] += dec[i+1];
            }
        }
        int res = 0;
        for (int i=0; i<n; i++) {
            res = max(res, dec[i] + inc[i] -1);
        }
        cout<< res << endl;
    }
    
    return 0;
}