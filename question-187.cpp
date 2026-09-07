#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    int mn = INT_MAX;
    int mx = INT_MIN;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }

    // Difference k se zyada hai to impossible
    if (mx - mn > k) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    // Colors distribute karna
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < a[i]; j++) {
            cout << (j % k) + 1 << " ";
        }
        cout << "\n";
    }

    return 0;
}