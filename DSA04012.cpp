#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int m, n;
        cin>> m >> n;
        int p[m], q[n];
        int res[m+n-1] = {0};
        for (int i=0; i<m; i++) {
            cin>> p[i];
        }
        for (int i=0; i<n; i++) {
            cin>> q[i];
        }
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                res[i+j] += p[i] * q[j]; 
            }
        }
        for (int i=0; i<m+n-1; i++) {
            cout<< res[i] << " ";
        }
        cout<< endl;
    }
    
    return 0;
}