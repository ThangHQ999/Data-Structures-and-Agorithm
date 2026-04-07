#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>> n;
    vector<int> a, b;
    for (int i=1; i<=n; i++) {
        int x;
        cin>> x;
        if (i%2 != 0) a.push_back(x);
        else b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
    int p_le = 0;
    int p_chan = 0;
    for (int i=1; i<=n; i++) {
        if (i%2 != 0) {
            cout<< a[p_le] << " ";
            p_le++;
        }
        else {
            cout<< b[p_chan] << " ";
            p_chan++;
        }
    }
    cout<< endl;
    return 0;
}