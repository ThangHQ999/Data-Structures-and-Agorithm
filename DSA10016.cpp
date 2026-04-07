#include <bits/stdc++.h>
using namespace std;

struct Point {
    double x, y;
};

double distance(Point a, Point b) {
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

void prim() {
    int n;
    cin>> n;
    vector<Point> p(n);
    for (int i=0; i<n; i++) {
        cin>> p[i].x >> p[i].y;
    }
    vector<double> minDist(n, 1e18);
    vector<bool> vs(n, false);
    double d = 0;
    minDist[0] = 0;
    for (int i=0; i<n; i++) {
        int u = -1;
        for (int j=0; j<n; j++) {
            if (!vs[j] && (u == -1 || minDist[j] < minDist[u])) {
                u = j;
            }
        }
        if (minDist[u] == 1e18) break;
        vs[u] = true;
        d += minDist[u];
        for (int v=0; v<n; v++) {
            if (!vs[v]) {
                double dist = distance(p[u], p[v]);
                if (dist < minDist[v]) {
                    minDist[v] = dist;
                }
            }
        }
    }
    cout<< fixed << setprecision(6) << d << endl;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        prim();
    }
    
    return 0;
}