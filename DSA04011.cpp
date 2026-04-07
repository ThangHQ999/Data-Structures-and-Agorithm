#include <bits/stdc++.h>
using namespace std;

long long binaryToNum(string s) {
    long long res = 0;
    for (int i = 0; i < s.length(); i++) {
        res = (res << 1) | (s[i] - '0');
    }
    return res;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        string s1, s2;
        cin>> s1 >> s2;
        cout<< binaryToNum(s1) * binaryToNum(s2) << endl;
    }
    
    return 0;
}