#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n, m , k;
        cin>> n >> m >> k;
        vector<int> a(n), b(m), c(k);
        vector<int> temp, result;
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        for (int i=0; i<m; i++) {
            cin>> b[i];
        }
        for (int i=0; i<k; i++) {
            cin>> c[i];
        }
        set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(temp));
        set_intersection(temp.begin(), temp.end(), c.begin(), c.end(), back_inserter(result));
        if (!result.empty()) {
            for (int x: result) {
                cout<< x << " ";
            }
            cout<< endl;
        } else {
            cout<< "NO" << endl;
        }
    }
    
    return 0;
}