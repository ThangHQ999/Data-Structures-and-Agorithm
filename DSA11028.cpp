#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        vector<int> adj[n+1];
        for (int i=0; i<n-1; i++) {
            int u, v;
            cin>> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> dist(n+1, -1);
        dist[1] = 0;
        queue<int> q;
        q.push(1);
        int maxHeight = 0;
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            for (int v: adj[u]) {
                if (dist[v] == -1) {
                    dist[v] = dist[u] + 1;
                    maxHeight = max(dist[v], maxHeight);
                    q.push(v);
                }
            }
        }
        cout<< maxHeight << endl;
    }
    
    return 0;
}