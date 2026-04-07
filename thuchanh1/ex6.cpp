#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>> n;
    vector<long long> a(n);
    for (int i=0; i<n; i++) cin>> a[i];
    stack<int> st;
    long long maxVal = 0;
    int i=0;
    while (i<n)
    {
        if (st.empty() || a[st.top()] <= a[i]) {
            st.push(i++);
        } else {
            int t = st.top();
            st.pop();
            long long w = st.empty() ? i : i - st.top() -1;
            maxVal = max(maxVal, a[t] * w);
        }
    }
    while (!st.empty()) 
    {
        int t = st.top();
        st.pop();
        long long w = st.empty() ? i : i - st.top() -1;
        maxVal = max(maxVal, a[t] * w);
    }
    cout<< maxVal << endl;
}

int main() {
    solve();
    return 0;
}