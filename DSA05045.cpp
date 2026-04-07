#include <bits/stdc++.h>
using namespace std;
struct Item
{
    int weight, profit;
};

bool cmp(Item a, Item b) {
    double r1 = (double)a.profit / a.weight;
    double r2 = (double)b.profit / b.weight;
    return r1 > r2;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n, w;
        cin>> n >> w;
        Item a[n];
        for (int i=0; i<n; i++) {
            cin>> a[i].profit >> a[i].weight;
        }
        sort(a, a+n, cmp);
        double res = 0;
        for (int i=0; i<n; i++) {
            if (w <= 0) break;
            if (a[i].weight <= w) {
                res += a[i].profit;
                w -= a[i].weight;
            } else {
                res += (double)a[i].profit*w/a[i].weight;
                w = 0;
            }
        }
        cout<< fixed << setprecision(2) << res << endl;
    }
    
    return 0;
}