#include <bits/stdc++.h>
using namespace std;
int dp[10005];

void precompute() {
    for (int i=0; i<=10000; i++) dp[i] = i;
    dp[0] = 0;
    for (int i=1; i<=10000; i++) {
        for (int j=1; j*j<=i; j++) {
            dp[i] = min(dp[i], dp[i-j*j] + 1);
        }
    }
}

int main() {
    precompute();
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        cout<< dp[n] << endl;
    }
    
    return 0;
}