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

Node* buildTree(int pre[], int n) {
    if (n == 0) return NULL;
    Node* root = new Node(pre[0]);
    stack<Node*> st;
    st.push(root);
    for (int i=1; i<n; i++) {
        Node* temp = NULL;
        while (!st.empty() && pre[i] > st.top()->data)
        {
            temp = st.top();
            st.pop();
        }
        if (temp != NULL) {
            temp->right = new Node(pre[i]);
            st.push(temp->right);
        } else {
            Node* newnode = new Node(pre[i]);
            st.top()->left = newnode;
            st.push(newnode);
        }
    }   
    return root;
}

int findLevel(Node* root) {
    if (!root) return 0;
    int leftLevel = findLevel(root->left);
    int rightLevel = findLevel(root->right);
    return max(leftLevel, rightLevel) + 1;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        int pre[n];
        for (int i=0; i<n; i++) cin>> pre[i];
        Node* root = buildTree(pre, n);
        cout<< findLevel(root) - 1 << endl;
    }
    
    return 0;
}