#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n, k, sum = 0;
        cin>> n >> k;
        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin>> a[i];
            sum += a[i];
        }
        sort(a.begin(), a.end());
        k = min(k, n - k);
        for (int i=0; i<k; i++) {
            sum -= 2*a[i];
        }
        cout<< sum << endl;
    }
    
    return 0;
}