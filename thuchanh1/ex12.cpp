#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin>> n >> k;
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    long long total = 0;
    for (int i=0; i<n; i++) {
        long long x;
        cin>> x;
        pq.push(x);
        total+=x;
    }
    long long cost = 0;
    while (pq.size() > 1)
    {
        int t = min((int)pq.size(), k);
        long long first = pq.top();
        long long last = first;
        long long curStep = 0;
        for (int i=0; i<t; i++) {
            last = pq.top();
            curStep += last;
            pq.pop();
        }
        cost+=(last - first);
        pq.push(curStep);
    }
    cout<< pq.top() << endl;
    cout<< cost << endl;
    
    return 0;
}