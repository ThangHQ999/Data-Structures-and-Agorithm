#include <bits/stdc++.h>
using namespace std;
struct Node
{
    char data;
    Node* left;
    Node* right;
    Node (char val) {
        data = val;
        left = right = NULL;
    }
};
bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data;
        inorder(root->right);
    }
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        string p;cin>> p;
        stack<Node*> s;
        for (char c: p) {
            if (isOperator(c)) {
                Node* t = new Node(c);
                Node* r = s.top(); s.pop();
                Node* l = s.top(); s.pop();
                t->left = l;
                t->right = r;
                s.push(t);
            } else {
                s.push(new Node(c));
            }
        }
        Node* root = s.top();
        inorder(root);
        cout<< endl;
    }
    
    return 0;
}