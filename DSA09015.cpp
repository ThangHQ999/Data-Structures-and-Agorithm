#include <bits/stdc++.h>
using namespace std;
vector<int> color;
int v, e;
vector<vector<int>> adj;
vector<int> parent;

void ReInit() {
    color.assign(v + 5, 0);
    parent.assign(v+ 5, 0);
    adj.assign(v + 5, vector<int>());
}

bool DFS(int u) {
    color[u] = 1;
    for (int i: adj[u]) {
        if (color[i] == 0) {
            parent[i] = u;
            if (DFS(i)) {
                return true;
            }
        }
        else if (color[i] == 1) {
            return true;
        }
    }
    color[u] = 2;
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
        }
        bool hasCycle = false;
        for (int i=1; i<=v; i++) {
            if (color[i] == 0) {
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