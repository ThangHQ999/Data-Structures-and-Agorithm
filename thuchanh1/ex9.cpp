#include <bits/stdc++.h>
using namespace std;
const long long MAX = 1e6 + 5;
long long s[MAX+5];
long long prefixCnt[MAX+5];
void precompute() {
    for (long long i=1; i<=MAX/2; i++) {
        for (long long j=2*i; j<=MAX; j+=i) {
            s[j] += i;
        }
    }
    for (long long i=1; i<MAX; i++) {
        prefixCnt[i] = prefixCnt[i-1]+(s[i] > i ? 1 : 0);
    }
}

int main() {
    precompute();
    long long a, b;
    cin>> a >> b;
    cout<< prefixCnt[b] - prefixCnt[a-1] << endl;
    return 0;
}