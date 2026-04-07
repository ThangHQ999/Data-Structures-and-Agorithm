#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    Node (int val) {
        data = val;
        left = right = NULL;
    }
};
unordered_map<int, int> inMap;
void postorder(Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<< root->data << " ";
}

Node* buildTree(vector<int> level, int inStart, int inEnd) {
    if (inStart > inEnd) return NULL;
    Node* root = new Node(level[0]);
    int inIndex = inMap[level[0]];
    vector<int> leftLevel, rightLevel;
    for (int i=1; i<level.size(); i++) {
        if (inMap[level[i]] < inIndex) {
            leftLevel.push_back(level[i]);
        } else {
            rightLevel.push_back(level[i]);
        }
    }
    if (root) {
        root->left = buildTree(leftLevel, inStart, inIndex - 1);
        root->right = buildTree(rightLevel, inIndex + 1, inEnd);
    }
    return root;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        inMap.clear();
        int n;
        cin>> n;
        int in[n];
        vector<int> level(n);
        for (int i=0; i<n; i++) {
            cin>> in[i];
        }
        for (int i=0; i<n; i++) {
            cin>> level[i];
        }
        for (int i=0; i<n; i++) {
            inMap[in[i]] = i;
        }
        Node* root = buildTree(level, 0, n-1);
        postorder(root);
        cout<< endl;
    }
    
    return 0;
}