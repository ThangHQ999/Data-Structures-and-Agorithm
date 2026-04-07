#include <bits/stdc++.h>
using namespace std;
int n;
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
        cin>> n;
        adj.assign(n+1, vector<int>());
        vs.assign(n+1, false);
        tree.clear();
        for (int i=1; i<n; i++) {
            int a, b;
            cin>> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        
        BFS(1);
        if (tree.size() == n - 1) {
            cout<< "YES" << endl;
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}