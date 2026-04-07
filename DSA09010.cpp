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

void LienThongManh() {
    bool manh = true;
    for (int i=1; i<=v; i++) {
        if (l[i].size() == 0) {
            manh = false;
        }
    }
    cout<< (manh ? "YES": "NO") << endl;
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
        }
        LienThongManh();
    }
    return 0;
}