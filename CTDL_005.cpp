#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* makeNode(int x) {
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void pushBack(Node* &head, int x) {
    Node* newNode = makeNode(x);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void printList(Node* First) {
    while (First != NULL) {
        cout << First->data << " ";
        First = First->next;
    }
    cout << endl;
}

int removeAll(Node* &First, int x) {
    int count = 0;

    while (First != NULL && First->data == x) {
        Node* temp = First;     
        First = First->next;   
        delete temp;            
        count++;
    }

    Node* current = First;
    
    while (current != NULL && current->next != NULL) {
        if (current->next->data == x) {
            Node* nodeToDelete = current->next;
            
            current->next = nodeToDelete->next;
            
            delete nodeToDelete;
            count++;
            
        } else {
            current = current->next;
        }
    }

    return count;
}

int main() {
    int n, x;
    cin>> n;
    Node* head = NULL;
    for (int i=0; i<n; i++) {
        int data;
        cin>> data;
        pushBack(head, data);
    }

    cin>> x;
    removeAll(head, x);
    printList(head);
    return 0;
}