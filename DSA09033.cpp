#include <bits/stdc++.h>
using namespace std;
int parent[100005];
long long sizeDSU[100005];
long long edges[100005];

int findRoot(int u) {
    if (u == parent[u]) return u;
    return parent[u] = findRoot(parent[u]);
}

void unite(int u, int v) {
    int rootU = findRoot(u);
    int rootV = findRoot(v);
    if (rootU == rootV) {
        edges[rootU]++;
        return;
    }
    if (sizeDSU[rootU] < sizeDSU[rootV]) swap(rootU, rootV);
    
    parent[rootV] = rootU;
    sizeDSU[rootU] += sizeDSU[rootV];
    edges[rootU] += edges[rootV] + 1;
    return;
}

void solve() {
    int n, m;
        cin>> n >> m;
        for (int i=1; i<=n; i++) {
            sizeDSU[i] = 1;
            parent[i] = i;
            edges[i] = 0;
        }
        for (int i=0; i<m; i++) {
            int a, b;
            cin>> a >> b;
            unite(a, b);
        }
        for (int i=1; i<=n; i++) {
            if (parent[i] == i) {
                long long e = edges[i];
                long long v = sizeDSU[i];
                if (e != v * (v - 1) / 2) {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
        cout<< "YES" << endl;
        return;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}