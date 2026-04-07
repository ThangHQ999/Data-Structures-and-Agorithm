#include <bits/stdc++.h>
using namespace std;
int n, x[10000001];

void khoitao() {
    string str;
    cin>> str;
    n = str.length();
    for (int i=1; i<=n; i++) {
        x[i] = str[i-1] - '0';
    }
}

void hienthi() {
    for (int i=1; i<=n; i++) {
        cout<< x[i];
    }
    cout<< endl;
}

void sinh() {
    int i=n; 
    while (i>0 && x[i] == 0)
    {
        x[i] = 1;
        i--;
    }
    x[i] = 0;
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        khoitao();
        sinh();
        hienthi();
    }
    return 0;
}