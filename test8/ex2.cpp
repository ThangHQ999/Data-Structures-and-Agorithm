#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        if (n == 0) {
            cout<< 0 << endl;
            continue;
        }
        long long res = -1;
        queue<string> q;
        q.push("1");
        while (res == -1)
        {
            string s = q.front();
            q.pop();
            if(stoll(s)%n == 0) res = stoll(s);
            q.push(s + "0");
            q.push(s + "1");
        }
        cout<< res << endl;
    }
    
    return 0;
}