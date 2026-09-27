#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, d;
    cin >> n >> m >> d;

    vector<int> a;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            a.push_back(x);
        }
    }

    // Check whether transformation is possible
    for (int i = 1; i < a.size(); i++) {
        if ((a[i] - a[0]) % d != 0) {
            cout << -1 << endl;
            return 0;
        }
    }

    // Median gives minimum total moves
    sort(a.begin(), a.end());

    int target = a[a.size() / 2];

    long long ans = 0;

    for (int x : a) {
        ans += abs(x - target) / d;
    }

    cout << ans << endl;

    return 0;
}