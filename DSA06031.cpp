#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n, k;
        cin>> n >> k;
        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        for (int i=0; i<=n-k; i++) {
            int element = *max_element(a.begin()+i, a.begin()+i+k);
            cout<< element << " ";
        }
        cout<< endl;
    }
    
    return 0;
}