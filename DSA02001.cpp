#include <bits/stdc++.h>
using namespace std;
int n;

void hienthi(vector<int> a) {
    cout<< "[";
    for (int i=0; i<a.size(); i++) {
        cout<< a[i];
        if (i != a.size() - 1) cout << " ";
    }
    cout<< "]\n";
}

void Try(vector<int> a) {
    hienthi(a);
    if (a.size() == 1) return;
    vector<int> next;
    for (int i=0; i<a.size()-1; i++) {
        next.push_back(a[i]+a[i+1]);
    }
    Try(next);
} 

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        vector<int> a;
        cin>> n;
        for (int i=1; i<=n; i++) {
            int x;
            cin>> x;
            a.push_back(x);
        }
        Try(a);
    }
    
    return 0;
}