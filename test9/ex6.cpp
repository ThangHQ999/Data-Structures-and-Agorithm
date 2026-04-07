#include <bits/stdc++.h>
using namespace std;
int v, e, start;
vector<int> adj[1005];
vector<int> vs;

void DFS(int s) {
    vs[s] = true;
    cout<< s << " ";
    for (int u : adj[s]) {
        if (!vs[u]) {
            DFS(u);
        }
    }
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        cin>> v >> e >> start;
        for (int i=1; i<=v; i++) {
            adj[i].clear();
        }
        vs.assign(v + 5, false);
        for (int i=0; i<e; i++) {
            int a, b;
            cin>> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        cout<< "DFS(" << start << ") = "; 
        DFS(start);
        cout<< endl;
    }
    
    return 0;
}