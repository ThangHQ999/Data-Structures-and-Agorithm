#include <bits/stdc++.h>
using namespace std;

int n, m;
int start_node, end_node; 
vector<vector<int>> adj;
vector<bool> vs;
vector<int> parent;

void ReInit() {
    start_node = 0;
    end_node = 0;
    adj.assign(n + 5, vector<int>());
    vs.assign(n + 5, false);
    parent.assign(n + 5, 0);
}

bool DFS(int u) {
    sort(adj[u].begin(), adj[u].end());
    
    vs[u] = true;
    for (int v : adj[u]) {
        if (v == parent[u]) continue; 
        
        if (vs[v]) {
            start_node = v;
            end_node = u;
            return true;
        } 
        else {
            parent[v] = u;
            if (DFS(v)) return true;
        }
    }
    return false;
}

void Solve() {
    cin >> n >> m;
    ReInit();
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if (DFS(1)) {
        vector<int> cycle;
        
        cycle.push_back(start_node);
        
        int curr = end_node;
        while (curr != start_node && curr != 0) {
            cycle.push_back(curr);
            curr = parent[curr];
        }
        
        reverse(cycle.begin(), cycle.end()); 
        
        cout << start_node << " ";
        
        for (int i = 0; i < cycle.size(); i++) {
            cout << cycle[i];
            if (i < cycle.size() - 1) cout << " ";
        }
        
        cout << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    if (cin >> t) {
        while (t--) {
            Solve();
        }
    }
    return 0;
}