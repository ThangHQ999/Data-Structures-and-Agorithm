#include <bits/stdc++.h>
using namespace std;
int a[100001], n , k;

void hienthi() {
    for (int i=1; i<=k; i++) {
        cout<< a[i] << " ";
    }
    cout<< endl;
}

void Try(int i) {
    for (int j=n-k+i; j>=a[i-1]+1; j--) {
        a[i] = j;
        if (i == k) hienthi();
        else Try(i+1);
    }
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        cin>> n >> k;
        Try(1);
    }
    
    return 0;
}