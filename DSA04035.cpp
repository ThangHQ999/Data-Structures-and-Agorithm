#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;

long long Luythua(long long n, long long k) {
    if (k == 0) return 1;
    if (k == 1) return n;
    long long x = Luythua(n, k/2);
    long long y = (x*x)%mod;
    if (k % 2 == 0) return y;
    return (n*y)%mod;
}

int main() {
    while (true)
    {
        long long a, b;
        cin>> a >> b;
        if (a == 0 && b == 0) {
            return 0;
        } else {
            cout<< Luythua(a, b) << endl;      
        }
    }
    return 0;
}
 