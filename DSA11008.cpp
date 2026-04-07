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
int firstLevel = -1;
bool checkLeafLevel(Node* root, int currentLevel) {
    if (root == NULL) return true;
    if (root->left == NULL && root->right == NULL) {
        if (firstLevel == -1) {
            firstLevel = currentLevel;
            return true;
        }
        return (firstLevel == currentLevel);
    }
    return checkLeafLevel(root->left, currentLevel + 1) && checkLeafLevel(root->right, currentLevel + 1);
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        firstLevel = -1;
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
        cout<< (checkLeafLevel(root, 0) ? 1 : 0) << endl;
    }
    
    return 0;
}