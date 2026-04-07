#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        vector<int> a(n, 0);
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        sort(a.begin(), a.end());
        int res = INT_MAX;
        for (int i=0; i<n-1; i++) {
            if (a[i+1] - a[i] < res) res = a[i+1] - a[i];
        }
        cout<< res << endl;
    }
    
    return 0;
}