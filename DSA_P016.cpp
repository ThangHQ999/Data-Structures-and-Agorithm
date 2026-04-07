#include <bits/stdc++.h>
using namespace std;
int a[10001], n, x[10001], cnt = 0, xuoi[1001], nguoc[1001], maxScore = 0, temp[80][80];

void Try(int i, int cur_sum) {
    for (int j=1; j<=n; j++) {
        if (!x[j] && !nguoc[i+j-1] && !xuoi[i-j+n]) {
            xuoi[i-j+n] = 1;
            nguoc[i+j-1] = 1;
            a[i] = j;
            x[j] = 1;
        if (i == n) {
            if (cur_sum + temp[i][j] > maxScore) {
                maxScore = cur_sum + temp[i][j];
            }
        }
            else Try(i+1, cur_sum + temp[i][j]);
            xuoi[i-j+n] = 0;
            nguoc[i+j-1] = 0;
            x[j] = 0;
        }
    }
}

int main() {
    int t;
    cin>> t;
    for (int test = 1; test <= t; test++)
    {
        n = 8;
        maxScore = 0;
        memset(a, 0, sizeof(a));
        memset(x, 0, sizeof(x));
        memset(nguoc, 0, sizeof(nguoc));
        memset(xuoi, 0, sizeof(xuoi));
        for (int i=1; i<=8; i++) {
            for (int j=1; j<=8; j++) {
                cin>> temp[i][j];
            }
        }
        Try(1, 0);
        cout<< "Test " << test << ": " << maxScore << endl;
    }
    
    return 0;
}