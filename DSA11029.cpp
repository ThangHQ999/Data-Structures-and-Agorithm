#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        vector<int> adj[n+1];
        for (int i=0; i<n-1; i++) {
            int u, v;
            cin>> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> parent(n+1, -1);
        parent[1] = 0;
        stack<int> st;
        st.push(1);
        while (!st.empty())
        {
            int u = st.top();
            st.pop();
            for (int v: adj[u]) {
                if (parent[v] == -1) {
                    parent[v] = u;
                    cout<< parent[v] << endl;
                    st.push(v);
                    st.push(u);
                }
            }
        }
    }
    return 0;
}