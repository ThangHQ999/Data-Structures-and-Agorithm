#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        vector<int> a(n);
        map<int, int> m;
        for (int i=0; i<n; i++) {
            cin>> a[i];
            m[a[i]]++;
        }
        sort(a.begin(), a.end(), [&m](int x, int y) {
            if (m[x] != m[y]) {
                return m[x] > m[y];
            }
            return x < y;
        });
        for (int i=0; i<n; i++) {
            cout<< a[i] << " ";
        }
        cout<< endl;
    }
    
    return 0;
}