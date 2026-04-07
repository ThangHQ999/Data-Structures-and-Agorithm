#include <bits/stdc++.h>
using namespace std;

long long merge(vector<long long>& a, int l, int m,int r) {
    vector<long long> leftArr(a.begin()+l, a.begin()+m+1); 
    vector<long long> rightArr(a.begin()+m+1, a.begin()+r+1); 
    long long cnt = 0;
    int i=0, j=0;
    while (i < leftArr.size() && j < rightArr.size())
    {
        if (leftArr[i] <= rightArr[j]) {
            a[l++] = leftArr[i++];
        } else {
            cnt += leftArr.size() - i;
            a[l++] = rightArr[j++];
        }
    }
    while (i < leftArr.size())
    {
        a[l++] = leftArr[i++];
    }
    while (j < rightArr.size())
    {
        a[l++] = rightArr[j++];
    }
    return cnt;
}

long long mergeSort(vector<long long>& a, int l, int r) {
    long long cnt = 0;
    if (l < r) {
        int m = l + (r-l)/2;
        cnt += mergeSort(a, l, m);
        cnt += mergeSort(a, m+1, r);
        cnt += merge(a, l, m, r);
    }
    return cnt;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        vector<long long> a(n);
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        long long cnt = mergeSort(a, 0, n-1);
        cout<< cnt << endl;
    }
    return 0;
}