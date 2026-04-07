#include <bits/stdc++.h>
using namespace std;

long long solve(int n, long long k) {
    long long mid = pow(2, n-1);
    if (k == mid) return n;
    if (k < mid) return solve(n-1, k);
    return solve(n-1, k-mid);
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        long long k;
        cin>> n >> k;
        long long ans = solve(n, k);
        cout<< ans << endl;
    }
    
    return 0;
}