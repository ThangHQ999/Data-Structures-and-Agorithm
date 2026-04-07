#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n, cnt = 0;
        cin>> n;
        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        for (int i=0; i<n; i++) {
            int min_pos = i;
            for (int j=i+1; j<n; j++) {
                if (a[j] < a[min_pos]) min_pos = j;
            }
            if (min_pos != i) {
                swap(a[i], a[min_pos]);
                cnt++;
            }
        }
        cout<< cnt << endl;
    }
    
    return 0;
}