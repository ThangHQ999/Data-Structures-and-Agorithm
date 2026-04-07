#include <bits/stdc++.h>
using namespace std;

bool doiXung(string s) {
    int n = s.length();
    for (int i=0; i<=n/2; i++) {
        if (s[i] != s[n-1-i]) return false;
    }
    return true;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        queue<string> q;
        q.push("4");
        q.push("5");
        while (n--)
        {
            string s = q.front();
            q.pop();
            string prev = s;
            reverse(prev.begin(), prev.end());
            cout<< s + prev << " ";
            q.push(s + "4");
            q.push(s + "5");
        }
        cout<< endl;
    }
    
    return 0;
}