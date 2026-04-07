#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll getLen(ll n) {
    if (n<=1) return 1;
    ll x = getLen(n/2);
    return 2*x + 1;
}

long long countOnes(ll n, ll l, ll r, ll qL, ll qR) {
    if (l> qR || r < qL) return 0;
    if (n <= 1) return n;
    ll mid = l + (r-l)/2;
    ll res = 0;
    res += countOnes(n/2, l, mid-1, qL, qR);
    if (mid >= qL && mid <= qR) {
        res += (n % 2);
    }
    res += countOnes(n / 2, mid + 1, r, qL, qR);
    return res;
}

void solve() {
    ll n, L, R;
    cin >> n >> L >> R;
    ll totalLen = 1;
    ll temp = n;
    while (temp > 1) {
        totalLen = totalLen * 2 + 1;
        temp /= 2;
    }
    cout << countOnes(n, 1, totalLen, L, R) << endl;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}