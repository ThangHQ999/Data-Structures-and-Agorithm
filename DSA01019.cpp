#include <bits/stdc++.h>
using namespace std;

int n;
string str = "AH";
char s[100001];

bool check() {
    if (s[n] != 'A' || s[1] != 'H') return false;
    for (int i=1; i<=n; i++) {
        if (s[i-1] == 'H' && s[i] == 'H') {
            return false;
        }
    }
    return true;
}

void hienthi() {
    for (int i=1; i<=n; i++) {
        cout<< s[i];
    }
    cout<< endl;
}

void Try(int i) {
    for (int j=0; j<=1; j++) {
        s[i] = str[j];
        if (i==n) {
            if (check()) hienthi();
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
        Try(1);
    }
    
    return 0;
}