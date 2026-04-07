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
        set<int> s;
        for (int i=0; i<n; i++) {
            cin>> a[i];
            s.insert(a[i]);
        }
        if (s.size() >= 2) {
            auto it = s.begin();
            int last = *it;
            it++;
            int second_last = *it;
            cout<< last << " " << second_last << endl;
        } else {
            cout<< -1 << endl;
        }
    }
    
    return 0;
}