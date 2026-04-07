#include <bits/stdc++.h>
using namespace std;
int v, e, limit;
vector<vector<int>> adj;
vector<int> color;

bool isSafe(int u, int c) {
    for (int v: adj[u]) {
        if (color[v] == c) return false;
    }
    return true;
}

bool solve(int u) {
    if (u > v) return true;
    for (int c = 1; c <= limit; c++) {
        if (isSafe(u, c)) {
            color[u] = c;
            if (solve(u+1)) return true;
            color[u] = 0;
        }
    }
    return false;
}

int main() {
    int t;
    cin>> t ;
    while (t--)
    {
        cin>> v >> e >> limit;
        adj.assign(v+5, vector<int>());
        color.assign(v+5, 0);
        for (int i=0; i<e; i++) {
            int a, b;
            cin>> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        cout<< (solve(1) ? "YES" : "NO") << endl;
    }
    return 0;
}