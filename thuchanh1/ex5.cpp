#include <bits/stdc++.h>
using namespace std;
int n, k , a[100];
struct Node
{
    int s;
    vector<int> v;
};
vector<Node> res;
vector<int> cur;
bool cmp(Node a, Node b) {
    if (a.s != b.s) return a.s < b.s;
    return a.v < b.v;
}

void Try(int i, int sum) {
    if (i > n) {
        if (!cur.empty() && sum <= k) {
            res.push_back({sum, cur});
        }
        return;
    }
    Try(i+1, sum);
    if (sum + a[i] <= k) {
        cur.push_back(i);
        Try(i+1, sum+a[i]);
        cur.pop_back();
    }
}

int main() {
    cin>> n >> k;
    for (int i=1; i<=n; i++) {
        cin>> a[i];
    }
    Try(1, 0);
    sort(res.begin(), res.end(), cmp);
    if (res.size() == 0) {
        cout<< -1 << endl;
        return 0;
    }
    for (auto x: res) {
        for (int i=0; i<x.v.size(); i++) {
            cout<< x.v[i] << " ";
        }
        cout<< endl;
        cout<< "Sum = " << x.s << endl;
    }
    return 0;
}