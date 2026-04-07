#include <bits/stdc++.h>
using namespace std;
int n, m, k;
char a[600][600];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void DFS(int x, int y) {
    a[x][y] = 0;
    for (int i=0; i<8; i++) {
        int i1 = x + dx[i];
        int j1 = y + dy[i];
        if (i1 >=0 && i1 < n && j1 >=0 && j1 < m && a[i1][j1] == 'W') DFS(i1, j1);
    }
}

int main() {
        cin>> n >> m >> k;
        
        for (int i=1; i<n; i++) {
            for (int j=1; j<m; j++) {
                cin>> a[i][j];
            }
        }
        int cnt = 0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (a[i][j] == 'W') {
                    cnt++;
                    DFS(i, j);
                }
            }
        }
        cout<< cnt << endl;
    
    return 0;
}