#include <bits/stdc++.h>
using namespace std;
bool vs[5005];
int cnt[5005] = {0};
vector<int> startPos;
vector<vector<int>> adj;
void DFS(int u) {
    vs[u] = true;
    cnt[u]++;
    for (int v: adj[u]) {
        if (!vs[v]) {
            DFS(v);
        }
    }
    return;
}

int main() {
    int k, n, m;
    cin>> k >> n >> m;
    adj.assign(n+5, vector<int>());
    for (int i=1; i<=k; i++) {
        int s;
        cin>> s;
        startPos.push_back(s);
    }
    for (int i=0; i<m; i++) {
        int u, v;
        cin>> u >> v;
        adj[u].push_back(v);
    }
    for (int i=0; i<k; i++) {
        memset(vs, false, sizeof(vs));
        DFS(startPos[i]);
    }
    int ans = 0;
    for (int i=1; i<=n; i++) {
        if (cnt[i] == k) {
            ans++;
        }
    }
    cout<< ans << endl;
    return 0;
}