#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* right;
    Node* left;
    Node(int val) {
        data = val;
        right = left = NULL;
    }
};

bool isFullTree(Node* root) {
    if (root == NULL) return true;
    if (root->left == NULL && root->right == NULL) return true;
    if (root->left && root->right) {
        return (isFullTree(root->left) && isFullTree(root->right));
    }
    return false;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        Node* root = NULL;
        map<int, Node*> m;
        for (int i=0; i<n; i++) {
            int u, v;
            char x;
            cin>> u >> v >> x;
            if (m.find(u) == m.end()) {
                root = new Node(u);
                m[u] = root;
            }
            Node* child = new Node(v);
            m[v] = child;
            if (x == 'L') m[u]->left = child;
            else m[u]->right = child;
        }
        cout<< (isFullTree(root) ? 1 : 0 ) << endl;
    }
    
    return 0;
}