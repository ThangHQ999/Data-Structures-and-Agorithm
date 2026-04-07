#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        vector<long long> a(n);
        map<long long, long long> m;
        for (int i=0; i<n; i++) {
            cin>> a[i];
            m[a[i]]++;
        }
        long long maxCnt = 0;
        long long res = 0;
        for (int i=0; i<n; i++) {
            if (m[a[i]] > maxCnt && m[a[i]] > n/2) {
                maxCnt = m[a[i]];
                res = a[i];
            }
        }
        if (res == 0) {
            cout<< "NO\n";
        }  else {
            cout<< res << endl;
        }
    }
    
    return 0;
}