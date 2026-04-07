#include <bits/stdc++.h>
using namespace std;

int dem[10000] = {0};

int main() {
    int n;
    cin>> n;
    vector<int> a(n, 0);
    for (int i=0; i<n; i++) {
        cin>> a[i];
    }
    for (int i=0; i<=1000; i++) {
        if (dem[a[i]] > 0) cout<< a[i] << " ";
    }
    cout<< endl;
    return 0;
}