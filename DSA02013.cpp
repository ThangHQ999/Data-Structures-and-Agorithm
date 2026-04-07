#include <bits/stdc++.h>
using namespace std;
long long m, p, s;
vector<vector<long long>> res;
vector<long long> primes;
bool isPrime(long long n) {
    if (n<2) return false;
    if (n==2 || n==3) return true;
    if (n%2 == 0) return false;
    for (long long i=3; i<=sqrt(n); i++) {
        if (n%i == 0) return false;
    }
    return true;
}

void sieve() {
    for (long long i=p+1; i<=s; i++) {
        if (isPrime(i)) primes.push_back(i);
    }
}

void Try(long long idx, long long curSum,vector<long long>& r) {
    if (r.size() == m) {
        if (curSum == s) {
            res.push_back(r);
        }
        return;
    }
    for (long long i=idx; i<primes.size(); i++) {
        if (curSum + primes[i] <= s) {
            r.push_back(primes[i]);
            Try(i+1, curSum+primes[i], r);
            r.pop_back();
        } else {
            break;
        }
    }
}

void solve() {
    cin>> m >> p >> s;
    primes.clear();
    res.clear();
    sieve();
    vector<long long> a;
    Try(0, 0, a);
    cout<< res.size() << endl;
    for (auto i: res) {
        for (long long x: i) {
            cout<< x << " ";
        }
        cout<< endl;
    }
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