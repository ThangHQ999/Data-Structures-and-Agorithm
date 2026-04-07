#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n, x;
        cin>> n >> x;
        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        int left =0, right = n-1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (a[mid] == x) {
                cout<< mid + 1 << endl;
                break;
            }
            if (a[mid] >= a[left]) {
                if (a[left] <= x && x < a[mid]) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            } else {
                if (a[mid] < x && x <= a[right]) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }
    }
    
    return 0;
}