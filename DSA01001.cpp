#include <bits/stdc++.h>
using namespace std;

int ok, n, a[100000] = {0}; 

void hienthi() {
    for (int i=1; i<=n; i++) {
        cout<< a[i];
    }
    cout<< endl;
}

void sinh() {
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i==0) ok = 0;
    else a[i] = 1;
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        string str;
        cin>> str;
        n = str.length();
        for(int i=1; i<=n; i++) {
            a[i] = str[i-1] - '0';
        }
        sinh();
        hienthi();
    }
    return 0;
}