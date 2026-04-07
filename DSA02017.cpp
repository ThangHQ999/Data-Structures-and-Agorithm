#include <bits/stdc++.h>
using namespace std;

int n, highestScore = 0, x[9][9], a[10001] = {0}, xuoi[10001] = {0}, nguoc[10001] = {0};

void Try(int i, int sum) {
    for (int j=1; j<=n; j++) {
        if (!a[j] && !xuoi[i-j+n] && !nguoc[i+j-1]) {
            sum+=x[i][j];
            a[j] = true;
            xuoi[i-j+n] = true;
            nguoc[i+j-1] = true;
            if (i == n) {
                highestScore = max(highestScore, sum);
            }
            else Try(i+1, sum);
            sum-=x[i][j];
            a[j] = false;
            xuoi[i-j+n] = false;
            nguoc[i+j-1] = false;
        }
    }
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        n = 8, highestScore = 0;
        for (int i = 1; i <= 8; ++i) {
            for (int j = 1; j <= 8; ++j) {
                cin >> x[i][j];
            }
        }
        Try(1, 0);
        cout<< highestScore << endl;
    }
    return 0;
}