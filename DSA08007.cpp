#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    cin.ignore();
    while (t--)
    {
        queue<string> q;
        q.push("1");
        string n;
        cin>> n;
        int res = 0;
        while (!q.empty())
        {
            string z = q.front();
            q.pop();
            res++;

            string x = z+"0";
            if ((x.length()> n.length()) || (x.length() == n.length() && x > n)) {
                break;
            }
            q.push(x);
            x = z + "1";
            if ((x.length()> n.length()) || (x.length() == n.length() && x > n)) {
                break;
            }
            q.push(x);
        }
        cout<< res + q.size() << endl;
    }
    
    return 0;
}