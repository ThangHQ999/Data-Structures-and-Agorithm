#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n, s, m;
        cin>> n >> s >> m;
        int day = ceil((double)(s*m)/(double)n);
        int week= s/7;
        if (day > s-week) {
            cout<< -1 << endl;
        } else {
            cout<< day << endl;
        }
    }
    
    return 0;
}