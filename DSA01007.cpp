#include <bits/stdc++.h>
using namespace std;

int n;
string str = "AB";
char s[100001];

void khoitao() {
    for (int i=1; i<=n; i++) {
        s[i] = 'A';
    }
}

void hienthi() {
    for (int i=1; i<=n; i++) {
        cout<< s[i];
    }
    cout<< " ";
}

void Try(int i) {
    int lenStr = str.length();
    for (int j=0; j<lenStr; j++) {
        s[i] = str[j];
        if (i == n) {
            hienthi();
        } else {
            Try(i+1);
        }
    }
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        cin>> n;
        khoitao();
        Try(1);
        cout<< "\n";
    }
    
    return 0;
}