#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        set<char> s;
        for (int i=0; i<n; i++) {
            string str;
            cin>> str;
            for (char c: str) {
                s.insert(c);
            }
        }
        for (char c: s) {
            cout<< c << " ";
        }
        cout<< endl;
    }
    
    return 0;
}