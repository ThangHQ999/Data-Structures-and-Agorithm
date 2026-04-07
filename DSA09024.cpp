#include <bits/stdc++.h>
using namespace std;
vector<bool> vs;
int v, e, u;
vector<vector<int>> l;

void BFS(int u) {
    queue<int> q;
    q.push(u);
    vs[u] = true;
    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        cout<< f << " ";
        for (int i: l[f]) {
            if (!vs[i]) {
                vs[i] = true;
                q.push(i);
            }
        }
    }
    
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        cin>> v >> e >> u;
        l.assign(v + 1, vector<int>());
        vs.assign(v+1, false);
        for (int i=0; i<e; i++) {
            int a, b;
            cin>> a >> b;
            l[a].push_back(b);
        }
        BFS(u);
        cout<< endl;
    }
    return 0;
}