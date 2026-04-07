#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[100];
set<string> temp;
vector<string> v;

void hienthi() {
    for (int i=1; i<=k; i++) {
        cout<< v[a[i]-1] << " ";
    }
    cout<< endl;
}

void Try(int i) {
    for (int j=a[i-1] + 1; j<=n - k + i; j++) {
        a[i] = j;
        if (i == k) hienthi();
        else Try(i + 1);
    }
}

int main() {
    cin>> n >> k;
    for (int i=0; i<n; i++) {
        string s;
        cin>> s;
        temp.insert(s);
    }
    for (string s: temp) {
        v.push_back(s);
    }
    n = v.size();
    a[0] = 0;
    Try(1);
    return 0;
}