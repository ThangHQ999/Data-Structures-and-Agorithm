#include <bits/stdc++.h>
using namespace std;
int parent[100005];
int sizeDSU[100005];

int findRoot(int u) {
    if (u == parent[u]) return u;
    return parent[u] = findRoot(parent[u]);
}

void unite(int u, int v) {
    int rootU = findRoot(u);
    int rootV = findRoot(v);
    if (rootU == rootV) return;
    if (sizeDSU[rootV] > sizeDSU[rootU]) {
        parent[rootU] = rootV;
        sizeDSU[rootV] += sizeDSU[rootU];
    }
    else {
        parent[rootV] = rootU;
        sizeDSU[rootU] += sizeDSU[rootV];
    }
    return;
}

void solve() {
    int v, e;
    cin>> v >> e;
    for (int i=1; i<=v; i++) {
        parent[i] = i;
        sizeDSU[i] = 1;
    }
    for (int i=0; i<e; i++) {
        int a, b;
        cin>> a >> b;
        unite(a, b);
    }
    int maxSize = 0;
    for (int i=1; i<=v; i++) {
        maxSize = max(maxSize, sizeDSU[i]);
    }
    cout<< maxSize << endl;
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