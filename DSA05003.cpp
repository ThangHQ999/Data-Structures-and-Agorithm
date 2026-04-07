#include <bits/stdc++.h>
using namespace std;
int dp[105][105][105];
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int x, y, z;
        cin>> x >> y >> z;
        string s1, s2, s3;
        cin>> s1 >> s2 >> s3;
        for (int i=0; i<=x; i++) {
            for (int j=0; j<=y; j++) {
                for (int k=0; k<=z; k++) {
                    if (i == 0 || j == 0 || k == 0) {
                        dp[i][j][k] = 0;
                    } else if (s1[i-1] == s2[j-1] && s2[j-1] == s3[k-1]) {
                        dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
                    } else {
                        dp[i][j][k] = max({dp[i-1][j][k], dp[i][j-1][k], dp[i][j][k-1]});
                    }
                }
            }
        }
        cout<< dp[x][y][z] << endl;
    }
    
    return 0;
}