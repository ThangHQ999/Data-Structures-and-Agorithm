#include <bits/stdc++.h>
using namespace std;
int n;
bool vs[100], c[100];
int res = 0;
vector<string> a;

bool check() {

}

void Try(int idx) {
    for (int i=1; i<=n; i++) {
        if (!vs[a[i]]) {
            vs[a[i]] = true;
            x[idx] = a[i];
            Try(idx+1);
            vs[a[i]] = false;
        }
    }
}

int main() {
    cin>> n;
    for (int i=0; i<n; i++) {
        string s;
        cin>> s;
        a.push_back(s);
    }
    return 0;
}