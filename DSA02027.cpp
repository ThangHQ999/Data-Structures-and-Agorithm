#include <bits/stdc++.h>
using namespace std;
int n, a[20][20];
bool vs[20];
int res = 1e9;
int minEdge = 1e9;

void Try(int step) {
    if (step == n+1) {

    }
}

int main() {
    cin>> n;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cin>> a[i][j];
            minEdge = min(minEdge, a[i][j]);
        }
    }
    memset(vs, false, sizeof(vs));
    return 0;
}