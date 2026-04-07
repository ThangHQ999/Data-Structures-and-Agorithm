#include <bits/stdc++.h>
using namespace std;
int n, k, x[100000];

void sinh() {
    int i = k;
    while (x[i] == x[i-1] + 1 && i >= 1)
    {
        i--;
    }
    if (i != 0) x[i]--;
    for (int j=i+1; j<=k; j++) {
        x[j] = n-k+j;
    }
}

void hienthi() {
    for (int i=1; i<=k; i++) {
        cout<< x[i] << " ";
    }
    cout<< endl;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        cin>> n >> k;
        for (int i=1; i<=k; i++) {
            cin>> x[i];
        }
        sinh();
        hienthi();
    }
    
    return 0;
}