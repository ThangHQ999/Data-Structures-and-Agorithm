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

Node* buildBalancedTree(int a[], int L, int R) {
    if (L>R) return NULL;
    int mid = (L+R)/2;
    Node* root = new Node(a[mid]);
    root->left = buildBalancedTree(a, L, mid - 1);
    root->right = buildBalancedTree(a, mid + 1, R);
    return root;
}

void preorder(Node* root) {
    if (!root) return;
    cout<< root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        int a[n];
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        sort(a, a+n);
        Node* root = buildBalancedTree(a, 0, n-1);
        preorder(root);
        cout<< endl;
    }
    
    return 0;
}