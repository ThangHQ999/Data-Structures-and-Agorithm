#include <bits/stdc++.h>
using namespace std;
int v, e;

void solve() {
    vector<int> inDegree(v+1, 0);
    vector<int> outDegree(v+1, 0);
    for (int i=0; i<e; i++) {
        int a, b;
        cin>> a >> b;
        outDegree[b]++;
        inDegree[a]++;
    }
    int startNode = 0, endNode = 0, equalNode = 0;
    for (int i=1; i<=v; i++) {
        if (outDegree[i]-inDegree[i] ==0) equalNode++;
        else if (outDegree[i]-inDegree[i] == 1) startNode++;
        else if (inDegree[i]-outDegree[i] == 1) endNode++;
    }
    if (equalNode == v) {
        cout<< 1 << endl;
    } else {
        cout<< 0 << endl;
    }
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        cin>> v >> e;
        solve();
    }
    
    return 0;
}