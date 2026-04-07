#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1000005;
vector<bool> isPrime(MAX_N, true);

void sieve() {
    isPrime[0] = isPrime[1] = false;
    for (int i=2; i*i < MAX_N; i++) {
        if (isPrime[i]) {
            for (int j=i*i; j<MAX_N; j+= i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    sieve();
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        bool found = false;
        for (int i=2; i<=n/2; i++) {
            if (isPrime[i] && isPrime[n-i]) {
                cout<< i << " " << n-i << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout<< -1 << endl;
        }
    }
    
    return 0;
}