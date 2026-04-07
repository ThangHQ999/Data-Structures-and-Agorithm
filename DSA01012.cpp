#include<bits/stdc++.h>
using namespace std;
int a[10000] = {0}, n;

string toBinaryString(int num, int n) {
    string s = "";
    for (int i=n-1; i>=0; i--) {
        if ((num >> i) & 1) s+= "1";
        else s += "0";
    }
    return s;
}

void solve() {
    int numCodes = 1 << n;
    for (int i=0; i<numCodes; i++) {
        int grayCode = i^(i>>1);
        cout<< toBinaryString(grayCode, n) << (i == numCodes - 1 ? "": " ");
    }
    cout<< endl;
}

int main() {
    int t;
    cin>> t;
    a[1] = 0;
    while (t--)
    {
        cin>> n;
        solve();
    }
    
    return 0;
}