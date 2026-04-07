#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        vector<int> a(n), l(n), r(n);
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        stack<int> st_left;
        for (int i=0; i<n; i++) {
            while (!st_left.empty() && a[st_left.top()] >= a[i])
            {
                st_left.pop();
            }
            if (st_left.empty()) {
                l[i] = -1;
            } else {
                l[i] = st_left.top();
            }
            st_left.push(i);
        }
        stack<int> st_right;
        for (int i=n-1; i>=0; i--) {
            while (!st_right.empty() && a[st_right.top()] >= a[i])
            {
                st_right.pop();
            }
            if (st_right.empty()) {
                r[i] = n;
            } else {
                r[i] = st_right.top();
            }
            st_right.push(i);
        }
        long long ans = 0;
        for (int i=0; i<n; i++) {
            int width = r[i] - l[i] - 1;
            ans = max(ans, (long long)width*a[i]);
        }
        cout<< ans << endl;
    }
    
    return 0;
}