#include <bits/stdc++.h>
using namespace std;
struct Job {
    int id, deadline, profit;
};

bool compare(Job a, Job b) {
    return a.profit > b.profit;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        vector<Job> jobs(n);
        int maxDeadline = 0;
        for (int i=0; i<n; i++) {
            cin>> jobs[i].id >> jobs[i].deadline >> jobs[i].profit;
            if (jobs[i].deadline > maxDeadline) {
                maxDeadline = jobs[i].deadline;
            }
        }
        sort(jobs.begin(), jobs.end(), compare);
        vector<bool> slot(maxDeadline + 1, false);
        int cnt = 0, totalProfit = 0;
        for (int i=0; i<n; i++) {
            for (int j=jobs[i].deadline; j>0; j--) {
                if (!slot[j]) {
                    slot[j] = true;
                    cnt++;
                    totalProfit += jobs[i].profit;
                    break;
                }
            }
        }
        cout<< cnt << " " << totalProfit << endl;
    }
    
    return 0;
}