#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;

long long C[1005][1005];

void tinhToHop(int n, int k) {
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= min(i, k); j++) {
            if (j == 0 || j == i) {
                C[i][j] = 1;
            } else {
                C[i][j] = (C[i-1][j-1] + C[i-1][j])%mod;
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
        tinhToHop(n, k);
        cout<< C[n][k] << endl;
    }
    
    return 0;
}