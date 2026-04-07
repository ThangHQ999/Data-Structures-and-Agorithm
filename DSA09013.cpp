#include <bits/stdc++.h>
using namespace std;
vector<bool> vs;
int v, e;
vector<vector<int>> l;
vector<pair<int, int>> dscanh; 

void ReInit() {
    vs.assign(v + 1, false);
}

void DFS2(int u, int x, int y) {
    vs[u] = true;
    for (int i: l[u]) {
        if ((u == x && i == y) || (u == y && i == x)) continue;
        if (!vs[i]) {
            DFS2(i, x, y);
        }
    }
}

void DFS(int u) {
    vs[u] = true;
    for (int i: l[u]) {
        if (!vs[i]) {
            DFS(i);
        }
    }
}

void CanhCau() {
    int tplt = 0;
    for (int i=1; i<=v; i++) {
        if (!vs[i]) {
            tplt++;
            DFS(i);
        }
    }
    for (auto it: dscanh) {
        ReInit();
        int dem = 0;
        int x = it.first, y = it.second;
        for (int j=1; j<=v; j++) {
            if (!vs[j]) {
                dem++;
                DFS2(j, x, y);
            }
        }
        if (dem > tplt) {
            cout<< x << " " << y << " ";
        }
    }
    cout<< endl;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        cin>> v >> e;
        l.assign(v + 1, vector<int>());
        vs.assign(v+1, false);
        dscanh.clear();
        for (int i=0; i<e; i++) {
            int a, b;
            cin>> a >> b;
            l[a].push_back(b);
            l[b].push_back(a);
            dscanh.push_back({a, b});
        }
        CanhCau();
    }
    return 0;
}