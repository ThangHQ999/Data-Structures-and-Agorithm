#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;

long long Luythua(long long n, long long k) {
    if (k == 1) return n;
    long long x = Luythua(n, k/2);
    long long y = (x*x)%mod;
    if (k % 2 == 0) return y;
    return (n*y)%mod;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        long long n, k;
        cin>> n >> k;
        cout<< Luythua(n, k) << endl;
    }
    
    return 0;
}
 