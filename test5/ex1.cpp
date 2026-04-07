#include <bits/stdc++.h>
using namespace std;
int money[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        int cnt = 0;
        int idx = 9;
        while (n>0)
        {
            while (n < money[idx])
            {
                idx--;
            }
            cnt+=n/money[idx];
            n = n%money[idx];
        }
        cout<< cnt << endl;
    }
    
    return 0;
}