#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        string s;
        cin>> s;
        int maxFre = 0;
        int pre[26] = {0};
        for (char c: s) {
            pre[c-'a']++;
            maxFre = max(maxFre, pre[c-'a']);
        }
        if (maxFre <= (s.length()+1)/2) {
            cout<< 1 << endl;
        } else {
            cout<< -1 << endl;
        }
    }
    
    return 0;
}