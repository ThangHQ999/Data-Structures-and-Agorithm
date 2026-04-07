#include <bits/stdc++.h>
using namespace std;
int N;
int a[100000], visited[1000000] = {0};

void sinh() {
    int j= N-1;
    while (j>0 && a[j]>a[j+1]) j--;
    if (j>0) {
        int k=N;
        while (a[j] > a[k])
        {
            k--;
        }
        int t = a[j];
        a[j]=a[k];
        a[k]=t;
        int r=j+1, s=N;
        while (r<=s)
        {
            swap(a[r], a[s]);
            r++;
            s--;
        }
    }
}

void hienthi() {
    for (int i=1; i<=N; i++) {
        cout<< a[i] << " ";
    }
    cout<< endl;
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        cin>> N;
        for (int i=1; i<=N; i++) {
            cin>> a[i];
        }
        sinh();
        hienthi();
    }
    
    return 0;
}