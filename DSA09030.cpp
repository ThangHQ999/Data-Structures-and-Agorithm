#include <bits/stdc++.h>
using namespace std;
int v, e;
vector<vector<int>> adj;

bool isBipartite() {
    vector<int> color(v+1, -1);
    for (int i=1; i<=v; i++) {
        if (color[i] == -1) {
            queue<int> q;
            q.push(i);
            color[i] = 0;

            while (!q.empty())
            {
                int u = q.front();
                q.pop();
                for (int a: adj[u]) {
                    if (color[a] == -1) {
                        color[a] =  1 - color[u];
                        q.push(a);
                    } else if (color[a] == color[u]) {
                        return false;
                    }
                }
            }
            
        }
    }
    return true;
} 

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        cin>> v >> e;
        adj.assign(v+5, vector<int>());
        for (int i=0; i<e; i++) {
            int a, b;
            cin>> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        cout<< (isBipartite() ? "YES": "NO") << endl;
        adj.clear();
    }
    
    return 0;
}