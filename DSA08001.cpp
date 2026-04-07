#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        queue<int> q;
        while (n--)
        {
            int option;
            cin>> option;
            switch (option)
            {
            case 1:
                cout<< q.size() << endl;
                break;
            case 2:
                cout<< (q.empty() ? "YES" : "NO") << endl;
                break;
            case 3:
                int x;
                cin>> x;
                q.push(x);
                break;
            case 4:
                if (!q.empty()) q.pop();
                break;
            case 5:
                cout<< (q.empty() ? -1: q.front()) << endl;
                break;
            default:
                cout<< (q.empty() ? -1: q.back()) << endl;
                break;
            }
        }
        
    }
    
    return 0;
}