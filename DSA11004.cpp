#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

void levelOrder(Node* root) {
    if (root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        Node* curr = q.front();
        q.pop();
        cout<< curr->data << " ";
        if (curr->left != NULL) {
            q.push(curr->left);
        }
        if (curr->right != NULL) {
            q.push(curr->right);
        }
    }
    cout<< endl;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        map<int, Node*> m;
        Node* root = NULL;
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
        levelOrder(root);
    }
    
    return 0;
}