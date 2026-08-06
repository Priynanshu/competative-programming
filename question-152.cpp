#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <queue>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<vector<long long>> a(n, vector<long long>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
        // Sort each row in descending order
        sort(a[i].rbegin(), a[i].rend());
    }

    // Binary search over possible number of removed pieces X in range [1, m - 1]
    auto check = [&](int X) -> bool {
        priority_queue<long long, vector<long long>, greater<long long>> min_heap;
        long long current_sum = 0;

        for (int i = n - 1; i >= 0; i--) {
            // Add top X elements from row i to our candidate pool
            for (int j = 0; j < min(m, X); j++) {
                min_heap.push(a[i][j]);
                current_sum += a[i][j];
                if ((int)min_heap.size() > X) {
                    current_sum -= min_heap.top();
                    min_heap.pop();
                }
            }
            // If the X largest pieces from rows >= i can collapse row i
            if ((int)min_heap.size() == X && current_sum >= v[i]) {
                return true;
            }
        }
        return false;
    };

    int low = 1, high = m - 1;
    int ans = m; // Fallback: removing all m pieces from any single row

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (check(mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << "\n";
}

int main() {
    // Optimize input/output operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}