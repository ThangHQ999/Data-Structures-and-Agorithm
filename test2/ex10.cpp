#include <bits/stdc++.h>
using namespace std;
int n, k, a[1000001];
string str;
bool ok = true;
vector<string> q;
set<string> s;

void hienthi() {
    for (int i=1; i<=k; i++) {
        cout<< q[a[i]-1] << " ";
    }
    cout<< endl;
}

void sinh() {
    int i = k;
    int u = q.size();
    while (i>0 && a[i] == u-k+i)
    {
        i--;
    }
    if (i == 0) ok = false;
    else {
        a[i]++;
        for (int j=i+1; j<=k ; j++) {
            a[j] = a[i] + j-i;
        }
    }
}

int main() {
    cin>> n >> k;
    for (int i=0; i<n; i++) {
        cin>> str;
        s.insert(str);
    }
    for (string t: s) {
        q.push_back(t);
    }
    for (int i=1; i<=k; i++) {
        a[i] = i;
    }
    while (ok)
    {
        hienthi();
        sinh();
    }
    return 0;
}