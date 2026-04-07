#include <bits/stdc++.h>
using namespace std;
int f[95] = {0};
int a[95] = {0};
void precompute() {
    f[1] = 1;
    f[0] = 1;
    a[0] = 1;
    a[1] = 0;
    for (int i=2; i<46; i++) {
        f[i] = f[i-1] + f[i-2];
        a[i] = a[i-1] + a[i-2];
    }
}

long long solve(int n, long long k) {
    if (k <= 0) return 0;
    if (n == 0) return 1;
    if (n == 1) return 0;
    if (k <= f[n-1]) return solve(n-1, k);
    return a[n-1] + solve(n-2, k-f[n-1]);
}

int main() {
    precompute();
    int t;
    cin>> t;
    while (t--)
    {
        int n; long long k;
        cin>> n >> k;
        cout<< solve(n, k) << endl;
    }
    
    return 0;
}