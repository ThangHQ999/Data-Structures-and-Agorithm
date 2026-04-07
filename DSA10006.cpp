#include <bits/stdc++.h>
using namespace std;
int n, m, startNode;
vector<vector<int>> adj;
vector<pair<int, int>> tree;
vector<bool> vs;

void DFS(int u) {
    vs[u] = true;
    for (int v: adj[u]) {
        if (!vs[v]) {
            tree.push_back({u, v});
            DFS(v);
        }
    }
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        cin>> n >> m >> startNode;
        adj.assign(n+1, vector<int>());
        vs.assign(n+1, false);
        tree.clear();
        for (int i=0; i<m; i++) {
            int a, b;
            cin>> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        
        DFS(startNode);
        if (tree.size() == n - 1) {
            for (auto i : tree) {
                cout << i.first << " " << i.second << "\n";
            }
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}