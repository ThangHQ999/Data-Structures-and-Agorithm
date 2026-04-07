#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int d;
        string s;
        cin>> d >> s;
        int fre[26] = {0};
        int cnt = 0;
        for (char c: s) {
            fre[c-'A']++;
        }
        for (int i: fre) {
            if (i >0) cnt++;
        }
        cout<< (d-cnt > 0 ? -1 : 1) << endl;
    }
    
    return 0;
}