#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long l, r, k;
        cin >> l >> r >> k;

        // Case: Only one number in array
        if (l == r) {
            if (l > 1) cout << "YES\n";
            else cout << "NO\n";
            continue;
        }

        // Count odd numbers in range [l, r]
        long long total = r - l + 1;
        long long odd_count = (r + 1) / 2 - (l / 2);

        if (odd_count <= k) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}