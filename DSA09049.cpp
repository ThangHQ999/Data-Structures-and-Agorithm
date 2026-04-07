#include <bits/stdc++.h>
using namespace std;
int parent[300005];
int main() {
    int n;
    cin>> n;
    for (int i=2; i<=n; i++) {
        int x;
        cin>> x;
        parent[i] = x;
    }
    
    return 0;
}