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
    for (int i=0; i<n; i++) {
        int key = a[i];
        int j=i-1;
        while (j>=0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
        vector<int> sub_array(a.begin(), a.begin()+i+1);
        history.push_back(sub_array);
    }
    for (int i=history.size()-1; i>=0; i--) {
        cout<< "Buoc " << i << ":";
        for (int val: history[i]) {
            cout<< " " << val;
        }
        cout<< endl;
    }
    return 0;
}