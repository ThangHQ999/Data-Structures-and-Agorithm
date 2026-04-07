#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>> n;
    vector<int> a(n);
    vector<vector<int>> history;
    for (int i=0; i<n; i++) {
        cin>> a[i];
    }
    for (int i=0; i<n-1; i++) {
        int min_pos = i;
        for (int j=i+1; j<n; j++) {
            if (a[j] < a[min_pos]) {
                min_pos = j;                
            }
        }
        swap(a[i], a[min_pos]);
        history.push_back(a);
    }
    for (int i=history.size()-1; i>=0; i--) {
        cout<< "Buoc " << i+1 << ":";
        for (int val: history[i]) {
            cout<< " " << val;
        }
        cout<< endl;
    }
    return 0;
}