#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        int start = 0, end = 0;
        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        vector<int> b(a);
        sort(b.begin(), b.end());
        for (int i=0; i<n; i++) {
            if (a[i] != b[i]) {
                start = i+1;
                break;
            }
        }
        for (int i=n-1; i>=0; i--) {
            if (a[i] != b[i]) {
                end = i+1;
                break;
            }
        }
        cout<< start << " " << end << endl;
    }
    
    return 0;
}