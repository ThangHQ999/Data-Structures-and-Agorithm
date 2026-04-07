#include <bits/stdc++.h>
using namespace std;

// Node của đa thức
struct Node {
    int heso;
    int somu;
    Node* next;
};

// Tạo node mới
Node* taoNode(int heso, int somu) {
    Node* p = new Node;
    p->heso = heso;
    p->somu = somu;
    p->next = NULL;
    return p;
}

// Thêm node vào cuối danh sách
void themCuoi(Node*& head, int heso, int somu) {
    Node* p = taoNode(heso, somu);
    if (head == NULL) {
        head = p;
    } else {
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = p;
    }
}

// Cộng hai đa thức
Node* congDaThuc(Node* P, Node* Q) {
    Node* R = NULL;

    while (P != NULL && Q != NULL) {
        if (P->somu > Q->somu) {
            themCuoi(R, P->heso, P->somu);
            P = P->next;
        } 
        else if (P->somu < Q->somu) {
            themCuoi(R, Q->heso, Q->somu);
            Q = Q->next;
        } 
        else {
            int tong = P->heso + Q->heso;
            if (tong != 0) {
                themCuoi(R, tong, P->somu);
            }
            P = P->next;
            Q = Q->next;
        }
    }

    // Thêm phần còn lại
    while (P != NULL) {
        themCuoi(R, P->heso, P->somu);
        P = P->next;
    }

    while (Q != NULL) {
        themCuoi(R, Q->heso, Q->somu);
        Q = Q->next;
    }

    return R;
}

// In đa thức
void inDaThuc(Node* head) {
    while (head != NULL) {
        cout << head->heso << "x^" << head->somu;
        if (head->next != NULL) cout << " + ";
        head = head->next;
    }
    cout << endl;
}

// Demo
int main() {
    Node* P = NULL;
    Node* Q = NULL;
    string s1, s2;
    cin>> s1 >> s2;
    stringstream ss1(s1), ss2(s2);
    string token;
    while (ss1>> token)
    {
        int i=0;
        int heso = 0, coso = 0;
        while (isdigit((token[i])))
        {
            heso+=(int)(token[i]);
            i++;
        }
        while (!isdigit((token[i])))
        {
            i++;
        }
        while (isdigit((token[i])))
        {
            if (i == token.length()) {
                themCuoi(P, heso, coso);
            }
            coso+=(int)(token[i]);
            i++;
        }
    }

    while (ss2>> token)
    {
        int i=0;
        int heso = 0, coso = 0;
        while (isdigit((token[i])))
        {
            heso+=(int)(token[i]);
            i++;
        }
        while (!isdigit((token[i])))
        {
            i++;
        }
        while (isdigit((token[i])))
        {
            if (i == token.length()) {
                themCuoi(Q, heso, coso);
            }
            coso+=(int)(token[i]);
            i++;
        }
    }

    Node* R = congDaThuc(P, Q);

    inDaThuc(R);

    return 0;
}