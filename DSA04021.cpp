#include <bits/stdc++.h>
using namespace std;
long long f[100];

void sieve() {
    f[0] = 0;
    f[1] = 1;
    for (int i=2; i<93; i++) {
        f[i] = f[i-1] + f[i-2];
    }
    return;
}

char fiboWord(int n, long long k) {
    if (n == 1) return '0';
    if (n == 2) return '1';
    if (k <= f[n-2]) return fiboWord(n-2, k);
    return fiboWord(n-1, k-f[n-2]);
}

int main() {
    sieve();
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        long long i;
        cin>> n >> i;
        cout<< fiboWord(n, i) << endl;
    }
    
    return 0;
}