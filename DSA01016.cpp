#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a;

void Try(int limit, int remain) {
    if (remain == 0) {
        cout<< "(";
        for (int i = 0; i < a.size(); ++i) {
            cout << a[i];
            if (i < a.size() - 1) cout << " ";
        }
        cout << ") ";
        return;
    }
    for (int i=limit; i>=1; i--) {
        if (remain >= i) {
            a.push_back(i);
            Try(i , remain-i);
            a.pop_back();
        }
    }
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        cin>> n;
        a.clear();
        Try(n, n);
        cout<< endl;
    }
    
    return 0;
}