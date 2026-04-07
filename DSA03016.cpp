#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int s, d;
        cin>> s >> d;
        if (s > 9*d || (s == 0 && d > 1)) {
            cout<< -1 << endl;
            continue;
        }
        vector<int> res(d);
        s-=1;
        for (int i=d-1; i>0; i--) {
            if (s > 9) {
                res[i] = 9;
                s -= 9;
            } else {
                res[i] = s;
                s = 0;
            }
        }
        res[0] = s + 1;
        for (int i=0; i<d; i++) {
            cout<< res[i];
        }
        cout<< endl;
    }
    
    return 0;
}