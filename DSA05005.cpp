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
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        long long maxLis = 1;
        long long L[n+1];
        for (int i=0; i<n; i++) {
            L[i] = 1;
            for (int j=0; j<i; j++) {
                if (a[i] >= a[j]) {
                    L[i] = max(L[i], L[j] + 1); 
                }
            }
            maxLis = max(maxLis, L[i]);
        }
        cout<< n - maxLis << endl;
    }
    return 0;
}