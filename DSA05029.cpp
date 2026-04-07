#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        string s;
        cin>> s;
        int len = s.length();
        int dp[len+1] = {0};
        if (s[0] == '0') {
            cout<< 0 << endl;
            continue;
        }
        dp[0] = 1;
        dp[1] = 1;
        for (int i=2; i<=len; i++) {
            if (s[i-1] > '0') {
                dp[i] += dp[i-1];
            }
            int twoDigits = stoi(s.substr(i-2, 2));
            if (twoDigits >= 10 && twoDigits <= 26) {
                dp[i] += dp[i-2];
            }
        }
        cout<< dp[len] << endl;
    }
    
    return 0;
}