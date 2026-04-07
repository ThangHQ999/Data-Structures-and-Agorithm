#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        int a[n], b[n-1];
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        for (int i=0; i<n-1; i++) {
            cin>> b[i];
        }
        int pos = -1;
        for (int i=0; i<n-1; i++) {
            if (a[i] != b[i]) {
                pos = i + 1;
                break;
            }
        }
        if (pos == -1) pos = n;
        cout<< pos << endl; 
    }
    
    return 0;
}