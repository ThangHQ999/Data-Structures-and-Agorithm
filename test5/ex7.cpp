#include <bits/stdc++.h>
using namespace std;
const long long base = 1e9+7;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        vector<int> a(n);
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i=0; i<n; i++) {
            cin>> a[i];
            pq.push(a[i]);
        }
        long long res = 0;
        while (pq.size() >= 2)
        {
            int min1 = pq.top(); pq.pop();
            int min2 = pq.top(); pq.pop();
            int sum = min1 + min2;
            res = res + sum;
            pq.push(sum);
        }
        cout<< res << endl;
    }
    
    return 0;
}