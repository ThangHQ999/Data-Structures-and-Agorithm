#include <bits/stdc++.h>
using namespace std;
int v, e, cnt = 0;
const int MAXN = 100005; 

vector<int> adjacency[MAXN]; 
bool vs[MAXN];
queue<int> q;

void DFS(int u) {
    vs[u] = true;
    for (int x: adjacency[u]) {
        if (!vs[x]) {
            DFS(x);
        }
    }
}

void BFS(int u) {
    vs[u] = true;
    for (int x: adjacency[u]) {
        if (!vs[x]) {
            q.push(x);
            int k = q.back();
            DFS(k);
            q.pop();
        }
    }
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        cin>> v >> e;
        cnt = 0;
        for (int i = 1; i <= v; i++) {
            adjacency[i].clear();
            vs[i] = false;
        }
        for (int i=1; i<=e; i++) {
            int a, b;
            cin>> a >> b;
            adjacency[a].push_back(b);
            adjacency[b].push_back(a);
        }
        for (int i=1; i<=v; i++) {
            if (!vs[i]) {
                cnt++;
                DFS(i);
            }
        }
        cout<< cnt << endl;
    }
    return 0;
}