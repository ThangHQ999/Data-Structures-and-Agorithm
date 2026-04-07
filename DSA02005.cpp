#include <bits/stdc++.h>
using namespace std;

int n;
int z = 0;
vector<int> a;
vector<bool> x;
string s;

void khoitao() {
    for (int i=0; i<=n; i++) {
        x.push_back(true);
        a.push_back(i);
    }
}
 
void hienthi() {
    for (int j=1; j<=n; j++) {
        cout<< s[a[j]-1];
    }
    cout<< " ";
}

void Try(int i) {
    for (int j=1; j<=n; j++) {
        if (x[j]) {
            a[i] = j;
            x[j] = false;
            if (i == n) hienthi();
            else Try(i+1);
            x[j] = true; 
        }
        
    }
}

int main() {
    int t;
    cin>> t;
    cin.ignore();
    while (t--)
    {
        cin>> s;
        sort(s.begin(), s.end());
        n = s.length();
        khoitao();
        Try(1);
        a.clear();
        x.clear();
        cout<< endl;
    }
    
   return 0;
}