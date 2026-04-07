#include <bits/stdc++.h>
using namespace std;
long long f[100];

void pre() {
    f[0] = 0;
    f[1] = 1;
    for (int i=2; i<93; i++) {
        f[i] = f[i-1] + f[i-2];
    }
    return;
}

long long solve(int n, long long k) {
    if (n < 2) return n;
    if (k <= f[n]) return solve(n-1, k);
    return f[n-1]+ solve(n-2, k-f[n]);
}

int main() {
    int t;
    cin>> t;
    pre();
    while (t--)
    {
        int n;
        long long k;
        cin>> n >> k;
        cout<< solve(n, k)<< endl;
    }
    
    return 0;
}