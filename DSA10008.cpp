#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e15;

struct Edge
{
    int v;
    int w;
};

void dijkstra() {
    int n, m, s;
    cin>> n >> m >> s;
    vector<vector<Edge>> adj(n+1);
    for (int i=0; i<m; i++) {
        int u, v, w;
        cin>> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    vector<long long> dist(n + 1, INF);
    dist[s] = 0;
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push({0, s});
    while (!pq.empty())
    {
        long long d = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        if (d > dist[u]) continue;
        for (auto& edge: adj[u]) {
            int v = edge.v;
            long long w = edge.w;
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (dist[i] == INF) cout << "INF ";
        else cout << dist[i] << " ";
    }
    cout<< endl;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        dijkstra();
    }
    return 0;
}