#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n, m;
        cin>> n >> m;
        map<int, int> a;
        for (int i=0; i<n+m; i++) {
            int x;
            cin>> x;
            a[x]++;
        }
        for (auto p: a) {
            for (int i=0; i<p.second; i++) {
                cout<< p.first << " ";
            }
        }
        cout<< endl;
    }
    
    return 0;
}