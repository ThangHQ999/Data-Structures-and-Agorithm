#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        for (int i=1; i<=n; i++) {
            int value = i;
            vector<int> q;
            while (value>0)
            {
                int du = value%2;
                value/=2;
                q.push_back(du);
            }
            for (int j=q.size()-1; j>=0; j--) {
                cout<< q[j];
            }
            cout<< " ";
        }
        cout<< endl;
        
    }
    
    return 0;
}