#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n, cnt = 0;
        cin>> n;
        vector<int> a(n);
        set<int> s;
        for (int i=0; i<n; i++) {
            cin>> a[i];
            s.insert(a[i]);
        }
        int min_ele = *min_element(a.begin(), a.end());
        int max_ele = *max_element(a.begin(), a.end());
        for (int i=min_ele; i<=max_ele; i++) {
            if (s.find(i) == s.end()) {
                cnt++;
            }
        }
        cout<< cnt << endl;
    }
    
    return 0;
}