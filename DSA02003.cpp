#include <bits/stdc++.h>
using namespace std;
int n, a[100][100];
vector<string> results;
void Try(int i, int j, string s) {
    if (i == n-1 && j == n-1) {
        results.push_back(s);
        return;
    }
    if (a[i+1][j] == 1 && i+1 <n) {
        Try(i+1, j, s+"D");
    }
    if (a[i][j+1] == 1 && j+1 <n) {
        Try(i, j+1, s+"R");
    }
}

void solve() {
    results.clear();
    cin>> n;
    for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                cin>> a[i][j];
            }
        }
    if (a[0][0] == 0 || a[n - 1][n - 1] == 0) {
        cout << -1 << endl;
        return;
    }
    Try(0, 0, "");
    if (results.empty()) {
        cout<< -1 << endl;
    } else {
        for (string s: results) {
            cout<< s << " ";
        }
        cout<< endl;
    }
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}