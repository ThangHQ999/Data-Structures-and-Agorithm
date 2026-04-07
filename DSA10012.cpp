#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

void solve() {
    int n, m;
    cin>> n >> m;
    vector<vector<int>> dist(n+1, vector<int>(n+1, INF));
    for (int i=1; i<=n; i++) dist[i][i] = 0;
    for (int i=0; i<m; i++) {
        int a, b;
        cin>> a >> b;
        dist[a][b] = 1;
    }

    for (int k=1; k<=n; k++) {
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                if (dist[i][k] < INF && dist[k][j] < INF) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }
    double sum = 0;
    int cnt = 0;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (i != j && dist[i][j] < INF) {
                sum += dist[i][j];
                cnt++;
            }
        }
    }
    if (sum == 0) cout<< "0.00" << endl;
    else cout<< fixed << setprecision(2) << sum/cnt << endl;
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