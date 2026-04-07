#include <bits/stdc++.h>
using namespace std;
vector<bool> vs;
int v, e;
vector<vector<int>> adj;
vector<int> parent;

void ReInit() {
    vs.assign(v + 5, false);
    parent.assign(v+ 5, 0);
    adj.assign(v + 5, vector<int>());
}

bool DFS(int u) {
    vs[u] = true;
    for (int i: adj[u]) {
        if (!vs[i]) {
            parent[i] = u;
            if (DFS(i)) {
                return true;
            }
        }   
        else if (i != parent[u]) {
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
        cin>> v >> e;
        ReInit();
        for (int i=0; i<e; i++) {
            int a, b;
            cin>> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        bool hasCycle = false;
        for (int i=1; i<=v; i++) {
            if (!vs[i]) {
                if (DFS(i)) {
                    hasCycle = true;
                    break;
                }
            }
        }
        cout<< (hasCycle ? "YES": "NO") << endl;
    }
    return 0;
}