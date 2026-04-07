#include <bits/stdc++.h>
using namespace std;

long long solve(int n, long long k) {
    long long m = pow(2, n-1);
    if (k == m) return n;
    if (k < m) return solve(n-1, k);
    return solve(n-1, k-m);
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        long long k;
        cin>> n >> k;
        cout<< (char)(solve(n, k) + 64) << endl;
    }
    return 0;
}