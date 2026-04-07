#include <bits/stdc++.h>
using namespace std;
int v, e;

void solve() {
    vector<int> degree(v+1, 0);
    for (int i=0; i<e; i++) {
        int a, b;
        cin>> a >> b;
        degree[a]++;
        degree[b]++;
    }
    int oddCnt = 0;
    for (int i=1; i<=v; i++) {
        if (degree[i]%2 != 0) {
            oddCnt++;
        }
    }
    if (oddCnt == 0) {
        cout<< 2 << endl;
    } else if (oddCnt == 2) {
        cout<< 1 << endl;
    } else cout<< 0 << endl;
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