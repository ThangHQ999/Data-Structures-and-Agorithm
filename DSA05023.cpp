#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>> t;
    while (t--)
    {
        string s;
        cin>> s;
        int n = s.length();
        long long dp[n] = {0};
        dp[0] = 0;
        long long totalSum = 0;
        for (int i=0; i<n; i++) {
            int digit = s[i] - '0';
            if (i == 0) {
                dp[i] = digit;
            } else {
                dp[i] = 10*dp[i-1] + (long long)digit*(i+1);
            }
            totalSum += dp[i];
        }
        cout<< totalSum << endl;
    }
    
    return 0;
}