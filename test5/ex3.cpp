#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        sort(a.begin(), a.end());
        long long val = 0;
        for (int i=0; i<n; i++) {
            val = (val + i*a[i]) % mod;
        }
        cout<< val << endl;
    }
    
    return 0;
}