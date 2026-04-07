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
        queue<string> q;
        q.push("1");
        while (n--)
        {
            string s = q.front();
            q.pop();
            cout<< s << " ";
            q.push(s + "0");
            q.push(s + "1");
        }
        cout<< endl;
    }
    
    return 0;
}