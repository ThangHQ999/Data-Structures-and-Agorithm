#include <bits/stdc++.h>
using namespace std;
vector<bool> vs;
int v, e, q;
vector<vector<int>> adj;

void ReInit() {
    vs.assign(v + 5, false);
}

void DFS(int a) {
    vs[a] = true;
    for (int x: adj[a]) {
        if (!vs[x]) {
            DFS(x);
        }
    }
}

void hasPath(int s, int t) {
    ReInit();
    DFS(s);
    if (!vs[t]) {
        cout<< "NO\n";
    } else {
        cout<< "YES\n";
    }
}

int main() {
    int test;
    cin>> test;
    while (test--)
    {
        cin>> v >> e;
        ReInit();
        adj.assign(v + 5, vector<int>());
        for (int i=0; i<e; i++) {
            int a, b;
            cin>> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        cin>> q;
        vector<pair<int, int>> query;
        for (int i=0; i<q; i++) {
            int x, y;
            cin>> x >> y;
            query.push_back({x, y});
        }
        for (auto it: query) {
            int x = it.first, y = it.second;
            hasPath(x, y);
        }
    }
    return 0;
}