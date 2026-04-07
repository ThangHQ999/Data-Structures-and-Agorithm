#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

void inorder() {

}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        vector<int> a(n+1);
        for (int i=1; i<=n; i++) {
            cin>> a[i];
        }
        sort(a.begin() + 1, a.end());
        cout<< (n % 2 == 0 ? a[n/2] : a[n/2+1]) << endl;
    }
    
    return 0;
}