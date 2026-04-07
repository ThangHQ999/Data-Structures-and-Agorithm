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

void printSpiralOrder(Node* root) {
    if (root == NULL) return;
    int direction = 0;
    stack<Node*> s1;
    stack<Node*> s2;
    s1.push(root);
    while (!s1.empty() || !s2.empty())
    {
        while (!s1.empty())
        {
            Node* temp = s1.top();
            s1.pop();
            cout<< temp->data << " ";
            if (temp->right != NULL) s2.push(temp->right);
            if (temp->left != NULL) s2.push(temp->left);
        }
        while (!s2.empty())
        {
            Node* temp = s2.top();
            s2.pop();
            cout<< temp->data << " ";
            if (temp->left != NULL) s1.push(temp->left);
            if (temp->right != NULL) s1.push(temp->right);
        }
    }
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
        printSpiralOrder(root);
        cout<< endl;
    }
    
    return 0;
}