#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;

long long P[1005][1005];

void tinhChinhHop(int n, int k) {
    if (k > n) {
        P[n][k] = 0;
        return;
    }
    for (int i=0; i<=n; i++) {
        for (int j=0; j<=min(i, k); j++) {
            if (j == 0) {
                P[i][j] = 1;
            } else {
                P[i][j] = (P[i-1][j] + j*P[i-1][j-1])%mod;
            }
        }
    }
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n, k;
        cin>> n >> k;
        tinhChinhHop(n, k);
        cout<< P[n][k] << endl;
    }
    return 0;
}