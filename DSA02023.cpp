#include <bits/stdc++.h>
using namespace std;

int n, k;
int z = 0;
int a[10001];
string temp[10001];
set<string> s;

void hienthi() {
    for (int j=1; j<=k; j++) {
        cout<< temp[a[j]] << " ";
    }
    cout<< endl;
}

void Try(int i) {
    for (int j=a[i-1]+1; j<=z-k+i; j++) {
        a[i] = j;
        if (i == k) hienthi();
        else Try(i+1); 
    }
}

int main() {
    cin>> n >> k;
    for (int i=0; i<n; i++) {
        string x;
        cin>> x;
        s.insert(x);
    }
    for (string p: s) {
        z++;
        temp[z] = p;
    }
    if (z < k) return 0;
    Try(1);
    return 0;
}