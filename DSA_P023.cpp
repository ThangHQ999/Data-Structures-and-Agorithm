#include <bits/stdc++.h>
using namespace std;
int n, k, cnt =0, a[10000001];

bool isPrime(int n) {
    if (n<2) return false;
    if (n==2 || n==3) return true;
    if (n%2 ==0) return false;
    for (int i=3; i<=sqrt(n); i+=2) {
        if (n%i == 0) return false;
    }
    return true;
}

void hienthi() {
    cout<< cnt << ":";
    for (int i=1; i<=k; i++) {
        cout<< " " << a[i];
    }
    cout<< endl;
}

void Try(int i) {
    for (int j=a[i-1]+1; j<=n-k+i; j++) {
        a[i] = j;
        if (i==k){
            cnt++;
            if (isPrime(cnt)) hienthi();
        } 
        else Try(i+1);
    }
}

int main() {
    cin>> n >> k;
    Try(1);
    return 0;
}