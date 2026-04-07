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
        vector<int> b = a;
        sort(b.begin(), b.end());
        bool can = true;
        for (int i=0; i<n/2; i++) {
            if (!((a[i] == b[i] && a[n-1-i] == b[n-1-i]) || (a[i] == b[n-1-i] && a[n-1-i] == b[i]))) {
                can = false;
                break;
            }
        }
        cout<< (can ? "Yes": "No") << endl;
    }
    
    return 0;
}