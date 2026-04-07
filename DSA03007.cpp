#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        int a[n], b[n];
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        for (int i=0; i<n; i++) {
            cin>> b[i];
        }
        sort(a, a+n, greater<int>());
        sort(b, b+n);
        long long p = 0;
        for (int i=0; i<n; i++) {
            p += a[i]*b[i];
        }
        cout<< p << endl;
    }
    
    return 0;
}