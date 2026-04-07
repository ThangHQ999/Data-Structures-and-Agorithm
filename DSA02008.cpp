#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[105][105];
bool vs[105];
int path[105];
vector<vector<int>> res;

void Try(int row, int curSum) {
    if (row > n) {
        if (curSum == k) {
            vector<int> temp;
            for (int i=1; i<=n; i++) {
                temp.push_back(path[i]);
            }
            res.push_back(temp);
        }
        return;
    }
    for (int j=1; j<=n; j++) {
        if (!vs[j]) {
            vs[j] = true;
            path[row] = j;
            if (curSum + a[row][j] <= k) {
                Try(row+1, curSum+a[row][j]);
            }
            vs[j] = false;
        }
    }
}

int main() {
    cin>> n >> k;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) { 
            cin>> a[i][j];
        }
    }
    memset(vs, false, sizeof(vs));
    Try(1, 0);
    cout<< res.size() << endl;
    for (auto r: res) {
        for (int i=0; i<n; i++) {
            cout<< r[i] << (i == n-1 ? "": " ");
        }
        cout<< endl;
    }
    return 0;
}