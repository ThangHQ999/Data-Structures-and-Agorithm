#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n, x;
        cin>> n >> x;
        int find = -1;
        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin>> a[i];
            if (a[i] == x) find = 1;
        }
        cout<< find << endl;
    }
    
    return 0;
}