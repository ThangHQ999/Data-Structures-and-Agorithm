#include <bits/stdc++.h>
using namespace std;
int N, visited[100] = {0}, a[100], cnt = 0;

void hienthi() {
    cnt++;
    cout<< cnt << ": ";
    for (int i=1; i<=N; i++) {
        cout<< a[i] << " ";
    }
    cout<< endl;
}

void Try(int i) {
    for (int j=1; j<=N; j++) {
        if (!visited[j]) {
            a[i] = j;
            visited[j] = true;
            if (i == N) {
                hienthi();
            } else {
                Try(i+1);
            }
            visited[j] = false;
        }
    }
}

int main() {
    cin>> N;
    for (int i=1; i<=N; i++) {
        a[i] = i;
    }
    Try(1);
    return 0;
}