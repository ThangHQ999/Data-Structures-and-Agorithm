#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e9;
int n , m;
struct Edge
{
    int u, v;
    int w;
};

bool hasNegativeCycle(int V, int E, vector<Edge>& edges) {
    vector<long long> dist(n+1, 0);
    for (int i=1; i<V; i++) {
        for (int i=0; i<E; i++) {
            int u = edges[i].u;
            int v = edges[i].v;
            int w = edges[i].w;
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
            }
        }
    }    

    for (int i=0; i<E; i++) {
        int u = edges[i].u;
            int v = edges[i].v;
            int w = edges[i].w;
            if (dist[u] + w < dist[v]) {
                return true;
            }
    }
    return false;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        cin>> n >> m;
        vector<Edge> edges(m);
        for (int i=0; i<m; i++) {
            cin>> edges[i].u >> edges[i].v >> edges[i].w;
        }
        cout<< (hasNegativeCycle(n, m, edges) ? 1 : 0) << endl;
    }
    
    return 0;
}