#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n; 
        long long k;
        cin>> n >> k;
        vector<long long> a(n);
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        bool found = false;
        sort(a.begin(), a.end());
        for (int i=0; i<n-2; i++) {
            int left = i+1;
            int right = n-1;
            while (left < right)
            {
                if (a[left] + a[right] + a[i] > k) {
                    right--;
                } else if (a[left] + a[right] + a[i] < k) {
                    left++;
                } else {
                    found = true;
                    break;
                }
            }
        }
        cout<< (found ? "YES": "NO") << endl;
    }
    
    return 0;
}