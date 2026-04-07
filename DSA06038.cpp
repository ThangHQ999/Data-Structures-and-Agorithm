#include <bits/stdc++.h>
using namespace std;

long long merge(vector<int>& a, int l, int m, int r) {
    vector<int> leftArr(a.begin() + l, a.begin() + m + 1);
    vector<int> rightArr(a.begin() + m + 1, a.begin() + r + 1);
    int i=0, j=0;
    long long cnt = 0;
    while (i < leftArr.size() && j < rightArr.size())
    {
        if (leftArr[i] < rightArr[j]) { 
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

long long mergeSort(vector<int>& a, int l, int r) {
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
    int n;
    cin>> n;
    vector<int> onlyEvens, currentCluster;
    vector<vector<int>> clusters;

    for (int i=0; i<n; i++) {
        int x; cin>> x;
        if (x % 2 == 0) {
            onlyEvens.push_back(x);
            currentCluster.push_back(x);
        } else {
            if (!currentCluster.empty()) {
                clusters.push_back(currentCluster);
                currentCluster.clear();
            }
        }
    }

    if (!currentCluster.empty()) clusters.push_back(currentCluster);

    long long totalEvenInversions = 0;
    if (!onlyEvens.empty()) {
        totalEvenInversions = mergeSort(onlyEvens, 0, onlyEvens.size()-1);
    }
    long long internalInversions = 0;
    for (auto& cluster: clusters) {
        if (cluster.size() > 1) {
            internalInversions += mergeSort(cluster, 0, cluster.size() - 1);
        }
    }
    cout<< totalEvenInversions - internalInversions << endl;
    return 0;
}