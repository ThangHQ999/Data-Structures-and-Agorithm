#include <bits/stdc++.h>
using namespace std;
int a[1000000];
int n;

string solve(int n) {
    queue<string> q;
    q.push("9");
    while (!q.empty())
    {
        string cur = q.front();
        q.pop();

        long long remainder = 0;
        for (char c: cur) {
            remainder = (remainder*10 + c- '0') % n;            
        }
        if (remainder == 0) return cur;
        q.push(cur + "0");
        q.push(cur + "9");
    }
    
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        cin>> n;
        cout<< solve(n) << endl;
    }
    
    return 0;
}