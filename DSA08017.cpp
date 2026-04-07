#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        queue<string> q;
        vector<string> a;
        q.push("");
        while (!q.empty())
        {
            string x = q.front();
            q.pop();

            string z = x+"6";
            if (z.length() > n) {
                break;
            }
            q.push(z);
            a.push_back(z);
            z = x+"8";
            if (z.length() > n) {
                break;
            }
            q.push(z);
            a.push_back(z);
        }
        for (int i=a.size()-1; i>=0; i--) {
            cout<< a[i] << " ";
        }
        cout<< endl;
    }
    
    return 0;
}