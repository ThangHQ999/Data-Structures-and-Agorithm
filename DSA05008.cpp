#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n, s;
        cin>> n >> s;
        vector<int> a(n);
        vector<bool> total(s+1, false);
        total[0] = true;
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        for (int i=0; i<n; i++) {
            for (int j=s; j>= a[i]; j--) {
                if (total[j-a[i]] == true) {
                    total[j] = true;
                } 
            }
        }
        cout<< (total[s] ? "YES": "NO") << endl;
    }
    
    return 0;
}