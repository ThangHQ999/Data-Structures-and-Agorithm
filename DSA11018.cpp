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

void preorder(Node* root) {
    if (!root) return;
    cout<< root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

Node* insertBST(Node* root, int val) {
    if (!root) return new Node(val);
    if (val < root->data) {
        root->left = insertBST(root->left, val);
    } else {
        root->right = insertBST(root->right, val);
    }
    return root;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        Node* root = NULL;
        for (int i=0; i<n; i++) {
            int x;
            cin>> x;
            root = insertBST(root, x);
        }
        preorder(root);
        cout<< endl;
    }
    
    return 0;
}