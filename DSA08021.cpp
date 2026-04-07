#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
int m, n;
bool vs[1005][1005] = {false};


struct Node
{
    int x, y, dist;
};

int BFS() {
    for (int i=1; i<=m; i++) {
            for (int j=1; j<=n; j++) {
                vs[i][j] = false;
            }
        }
    queue<Node> q;
    q.push({1, 1, 0});
    while (!q.empty())
    {
        Node u = q.front();
        q.pop();
        int i = u.x;
        int j = u.y;
        int d = u.dist;
        if (i == m && j == n) return d;
        int jump = a[i][j];
        if (jump == 0) continue;
        if (j + jump <= n && !vs[i][j+jump]) {
            vs[i][j+jump] = true;
            q.push({i, j + jump, d+1});
        }
        if (i + jump <= m && !vs[i+jump][j]) {
            vs[i+jump][j] = true;
            q.push({i+jump, j, d+1});
        }
    }
    return -1;
}


int main() {
    int t;
    cin>> t;
    while (t--)
    {
        cin>> m >> n;
        for (int i=1; i<=m; i++) {
            for (int j=1; j<=n; j++) {
                cin>> a[i][j];
            }
        }
        cout<< BFS() << endl;
    }
    
    return 0;
}