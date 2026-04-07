#include <bits/stdc++.h>
using namespace std;

int n;
int a[100];      
bool x[100];     
vector<int> temp;

void khoitao() {
    for (int i = 1; i <= n; i++) {
        int val;
        cin >> val;
        temp.push_back(val);
    }
    sort(temp.begin(), temp.end());
}

void hienthi() {
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void Try(int i) {
    for (int j = 0; j < n; j++) {
        
        if (!x[j]) {
            a[i] = temp[j];   
            x[j] = true;      
            
            if (i == n) hienthi();
            else Try(i + 1);
            
            x[j] = false;    
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    
    memset(x, false, sizeof(x)); 
    
    khoitao();
    Try(1);
    
    return 0;
}