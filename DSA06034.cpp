#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n, k;
        long long cnt = 0;
        cin>> n >> k;
        vector<long long> a(n);
        map<long long, long long> m;
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        for (int i=0; i<n; i++) {
            long long needed = k-a[i];
            if (m.count(needed)) {
                cnt += m[needed];
            }
            m[a[i]]++;
        }
        cout<< cnt << endl;
    }
    
    return 0;
}