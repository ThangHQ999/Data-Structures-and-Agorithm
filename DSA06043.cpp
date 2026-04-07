#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n, sum = 0;
        cin>> n;
        vector<int> a(n+1, 0);
        for (int i=1; i<=n; i++) {
            cin>> a[i];
            a[i] += a[i-1];
        }
        int res = -1;
        for (int i=1; i<=n; i++) {
            int sumLeft = a[i-1];
            int sumRight = a[n] - a[i];
            if (sumLeft == sumRight) {
                res = i;
                break;
            }
        }
        cout<< res << endl;
    }
    
    return 0;
}