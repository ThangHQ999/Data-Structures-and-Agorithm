#include <bits/stdc++.h>
using namespace std;

int dx[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dy[8] = {-1, 1, 2, 2, 1, -1, -2, -2};

struct Node
{
    int i, j, dist;
};


int BFS() {
    queue<Node> q;
    while (!q.empty())
    {
        Node u = q.front();
        q.pop();
        int i = u.i;
        int j = u.j;
        int d = u.dist;
        for (int i=0; i<8; i++) {
            if (i + )
        }
    }
    
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        string s1, s2;
        cin>> s1 >> s2;
        
    }
    
    return 0;
}