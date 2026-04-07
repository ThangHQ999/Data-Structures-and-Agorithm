#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        string s1, s2;
        cin>> s1 >> s2;
        int n = s1.length(), m = s2.length();
        int f[n+1][m+1];
        for (int i=0; i<=n; i++) {
            for (int j=0; j<=m; j++) {
                if (i == 0 || j == 0) {
                    f[i][j] = 0;
                } else {
                    if (s1[i-1] == s2[j-1]) {
                        f[i][j] = f[i-1][j-1] + 1;
                    } else {
                        f[i][j] = max(f[i-1][j], f[i][j-1]);
                    }
                }
                
            }
        }
        cout<< f[n][m] << endl;
    }
    
    return 0;
}