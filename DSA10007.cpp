#include <bits/stdc++.h>
using namespace std;
int n, m, startNode;
vector<vector<int>> adj;
vector<pair<int, int>> tree;
vector<bool> vs;

void BFS(int u) {
    vs[u] = true;
    queue<int> q;
    q.push(u);
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int i: adj[v]) {
            if (!vs[i]) {
                vs[i] = true;
                tree.push_back({v, i});
                q.push(i);
            }
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
        
        BFS(startNode);
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