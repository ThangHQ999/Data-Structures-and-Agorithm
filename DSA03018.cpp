#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        int n4 = -1, n7 = -1;
        for (int i=n/7; i>=0; i--) {
            int remain = n - 7*i;
            if (remain >= 0 && remain % 4 == 0) {
                n7 = i;
                n4 = remain / 4;
                break;
            }
        }
        if (n4 == -1) {
            cout<< -1 << endl;
        } else {
            for (int i = 0; i < n4; i++) cout << 4;
        for (int i = 0; i < n7; i++) cout << 7;
        cout << endl;
        }
    }
    
    return 0;
}