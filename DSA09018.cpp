#include <bits/stdc++.h>
using namespace std;
vector<bool> vs;
int v, e;
vector<vector<int>> l;

void ReInit() {
    vs.assign(v + 1, false);
}

void DFS(int u) {
    vs[u] = true;
    for (int i: l[u]) {
        if (!vs[i]) {
            DFS(i);
        }
    }
}

void PillarTop() {
    int tplt = 0;
    for (int i=1; i<=v; i++) {
        if (!vs[i]) {
            tplt++;
            DFS(i);
        }
    }
    for (int i=1; i<=v; i++) {
        int cnt = 0;
        ReInit();
        vs[i] = true;
        for (int j = 1; j<=v; j++) {
            if (!vs[j]) {
                cnt++;
                DFS(j);
            }
        }
        if (cnt > tplt) {
            cout<< i << " ";
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
        for (int i=0; i<e; i++) {
            int a, b;
            cin>> a >> b;
            l[a].push_back(b);
            l[b].push_back(a);
        }
        PillarTop();
    }
    return 0;
}