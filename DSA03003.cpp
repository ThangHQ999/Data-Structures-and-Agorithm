#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

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
        long long ans = 0;
        for (int i=0; i<n; i++) {
            ans=(ans + a[i]*i)%mod;
        }
        cout<< ans << endl;
    }
    
    return 0;
}