#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n, m;
        cin>> n >> m;
        vector<int> a(n), b(m);
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        for (int i=0; i<m; i++) {
            cin>> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        vector<int> u;
        set_union(a.begin(), a.end(), b.begin(), b.end(), back_inserter(u));
        for (int x: u) {
            cout<< x << " ";
        }
        cout<< endl;
        vector<int> i;
        set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(i));
        for (int x: i) {
            cout<< x << " ";
        }
        cout<< endl;
    }
    
    return 0;
}