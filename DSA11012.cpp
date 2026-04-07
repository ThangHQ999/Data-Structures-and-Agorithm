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

bool isIdentical(Node* r1, Node* r2) {
    if (r1 == NULL && r2 == NULL) return true;
    if (r1 != NULL && r2 != NULL) {
        return (r1->data == r2->data && isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right));
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
        map<int, Node*> m;
        Node* root1 = NULL;
        Node* root2 = NULL;
        for (int i=0; i<n; i++) {
            int u, v;
            char x;
            cin>> u >> v>> x;
            if (m.find(u) == m.end()) {
                root1 = new Node(u);
                m[u] = root1;
            }
            Node* child = new Node(v);
            m[v] = child;
            if (x == 'L') m[u]->left = child;
            else m[u]->right = child;
        }
        m.clear();
        int a;
        cin>> a;
        for (int i=0; i<a; i++) {
            int u, v;
            char x;
            cin>> u >> v>> x;
            if (m.find(u) == m.end()) {
                root2 = new Node(u);
                m[u] = root2;
            }
            Node* child = new Node(v);
            m[v] = child;
            if (x == 'L') m[u]->left = child;
            else m[u]->right = child;
        }
        if (n != a) {
            cout<< 0 << endl;
            continue;
        }
        cout<< (isIdentical(root1, root2) ? 1 : 0 ) << endl;
    }
    
    return 0;
}