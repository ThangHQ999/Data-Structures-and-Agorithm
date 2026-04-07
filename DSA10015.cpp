#include <bits/stdc++.h>
using namespace std;
int v, e;
int parent[100005];

struct Edge {
    int x, y, w;
};
vector<Edge> edges;

int findRoot(int u) {
    if (parent[u] == u) return u;
    return parent[u] = findRoot(parent[u]);
}

bool unite(int a, int b) {
    int rootA = findRoot(a);
    int rootB = findRoot(b);
    if (rootA == rootB) {
        return false;
    }
    parent[rootB] = rootA;
    return true;
}

bool cmp(Edge a, Edge b) {
    return a.w < b.w;
}

void kruskal() {
    vector<Edge> mst;
    long long d = 0;
    sort(edges.begin(), edges.end(), cmp);
    for (int i=0; i<e; i++) {
        if (mst.size() == v-1) break;
        Edge ed = edges[i];
        if (unite(ed.x, ed.y)) {
            mst.push_back(ed);
            d += ed.w;
        }
    }
    cout<< d << endl;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        cin>> v >> e;
        edges.clear();
        for (int i=1; i<=v; i++) parent[i] = i;
        for (int i=0; i<e; i++) {
            int x, y, w;
            cin>> x >> y >> w;  
            edges.push_back({x, y, w});
        }
        kruskal();
    }
    
    return 0;
}