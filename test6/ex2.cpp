#include <bits/stdc++.h>
using namespace std;
int n, k;
const int mod = 1e9 + 7;

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        cin>> n >> k;
        long long f[n+1] = {0};
        f[0] = 1;
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=k; j++) {
                if (i - j >= 0) f[i] = (f[i] + f[i-j])%mod;
                else break;
            }
        }
        cout<< f[n] << endl;
    }
    
    return 0;
}