#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> interval;

    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    // Create intervals
    for (int i = 0; i < n - 1; i++) {
        int l = min(x[i], x[i + 1]);
        int r = max(x[i], x[i + 1]);
        interval.push_back({l, r});
    }

    int m = interval.size();

    for (int i = 0; i < m; i++) {
        for (int j = i + 2; j < m; j++) {

            // Adjacent arcs sharing an endpoint are allowed
            if (interval[i].second == interval[j].first ||
                interval[j].second == interval[i].first)
                continue;

            int l1 = interval[i].first;
            int r1 = interval[i].second;

            int l2 = interval[j].first;
            int r2 = interval[j].second;

            if ((l1 < l2 && l2 < r1 && r1 < r2) ||
                (l2 < l1 && l1 < r2 && r2 < r1)) {
                cout << "yes\n";
                return 0;
            }
        }
    }

    cout << "no\n";

    return 0;
}