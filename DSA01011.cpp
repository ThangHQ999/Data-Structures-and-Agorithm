#include <bits/stdc++.h>
using namespace std;
void solve() {
    int order;
        string a;
        cin>> order >> a;
        int i = a.length() - 2;
        while (i>= 0 && a[i] >= a[i+1])
        {
            i--;
        }
        if (i == -1) {
            cout<< order << " " <<"BIGGEST" << endl;
            return;
        } 
            for (int j = a.length() - 1; j > i; --j) {
            if (a[j] > a[i]) {
                swap(a[i], a[j]);
                sort(a.begin() + i + 1, a.end());
                break;
            }
        }
        cout<< order << " " << a << endl;
        return;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}