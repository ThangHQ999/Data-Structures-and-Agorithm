#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n, k;
        cin>> n >> k;
        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        sort(a.begin(), a.end());
        long long cnt = 0;
        int left = 0;
        for (int right = 0; right <n; right++) {
            while (a[right] - a[left] >= k)
            {
                left++;
            }
            cnt += (long long)(right - left);
        }
        cout<< cnt << endl;
    }
    
    return 0;
}