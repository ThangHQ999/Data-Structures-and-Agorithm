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
        stack<int> st_nge;
        vector<int> nextGreater(n, -1);
        for (int i=n-1; i>=0; i--) {
            while (!st_nge.empty() && a[st_nge.top()] <= a[i])
            {
                st_nge.pop();
            }
            if (!st_nge.empty()) {
                nextGreater[i] = st_nge.top();
            }
            st_nge.push(i);
        }
        stack<int> st_rse;
        vector<int> rightSmaller(n, -1);
        for (int i=n-1; i>=0; i--) {
            while (!st_rse.empty() && a[st_rse.top()] >= a[i])
            {
                st_rse.pop();
            }
            if (!st_rse.empty()) {
                rightSmaller[i] = a[st_rse.top()];
            }
            st_rse.push(i);
        }
        for (int i=0; i<n; i++) {
            if (nextGreater[i] != -1) {
                cout<< rightSmaller[nextGreater[i]] << " ";
            } else {
                cout<< -1 << " ";
            }
        }
        cout<< endl;
    }
    
    return 0;
}
