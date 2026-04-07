#include <bits/stdc++.h>
using namespace std;
int parent[1005];

int findRoot(int u) {
    if (u == parent[u]) return u;
    return parent[u] = findRoot(parent[u]);
}

bool unite(int a, int b) {
    int rootA = findRoot(a);
    int rootB = findRoot(b);
    if (rootA == rootB) return true;

    parent[rootA] = rootB;
    return false;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int v, e;

        cin>> v >> e;
        bool hasCycle = false;
        for (int i=1; i<=v; i++) parent[i] = i;
        for (int i=0; i<e; i++) {
            int a, b;
            cin>> a >> b;
            if (!hasCycle) {
                if (unite(a, b)) hasCycle =  true;
            }
        }
        cout<< (hasCycle ? "YES" : "NO") << endl;
    }
    
    return 0;
}