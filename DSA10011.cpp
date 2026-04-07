#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int n, m;
int a[505][505];
int dist[505][505];

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

struct Node
{
    int d, x, y;
    bool operator>(const Node& other) const {
        return d > other.d;
    }
};


void solve() {
        cin>> n >> m;
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=m; j++) {
                cin>> a[i][j];
                dist[i][j] = INF;
            }
        }
    priority_queue<Node, vector<Node>, greater<Node>> pq;
    dist[1][1] = a[1][1];
    pq.push({dist[1][1], 1, 1});
    while (!pq.empty())
    {
        int d = pq.top().d;
        int x = pq.top().x;
        int y = pq.top().y;
        pq.pop();

        if (d > dist[x][y]) continue;
        if (x == n && y == m) break;

        for (int i=0; i<4; i++) {
            int nX = x + dx[i];
            int nY = y + dy[i];
            if (nX >= 1 && nX <= n && nY <= m && nY >= 1) {
                if (dist[nX][nY] > dist[x][y] + a[nX][nY]) {
                    dist[nX][nY] = dist[x][y] + a[nX][nY];
                    pq.push({dist[nX][nY], nX, nY});
                }
            }
        }
    }
    cout<< dist[n][m] << endl;
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