#include <bits/stdc++.h>
using namespace std;
int v, e, start;
vector<int> adj[1005];
vector<int> vs;

void BFS(int s) {
    vs[s] = true;
    queue<int> q;
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cout<< u << " ";
        for (int x: adj[u]) {
            if (!vs[x]) {
                vs[x] = true;
                q.push(x);
            }
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
        BFS(start);
        cout<< endl;
    }
    
    return 0;
}